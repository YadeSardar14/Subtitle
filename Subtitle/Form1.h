#pragma once
#include "SUB_H.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//MessageBox::Show(gcnew String(std::to_string(SET_SUBTI5LE("C:\\Users\\m0939\\Desktop\\morteza_gh\\New folder", "The Rebel S01E03 720p WEB-DL unicode.srt", 5)).c_str()));
			
			//	MessageBox::Show("eroor");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PAEnternal;
	protected:

	private: System::Windows::Forms::Button^ BTSubtitle;
	private: System::Windows::Forms::Button^ BTSubtitles;

	private: System::Windows::Forms::TextBox^ TXSubtitleName;

	private: System::Windows::Forms::Label^ LASubtitleName;
	private: System::Windows::Forms::Button^ BTSubtitleBack;
	private: System::Windows::Forms::Button^ BTSubtitleOK;
	private: System::Windows::Forms::Panel^ PASubtitleName;
	private: System::Windows::Forms::NumericUpDown^ NUSubtitleSec;


	private: System::Windows::Forms::Label^ LASubtitleSec;
	private: System::Windows::Forms::Label^ LASubtitleNameEx;
	private: System::Windows::Forms::Panel^ PASubtitleAddress;
	private: System::Windows::Forms::TextBox^ TXSubtitleAddress;
	private: System::Windows::Forms::Label^ LASubtitleAddress;
	private: System::Windows::Forms::Panel^ PASubtitle;
	private: System::Windows::Forms::Panel^ PASubtitles;
	private: System::Windows::Forms::Panel^ PASubtitlesAddress;

	private: System::Windows::Forms::TextBox^ TXSubtitlesAddress;
	private: System::Windows::Forms::Label^ LASubtitlesAddress;
	private: System::Windows::Forms::NumericUpDown^ NUSubtitlesSec;

	private: System::Windows::Forms::Label^ LASubtitlesSec;

	private: System::Windows::Forms::Label^ LASubtitlesNameEx;
	private: System::Windows::Forms::Panel^ PASubtitlesName;
	private: System::Windows::Forms::TextBox^ TXSubtitlesName;
	private: System::Windows::Forms::Label^ LASubtitlesName;
	private: System::Windows::Forms::Button^ BTSubtitlesBack;
	private: System::Windows::Forms::Button^ BTSubtitlesOK;
	private: System::Windows::Forms::Label^ LAEpType_;
	private: System::Windows::Forms::Panel^ PaEpType;


	private: System::Windows::Forms::TextBox^ TXEpType;

	private: System::Windows::Forms::Label^ LAEpType;
	private: System::Windows::Forms::NumericUpDown^ NUEpCount;

	private: System::Windows::Forms::Label^ LAEpCount;
	private: System::Windows::Forms::NumericUpDown^ NUEpEnd;

	private: System::Windows::Forms::Label^ LAEpEnd;
	private: System::Windows::Forms::NumericUpDown^ NUEpStart;


	private: System::Windows::Forms::Label^ LAEpStart;







	protected:


	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PAEnternal = (gcnew System::Windows::Forms::Panel());
			this->BTSubtitles = (gcnew System::Windows::Forms::Button());
			this->BTSubtitle = (gcnew System::Windows::Forms::Button());
			this->PASubtitle = (gcnew System::Windows::Forms::Panel());
			this->PASubtitleAddress = (gcnew System::Windows::Forms::Panel());
			this->TXSubtitleAddress = (gcnew System::Windows::Forms::TextBox());
			this->LASubtitleAddress = (gcnew System::Windows::Forms::Label());
			this->NUSubtitleSec = (gcnew System::Windows::Forms::NumericUpDown());
			this->LASubtitleSec = (gcnew System::Windows::Forms::Label());
			this->LASubtitleNameEx = (gcnew System::Windows::Forms::Label());
			this->PASubtitleName = (gcnew System::Windows::Forms::Panel());
			this->TXSubtitleName = (gcnew System::Windows::Forms::TextBox());
			this->LASubtitleName = (gcnew System::Windows::Forms::Label());
			this->BTSubtitleBack = (gcnew System::Windows::Forms::Button());
			this->BTSubtitleOK = (gcnew System::Windows::Forms::Button());
			this->PASubtitles = (gcnew System::Windows::Forms::Panel());
			this->NUEpEnd = (gcnew System::Windows::Forms::NumericUpDown());
			this->LAEpEnd = (gcnew System::Windows::Forms::Label());
			this->NUEpStart = (gcnew System::Windows::Forms::NumericUpDown());
			this->LAEpStart = (gcnew System::Windows::Forms::Label());
			this->NUEpCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->LAEpCount = (gcnew System::Windows::Forms::Label());
			this->LAEpType_ = (gcnew System::Windows::Forms::Label());
			this->PaEpType = (gcnew System::Windows::Forms::Panel());
			this->TXEpType = (gcnew System::Windows::Forms::TextBox());
			this->LAEpType = (gcnew System::Windows::Forms::Label());
			this->PASubtitlesAddress = (gcnew System::Windows::Forms::Panel());
			this->TXSubtitlesAddress = (gcnew System::Windows::Forms::TextBox());
			this->LASubtitlesAddress = (gcnew System::Windows::Forms::Label());
			this->NUSubtitlesSec = (gcnew System::Windows::Forms::NumericUpDown());
			this->LASubtitlesSec = (gcnew System::Windows::Forms::Label());
			this->LASubtitlesNameEx = (gcnew System::Windows::Forms::Label());
			this->PASubtitlesName = (gcnew System::Windows::Forms::Panel());
			this->TXSubtitlesName = (gcnew System::Windows::Forms::TextBox());
			this->LASubtitlesName = (gcnew System::Windows::Forms::Label());
			this->BTSubtitlesBack = (gcnew System::Windows::Forms::Button());
			this->BTSubtitlesOK = (gcnew System::Windows::Forms::Button());
			this->PAEnternal->SuspendLayout();
			this->PASubtitle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUSubtitleSec))->BeginInit();
			this->PASubtitles->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUEpEnd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUEpStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUEpCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUSubtitlesSec))->BeginInit();
			this->SuspendLayout();
			// 
			// PAEnternal
			// 
			this->PAEnternal->Controls->Add(this->BTSubtitles);
			this->PAEnternal->Controls->Add(this->BTSubtitle);
			this->PAEnternal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PAEnternal->Location = System::Drawing::Point(0, 0);
			this->PAEnternal->Name = L"PAEnternal";
			this->PAEnternal->Size = System::Drawing::Size(493, 302);
			this->PAEnternal->TabIndex = 0;
			// 
			// BTSubtitles
			// 
			this->BTSubtitles->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BTSubtitles->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTSubtitles->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTSubtitles->ForeColor = System::Drawing::Color::Purple;
			this->BTSubtitles->Location = System::Drawing::Point(141, 149);
			this->BTSubtitles->Name = L"BTSubtitles";
			this->BTSubtitles->Size = System::Drawing::Size(201, 64);
			this->BTSubtitles->TabIndex = 1;
			this->BTSubtitles->Text = L"Some Subtitle";
			this->BTSubtitles->UseVisualStyleBackColor = false;
			this->BTSubtitles->Click += gcnew System::EventHandler(this, &Form1::BTSubtitles_Click);
			// 
			// BTSubtitle
			// 
			this->BTSubtitle->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BTSubtitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTSubtitle->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTSubtitle->ForeColor = System::Drawing::Color::Purple;
			this->BTSubtitle->Location = System::Drawing::Point(141, 68);
			this->BTSubtitle->Name = L"BTSubtitle";
			this->BTSubtitle->Size = System::Drawing::Size(201, 64);
			this->BTSubtitle->TabIndex = 0;
			this->BTSubtitle->Text = L"One Subtitle";
			this->BTSubtitle->UseVisualStyleBackColor = false;
			this->BTSubtitle->Click += gcnew System::EventHandler(this, &Form1::BTSubtitle_Click);
			// 
			// PASubtitle
			// 
			this->PASubtitle->Controls->Add(this->PASubtitleAddress);
			this->PASubtitle->Controls->Add(this->TXSubtitleAddress);
			this->PASubtitle->Controls->Add(this->LASubtitleAddress);
			this->PASubtitle->Controls->Add(this->NUSubtitleSec);
			this->PASubtitle->Controls->Add(this->LASubtitleSec);
			this->PASubtitle->Controls->Add(this->LASubtitleNameEx);
			this->PASubtitle->Controls->Add(this->PASubtitleName);
			this->PASubtitle->Controls->Add(this->TXSubtitleName);
			this->PASubtitle->Controls->Add(this->LASubtitleName);
			this->PASubtitle->Controls->Add(this->BTSubtitleBack);
			this->PASubtitle->Controls->Add(this->BTSubtitleOK);
			this->PASubtitle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PASubtitle->Location = System::Drawing::Point(0, 0);
			this->PASubtitle->Name = L"PASubtitle";
			this->PASubtitle->Size = System::Drawing::Size(493, 302);
			this->PASubtitle->TabIndex = 2;
			// 
			// PASubtitleAddress
			// 
			this->PASubtitleAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PASubtitleAddress->Location = System::Drawing::Point(161, 126);
			this->PASubtitleAddress->Name = L"PASubtitleAddress";
			this->PASubtitleAddress->Size = System::Drawing::Size(239, 2);
			this->PASubtitleAddress->TabIndex = 12;
			// 
			// TXSubtitleAddress
			// 
			this->TXSubtitleAddress->BackColor = System::Drawing::Color::Beige;
			this->TXSubtitleAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TXSubtitleAddress->Location = System::Drawing::Point(161, 112);
			this->TXSubtitleAddress->Name = L"TXSubtitleAddress";
			this->TXSubtitleAddress->Size = System::Drawing::Size(239, 13);
			this->TXSubtitleAddress->TabIndex = 11;
			// 
			// LASubtitleAddress
			// 
			this->LASubtitleAddress->AutoSize = true;
			this->LASubtitleAddress->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitleAddress->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitleAddress->Location = System::Drawing::Point(10, 107);
			this->LASubtitleAddress->Name = L"LASubtitleAddress";
			this->LASubtitleAddress->Size = System::Drawing::Size(145, 25);
			this->LASubtitleAddress->TabIndex = 10;
			this->LASubtitleAddress->Text = L"Folder Address :";
			// 
			// NUSubtitleSec
			// 
			this->NUSubtitleSec->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->NUSubtitleSec->ForeColor = System::Drawing::Color::DarkMagenta;
			this->NUSubtitleSec->Location = System::Drawing::Point(158, 176);
			this->NUSubtitleSec->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->NUSubtitleSec->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, System::Int32::MinValue });
			this->NUSubtitleSec->Name = L"NUSubtitleSec";
			this->NUSubtitleSec->Size = System::Drawing::Size(120, 20);
			this->NUSubtitleSec->TabIndex = 9;
			// 
			// LASubtitleSec
			// 
			this->LASubtitleSec->AutoSize = true;
			this->LASubtitleSec->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitleSec->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitleSec->Location = System::Drawing::Point(15, 171);
			this->LASubtitleSec->Name = L"LASubtitleSec";
			this->LASubtitleSec->Size = System::Drawing::Size(100, 25);
			this->LASubtitleSec->TabIndex = 6;
			this->LASubtitleSec->Text = L"Sec Swap :";
			// 
			// LASubtitleNameEx
			// 
			this->LASubtitleNameEx->AutoSize = true;
			this->LASubtitleNameEx->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitleNameEx->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitleNameEx->Location = System::Drawing::Point(14, 65);
			this->LASubtitleNameEx->Name = L"LASubtitleNameEx";
			this->LASubtitleNameEx->Size = System::Drawing::Size(101, 17);
			this->LASubtitleNameEx->TabIndex = 5;
			this->LASubtitleNameEx->Text = L"(With extension)";
			// 
			// PASubtitleName
			// 
			this->PASubtitleName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PASubtitleName->Location = System::Drawing::Point(158, 59);
			this->PASubtitleName->Name = L"PASubtitleName";
			this->PASubtitleName->Size = System::Drawing::Size(239, 2);
			this->PASubtitleName->TabIndex = 4;
			// 
			// TXSubtitleName
			// 
			this->TXSubtitleName->BackColor = System::Drawing::Color::Beige;
			this->TXSubtitleName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TXSubtitleName->Location = System::Drawing::Point(158, 45);
			this->TXSubtitleName->Name = L"TXSubtitleName";
			this->TXSubtitleName->Size = System::Drawing::Size(239, 13);
			this->TXSubtitleName->TabIndex = 3;
			// 
			// LASubtitleName
			// 
			this->LASubtitleName->AutoSize = true;
			this->LASubtitleName->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitleName->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitleName->Location = System::Drawing::Point(12, 40);
			this->LASubtitleName->Name = L"LASubtitleName";
			this->LASubtitleName->Size = System::Drawing::Size(140, 25);
			this->LASubtitleName->TabIndex = 2;
			this->LASubtitleName->Text = L"Subtitle Name :";
			// 
			// BTSubtitleBack
			// 
			this->BTSubtitleBack->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BTSubtitleBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTSubtitleBack->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTSubtitleBack->ForeColor = System::Drawing::Color::Purple;
			this->BTSubtitleBack->Location = System::Drawing::Point(12, 265);
			this->BTSubtitleBack->Name = L"BTSubtitleBack";
			this->BTSubtitleBack->Size = System::Drawing::Size(61, 25);
			this->BTSubtitleBack->TabIndex = 1;
			this->BTSubtitleBack->Text = L"Back";
			this->BTSubtitleBack->UseVisualStyleBackColor = false;
			this->BTSubtitleBack->Click += gcnew System::EventHandler(this, &Form1::BTSubtitleBack_Click);
			// 
			// BTSubtitleOK
			// 
			this->BTSubtitleOK->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BTSubtitleOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTSubtitleOK->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTSubtitleOK->ForeColor = System::Drawing::Color::Purple;
			this->BTSubtitleOK->Location = System::Drawing::Point(79, 265);
			this->BTSubtitleOK->Name = L"BTSubtitleOK";
			this->BTSubtitleOK->Size = System::Drawing::Size(61, 25);
			this->BTSubtitleOK->TabIndex = 0;
			this->BTSubtitleOK->Text = L"OK";
			this->BTSubtitleOK->UseVisualStyleBackColor = false;
			this->BTSubtitleOK->Click += gcnew System::EventHandler(this, &Form1::BTSubtitleOK_Click);
			// 
			// PASubtitles
			// 
			this->PASubtitles->Controls->Add(this->NUEpEnd);
			this->PASubtitles->Controls->Add(this->LAEpEnd);
			this->PASubtitles->Controls->Add(this->NUEpStart);
			this->PASubtitles->Controls->Add(this->LAEpStart);
			this->PASubtitles->Controls->Add(this->NUEpCount);
			this->PASubtitles->Controls->Add(this->LAEpCount);
			this->PASubtitles->Controls->Add(this->LAEpType_);
			this->PASubtitles->Controls->Add(this->PaEpType);
			this->PASubtitles->Controls->Add(this->TXEpType);
			this->PASubtitles->Controls->Add(this->LAEpType);
			this->PASubtitles->Controls->Add(this->PASubtitlesAddress);
			this->PASubtitles->Controls->Add(this->TXSubtitlesAddress);
			this->PASubtitles->Controls->Add(this->LASubtitlesAddress);
			this->PASubtitles->Controls->Add(this->NUSubtitlesSec);
			this->PASubtitles->Controls->Add(this->LASubtitlesSec);
			this->PASubtitles->Controls->Add(this->LASubtitlesNameEx);
			this->PASubtitles->Controls->Add(this->PASubtitlesName);
			this->PASubtitles->Controls->Add(this->TXSubtitlesName);
			this->PASubtitles->Controls->Add(this->LASubtitlesName);
			this->PASubtitles->Controls->Add(this->BTSubtitlesBack);
			this->PASubtitles->Controls->Add(this->BTSubtitlesOK);
			this->PASubtitles->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PASubtitles->Location = System::Drawing::Point(0, 0);
			this->PASubtitles->Name = L"PASubtitles";
			this->PASubtitles->Size = System::Drawing::Size(493, 302);
			this->PASubtitles->TabIndex = 3;
			// 
			// NUEpEnd
			// 
			this->NUEpEnd->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->NUEpEnd->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->NUEpEnd->Location = System::Drawing::Point(225, 219);
			this->NUEpEnd->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->NUEpEnd->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUEpEnd->Name = L"NUEpEnd";
			this->NUEpEnd->Size = System::Drawing::Size(40, 20);
			this->NUEpEnd->TabIndex = 22;
			this->NUEpEnd->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUEpEnd->ValueChanged += gcnew System::EventHandler(this, &Form1::NUEpEnd_ValueChanged);
			// 
			// LAEpEnd
			// 
			this->LAEpEnd->AutoSize = true;
			this->LAEpEnd->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LAEpEnd->ForeColor = System::Drawing::Color::RosyBrown;
			this->LAEpEnd->Location = System::Drawing::Point(188, 219);
			this->LAEpEnd->Name = L"LAEpEnd";
			this->LAEpEnd->Size = System::Drawing::Size(30, 25);
			this->LAEpEnd->TabIndex = 21;
			this->LAEpEnd->Text = L"To";
			// 
			// NUEpStart
			// 
			this->NUEpStart->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->NUEpStart->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->NUEpStart->Location = System::Drawing::Point(142, 220);
			this->NUEpStart->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->NUEpStart->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUEpStart->Name = L"NUEpStart";
			this->NUEpStart->Size = System::Drawing::Size(40, 20);
			this->NUEpStart->TabIndex = 20;
			this->NUEpStart->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUEpStart->ValueChanged += gcnew System::EventHandler(this, &Form1::NUEpStart_ValueChanged);
			// 
			// LAEpStart
			// 
			this->LAEpStart->AutoSize = true;
			this->LAEpStart->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LAEpStart->ForeColor = System::Drawing::Color::RosyBrown;
			this->LAEpStart->Location = System::Drawing::Point(12, 219);
			this->LAEpStart->Name = L"LAEpStart";
			this->LAEpStart->Size = System::Drawing::Size(121, 25);
			this->LAEpStart->TabIndex = 19;
			this->LAEpStart->Text = L"From Episode";
			// 
			// NUEpCount
			// 
			this->NUEpCount->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->NUEpCount->ForeColor = System::Drawing::Color::DarkMagenta;
			this->NUEpCount->Location = System::Drawing::Point(425, 163);
			this->NUEpCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->NUEpCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUEpCount->Name = L"NUEpCount";
			this->NUEpCount->Size = System::Drawing::Size(40, 20);
			this->NUEpCount->TabIndex = 18;
			this->NUEpCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// LAEpCount
			// 
			this->LAEpCount->AutoSize = true;
			this->LAEpCount->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LAEpCount->ForeColor = System::Drawing::Color::IndianRed;
			this->LAEpCount->Location = System::Drawing::Point(274, 158);
			this->LAEpCount->Name = L"LAEpCount";
			this->LAEpCount->Size = System::Drawing::Size(145, 25);
			this->LAEpCount->TabIndex = 17;
			this->LAEpCount->Text = L"Episodes Count :";
			// 
			// LAEpType_
			// 
			this->LAEpType_->AutoSize = true;
			this->LAEpType_->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LAEpType_->ForeColor = System::Drawing::Color::RosyBrown;
			this->LAEpType_->Location = System::Drawing::Point(12, 183);
			this->LAEpType_->Name = L"LAEpType_";
			this->LAEpType_->Size = System::Drawing::Size(170, 17);
			this->LAEpType_->TabIndex = 16;
			this->LAEpType_->Text = L"(Common part in all names)";
			// 
			// PaEpType
			// 
			this->PaEpType->BackColor = System::Drawing::Color::RosyBrown;
			this->PaEpType->Location = System::Drawing::Point(225, 178);
			this->PaEpType->Name = L"PaEpType";
			this->PaEpType->Size = System::Drawing::Size(36, 2);
			this->PaEpType->TabIndex = 15;
			// 
			// TXEpType
			// 
			this->TXEpType->BackColor = System::Drawing::Color::Beige;
			this->TXEpType->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TXEpType->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->TXEpType->Location = System::Drawing::Point(225, 164);
			this->TXEpType->Name = L"TXEpType";
			this->TXEpType->Size = System::Drawing::Size(36, 13);
			this->TXEpType->TabIndex = 14;
			this->TXEpType->Text = L"E";
			// 
			// LAEpType
			// 
			this->LAEpType->AutoSize = true;
			this->LAEpType->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LAEpType->ForeColor = System::Drawing::Color::RosyBrown;
			this->LAEpType->Location = System::Drawing::Point(10, 158);
			this->LAEpType->Name = L"LAEpType";
			this->LAEpType->Size = System::Drawing::Size(216, 25);
			this->LAEpType->TabIndex = 13;
			this->LAEpType->Text = L"Episodes Count Symbol : ";
			// 
			// PASubtitlesAddress
			// 
			this->PASubtitlesAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PASubtitlesAddress->Location = System::Drawing::Point(161, 117);
			this->PASubtitlesAddress->Name = L"PASubtitlesAddress";
			this->PASubtitlesAddress->Size = System::Drawing::Size(304, 2);
			this->PASubtitlesAddress->TabIndex = 12;
			// 
			// TXSubtitlesAddress
			// 
			this->TXSubtitlesAddress->BackColor = System::Drawing::Color::Beige;
			this->TXSubtitlesAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TXSubtitlesAddress->Location = System::Drawing::Point(161, 105);
			this->TXSubtitlesAddress->Name = L"TXSubtitlesAddress";
			this->TXSubtitlesAddress->Size = System::Drawing::Size(304, 13);
			this->TXSubtitlesAddress->TabIndex = 11;
			// 
			// LASubtitlesAddress
			// 
			this->LASubtitlesAddress->AutoSize = true;
			this->LASubtitlesAddress->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitlesAddress->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitlesAddress->Location = System::Drawing::Point(10, 100);
			this->LASubtitlesAddress->Name = L"LASubtitlesAddress";
			this->LASubtitlesAddress->Size = System::Drawing::Size(140, 25);
			this->LASubtitlesAddress->TabIndex = 10;
			this->LASubtitlesAddress->Text = L"Folder Address :";
			// 
			// NUSubtitlesSec
			// 
			this->NUSubtitlesSec->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->NUSubtitlesSec->ForeColor = System::Drawing::Color::DarkMagenta;
			this->NUSubtitlesSec->Location = System::Drawing::Point(370, 222);
			this->NUSubtitlesSec->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->NUSubtitlesSec->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, System::Int32::MinValue });
			this->NUSubtitlesSec->Name = L"NUSubtitlesSec";
			this->NUSubtitlesSec->Size = System::Drawing::Size(95, 20);
			this->NUSubtitlesSec->TabIndex = 9;
			// 
			// LASubtitlesSec
			// 
			this->LASubtitlesSec->AutoSize = true;
			this->LASubtitlesSec->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitlesSec->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitlesSec->Location = System::Drawing::Point(274, 217);
			this->LASubtitlesSec->Name = L"LASubtitlesSec";
			this->LASubtitlesSec->Size = System::Drawing::Size(96, 25);
			this->LASubtitlesSec->TabIndex = 6;
			this->LASubtitlesSec->Text = L"Sec Swap :";
			// 
			// LASubtitlesNameEx
			// 
			this->LASubtitlesNameEx->AutoSize = true;
			this->LASubtitlesNameEx->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitlesNameEx->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitlesNameEx->Location = System::Drawing::Point(9, 65);
			this->LASubtitlesNameEx->Name = L"LASubtitlesNameEx";
			this->LASubtitlesNameEx->Size = System::Drawing::Size(101, 17);
			this->LASubtitlesNameEx->TabIndex = 5;
			this->LASubtitlesNameEx->Text = L"(With extension)";
			// 
			// PASubtitlesName
			// 
			this->PASubtitlesName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PASubtitlesName->Location = System::Drawing::Point(225, 59);
			this->PASubtitlesName->Name = L"PASubtitlesName";
			this->PASubtitlesName->Size = System::Drawing::Size(239, 2);
			this->PASubtitlesName->TabIndex = 4;
			// 
			// TXSubtitlesName
			// 
			this->TXSubtitlesName->BackColor = System::Drawing::Color::Beige;
			this->TXSubtitlesName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TXSubtitlesName->Location = System::Drawing::Point(225, 45);
			this->TXSubtitlesName->Name = L"TXSubtitlesName";
			this->TXSubtitlesName->Size = System::Drawing::Size(239, 13);
			this->TXSubtitlesName->TabIndex = 3;
			// 
			// LASubtitlesName
			// 
			this->LASubtitlesName->AutoSize = true;
			this->LASubtitlesName->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LASubtitlesName->ForeColor = System::Drawing::Color::Purple;
			this->LASubtitlesName->Location = System::Drawing::Point(7, 40);
			this->LASubtitlesName->Name = L"LASubtitlesName";
			this->LASubtitlesName->Size = System::Drawing::Size(204, 25);
			this->LASubtitlesName->TabIndex = 2;
			this->LASubtitlesName->Text = L"One oF Subtitles Name :";
			// 
			// BTSubtitlesBack
			// 
			this->BTSubtitlesBack->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BTSubtitlesBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTSubtitlesBack->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTSubtitlesBack->ForeColor = System::Drawing::Color::Purple;
			this->BTSubtitlesBack->Location = System::Drawing::Point(12, 265);
			this->BTSubtitlesBack->Name = L"BTSubtitlesBack";
			this->BTSubtitlesBack->Size = System::Drawing::Size(61, 25);
			this->BTSubtitlesBack->TabIndex = 1;
			this->BTSubtitlesBack->Text = L"Back";
			this->BTSubtitlesBack->UseVisualStyleBackColor = false;
			this->BTSubtitlesBack->Click += gcnew System::EventHandler(this, &Form1::BTSubtitlesBack_Click);
			// 
			// BTSubtitlesOK
			// 
			this->BTSubtitlesOK->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BTSubtitlesOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTSubtitlesOK->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTSubtitlesOK->ForeColor = System::Drawing::Color::Purple;
			this->BTSubtitlesOK->Location = System::Drawing::Point(79, 265);
			this->BTSubtitlesOK->Name = L"BTSubtitlesOK";
			this->BTSubtitlesOK->Size = System::Drawing::Size(61, 25);
			this->BTSubtitlesOK->TabIndex = 0;
			this->BTSubtitlesOK->Text = L"OK";
			this->BTSubtitlesOK->UseVisualStyleBackColor = false;
			this->BTSubtitlesOK->Click += gcnew System::EventHandler(this, &Form1::BTSubtitlesOK_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(493, 302);
			this->Controls->Add(this->PASubtitles);
			this->Controls->Add(this->PASubtitle);
			this->Controls->Add(this->PAEnternal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Subtitle Fixe";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->PAEnternal->ResumeLayout(false);
			this->PASubtitle->ResumeLayout(false);
			this->PASubtitle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUSubtitleSec))->EndInit();
			this->PASubtitles->ResumeLayout(false);
			this->PASubtitles->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUEpEnd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUEpStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUEpCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUSubtitlesSec))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: bool NullError(String^ name, String^ address) {

		if (name == "")
		{
			MessageBox::Show("Pleas enter name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return true;
		}
		if (address == "")
		{
			MessageBox::Show("Pleas enter address.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return true;
		}
		return false;
		}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		PASubtitle->Hide();
		PASubtitles->Hide();
	}
	
	private: System::Void BTSubtitle_Click(System::Object^ sender, System::EventArgs^ e) {

		PAEnternal->Hide();
		
		PASubtitle->Show();
		

	}
	private: System::Void BTSubtitles_Click(System::Object^ sender, System::EventArgs^ e) {

		PAEnternal->Hide();

		PASubtitles->Show();


	}
	private: System::Void BTSubtitleBack_Click(System::Object^ sender, System::EventArgs^ e) {

		PAEnternal->Show();

		PASubtitle->Hide();
	}

	private: System::Void BTSubtitleOK_Click(System::Object^ sender, System::EventArgs^ e) {

		if (NullError(TXSubtitleName->Text, TXSubtitleAddress->Text))
		return;

		int Error = SET_SUBTI5LE(StringConvert(TXSubtitleAddress->Text),StringConvert(TXSubtitleName->Text), int(NUSubtitleSec->Value));

		if (!Error)
			MessageBox::Show("Repaired Successfully.","Successful",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		else
			MessageBox::Show("Subtitle not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);




	}

	private: System::Void BTSubtitlesBack_Click(System::Object^ sender, System::EventArgs^ e) {

		PAEnternal->Show();

		PASubtitles->Hide();

	}

	private: System::Void BTSubtitlesOK_Click(System::Object^ sender, System::EventArgs^ e) {


		if (NullError(TXSubtitlesName->Text, TXSubtitlesAddress->Text))
			return;

		int Error;


		if (NUEpEnd->Value == 1)
			Error = SET_SUBTI5LE(StringConvert(TXSubtitlesAddress->Text), StringConvert(TXSubtitlesName->Text), int(NUSubtitlesSec->Value), int(NUEpCount->Value), StringConvert(TXEpType->Text));
		else
			Error = SET_SUBTI5LE(StringConvert(TXSubtitlesAddress->Text), StringConvert(TXSubtitlesName->Text), int(NUSubtitlesSec->Value), int(NUEpStart->Value), int(NUEpEnd->Value), StringConvert(TXEpType->Text));



		Windows::Forms::DialogResult ShError;

		if (Error == 100)
			MessageBox::Show("The name, address or symbol of the parts is wrong!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (!Error)
			MessageBox::Show("Repaired Successfully.", "Successful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else if ((NUEpCount->Value > 1 || int(NUEpEnd->Value) - int(NUEpStart->Value) > 1))
			ShError = MessageBox::Show(Error.ToString() + " Subtitles not found!\nDo you want to see?", "Error List", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		else
			MessageBox::Show("Subtitle not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		if(ShError == Windows::Forms::DialogResult::Yes)
			MessageBox::Show("Subtitles", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void NUEpEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (NUEpEnd->Value < NUEpStart->Value)
			NUEpStart->Value = int(NUEpEnd->Value)-1;
	}
	private: System::Void NUEpStart_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (NUEpEnd->Value < NUEpStart->Value)
			NUEpEnd->Value = int(NUEpStart->Value) + 1;
	}
};
}
