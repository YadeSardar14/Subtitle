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
			this->PAEnternal->SuspendLayout();
			this->PASubtitle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUSubtitleSec))->BeginInit();
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(493, 302);
			this->Controls->Add(this->PAEnternal);
			this->Controls->Add(this->PASubtitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Subtitle Fixe";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->PAEnternal->ResumeLayout(false);
			this->PASubtitle->ResumeLayout(false);
			this->PASubtitle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUSubtitleSec))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		PASubtitle->Hide();
	}
	
	private: System::Void BTSubtitle_Click(System::Object^ sender, System::EventArgs^ e) {

		PAEnternal->Hide();
		
		PASubtitle->Show();
		

	}
	private: System::Void BTSubtitles_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BTSubtitleBack_Click(System::Object^ sender, System::EventArgs^ e) {

		PAEnternal->Show();

		PASubtitle->Hide();
	}

	private: System::Void BTSubtitleOK_Click(System::Object^ sender, System::EventArgs^ e) {

		int Error = SET_SUBTI5LE(StringConvert(TXSubtitleAddress->Text),StringConvert(TXSubtitleName->Text), int(NUSubtitleSec->Value));

		if (!Error)
			MessageBox::Show("Repaired Successfully.","Successful",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		else
			MessageBox::Show("Subtitle not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}
};
}
