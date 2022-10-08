#pragma once
#include <msclr\marshal_cppstd.h>
#include "seller.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SellerRegister
	/// </summary>
	public ref class SellerRegister : public System::Windows::Forms::Form
	{
	public:
		SellerRegister(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SellerRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ signUp;
	protected:
	private: System::Windows::Forms::TextBox^ idValeu;
	private: System::Windows::Forms::TextBox^ emailValue;
	private: System::Windows::Forms::TextBox^ nameValue;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SellerRegister::typeid));
			this->signUp = (gcnew System::Windows::Forms::Button());
			this->idValeu = (gcnew System::Windows::Forms::TextBox());
			this->emailValue = (gcnew System::Windows::Forms::TextBox());
			this->nameValue = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// signUp
			// 
			this->signUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->signUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUp->ForeColor = System::Drawing::Color::White;
			this->signUp->Location = System::Drawing::Point(500, 513);
			this->signUp->Name = L"signUp";
			this->signUp->Size = System::Drawing::Size(150, 59);
			this->signUp->TabIndex = 17;
			this->signUp->Text = L"Sign UP";
			this->signUp->UseVisualStyleBackColor = false;
			this->signUp->Click += gcnew System::EventHandler(this, &SellerRegister::signUp_Click);
			// 
			// idValeu
			// 
			this->idValeu->Location = System::Drawing::Point(397, 442);
			this->idValeu->Multiline = true;
			this->idValeu->Name = L"idValeu";
			this->idValeu->Size = System::Drawing::Size(379, 26);
			this->idValeu->TabIndex = 16;
			// 
			// emailValue
			// 
			this->emailValue->Location = System::Drawing::Point(397, 308);
			this->emailValue->Multiline = true;
			this->emailValue->Name = L"emailValue";
			this->emailValue->Size = System::Drawing::Size(379, 26);
			this->emailValue->TabIndex = 15;
			// 
			// nameValue
			// 
			this->nameValue->Location = System::Drawing::Point(397, 152);
			this->nameValue->Multiline = true;
			this->nameValue->Name = L"nameValue";
			this->nameValue->Size = System::Drawing::Size(379, 26);
			this->nameValue->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(391, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 32);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(391, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 32);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(391, 374);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 32);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Id";
			// 
			// SellerRegister
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 793);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->signUp);
			this->Controls->Add(this->idValeu);
			this->Controls->Add(this->emailValue);
			this->Controls->Add(this->nameValue);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Name = L"SellerRegister";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SellerRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signUp_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		String^ id = this->idValeu->Text;
		String^ email = this->emailValue->Text;
		String^ name = this->nameValue->Text;
		seller sellerS;
		std::string idS = context.marshal_as<std::string>(id);
		std::string emailS = context.marshal_as<std::string>(email);
		std::string nameS = context.marshal_as<std::string>(name);
		sellerS.registration(idS, nameS, emailS);
		MessageBox::Show("Registration completed", "Registration ", MessageBoxButtons::OK,MessageBoxIcon::Information);
		this->idValeu->Text = "";
		this->emailValue->Text = "";
		this->nameValue->Text = "";
	}
};
}
