#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

static std::vector <std::string> SubError;

class subtitle
{
private:
	int S;
	std::string adress;
	int ep_num;

public:
	subtitle(std::string adress, int ep_num, int secplus)
	{
		this->adress = adress;
		this->ep_num = ep_num;
		S = secplus;
	}

	std::string get_epnum()
	{
		return formater(ep_num);
	}

	int ch_converter(std::string str)
	{
		int num = 0;

		for (int ch = 0; ch < 3; ch++)
		{
			if (ch == 0)
				num += int(str[ch] - 48) * 10;
			else if (ch == 1 && str.length()>1)
				num += int(str[ch]) - 48;
		}
		5 + 6;
		return num;
	}

	bool time_check(std::string sec)
	{
		if ((ch_converter(sec) + S < 0) || ((ch_converter(sec) + S > 59)))
			return 0;

		return 1;
	}

	std::string formater(int num)
	{
		if (num > 9)
			return std::to_string(num);
		else if (num < 10 && num >= 0)
		{
			return "0" + std::to_string(num);
		}

		return NULL;
	}

	std::string time_set(std::string min, std::string sec)
	{
		int newMin = 0, newSec = 0;

		if (ch_converter(sec) + S < 0)
		{
			newSec = (ch_converter(sec) + S + 60);
			if (ch_converter(min) > 0)
				newMin = (ch_converter(min) - 1);
		}

		else if (ch_converter(sec) + S > 59)
		{
			newSec = (ch_converter(sec) + S - 60);
			newMin = (ch_converter(min) + 1);
		}

		return formater(newMin) + ":" + formater(newSec);
	}

	bool sub()
	{
		std::fstream file(this->adress);

		if (!file)
			return 0;

		for (int n = 1; !file.eof(); n++)
		{
			std::string test = " ", min = "", sec = "";

			file >> test;

			int count = 0;
			for (auto ch : test)
			{
				if (ch == ':')
				{
					count++;
					continue;
				}

				if (ch == ',')
					break;

				else if (count == 1)
					min += ch;
				else if (count == 2)
					sec += ch;
			}

			if (ch_converter(min) >= 0 && ch_converter(min) < 60)
			{
				//std::cout << "min : " << ch_converter(min) << "  sec : " << ch_converter(sec) << std::endl;

				long int x = file.tellg();

				if (x > 6)
				{
					file.seekp(x - 6);

					if (time_check(sec))
						file << formater(ch_converter(sec) + S);

					else
					{
						file.seekp(x - 9);
						file << time_set(min, sec);
					}

					file.seekp(x);
				}
			}
		}

		file.close();
		return 1;
	}
};




//OFFICIAL FUNKTION 

//OVER LOAD 1

int SET_SUBTI5LE(std::string adress, std::string name, int secplus)
{
	subtitle ep(adress + "\\" + name, 1, secplus);

	if (ep.sub())
		return 0;

	return 1;
}


//OVER LOAD 2


int SET_SUBTI5LE(std::string adress, std::string name, int secplus, int ep_count, std::string ep_type = "E")
{
	//std::vector<subtitle> sublist;
	std::string name_be = "";
	std::string name_aft = "";
	int error = 0;



	bool open_test = false;
	for (int n = 0; n < name.length(); n++)
	{
		if (name.find(ep_type, n) >= name.length())
		{
			//std::cout<<"##"<<n<<"##"<<name<<std::endl<<name.find(ep_type,0) <<std::endl;
			//flag "E" not fond!
			return 100;
			break;
		}

		else
		{
			int e = name.find(ep_type, n) + ep_type.length();


			if ((name[e]) > 47 && (name[e]) < 58)
			{
				name_be = name.substr(0, e);
				name_aft = name.substr(e + 1);

				if ((name[e + 1]) > 47 && (name[e + 1]) < 58)
					name_aft = name.substr(e + 2);

				open_test = true;
				break;
			}
		}
	}

	if (!open_test)
		return 100;

	//START SET
	SubError.clear();

	for (int n = 1; n < ep_count + 1;n++) {

		std::string adr = adress + "\\" + name_be + std::to_string(n) + name_aft;

		subtitle sub_test(adr, n, secplus);

		if (sub_test.sub())
			continue;

		else {

			adr = adress + "\\" + name_be + sub_test.get_epnum() + name_aft;
			subtitle sub_test2(adr, n, secplus);

			if (!sub_test2.sub()) {
				error++;
				SubError.push_back(name_be + sub_test.get_epnum() + name_aft);
			}
		}

	}



	return error;
}


//OVER LOAD 3



int SET_SUBTI5LE(std::string adress, std::string name, int secplus, int ep_start, int ep_end, std::string ep_type = "E")
{
	//std::vector<subtitle> sublist;
	std::string name_be = "";
	std::string name_aft = "";
	int error = 0;



	bool open_test = false;
	for (int n = 0; n < name.length(); n++)
	{

		if (name.find(ep_type, n) >= name.length())
		{
			//flag "E" not fond!

			return 100;
			break;
		}

		else
		{
			int e = name.find(ep_type, n) + ep_type.length();

			if ((name[e]) > 47 && (name[e]) < 58)
			{
				name_be = name.substr(0, e);
				name_aft = name.substr(e + 1);

				if ((name[e + 1]) > 47 && (name[e + 1]) < 58)
					name_aft = name.substr(e + 2);

				open_test = true;
				break;
			}
		}
	}

	if (!open_test)
		return 100;

	//START SET

	SubError.clear();

	for (int n = ep_start; n < ep_end + 1;n++) {

		std::string adr = adress + "\\" + name_be + std::to_string(n) + name_aft;

		subtitle sub_test(adr, n, secplus);

		if (sub_test.sub())
			continue;

		else {

			adr = adress + "\\" + name_be + sub_test.get_epnum() + name_aft;
			subtitle sub_test2(adr, n, secplus);

			if (!sub_test2.sub()) {
				error++;
				SubError.push_back(name_be + sub_test.get_epnum() + name_aft);
			}

		}

	}


	return error;
}


std::string StringConvert(String^ str) {
	std::string STR = std::string(reinterpret_cast<const char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str).ToPointer()));
	return STR;
}

String^ StringConvert(std::string str) {
	return gcnew String(str.c_str());
}

