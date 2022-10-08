#pragma once
#include "SellerRegister.h"
#include <msclr\marshal_cppstd.h>
#include "seller.h"
#include "productRegistration.h"
#include "porduct.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SellerLogin
	/// </summary>
	public ref class SellerLogin : public System::Windows::Forms::Form
	{
	public:
		SellerLogin(void)
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
		~SellerLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ emailValue;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ IdValue;

	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ registerSaller;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SellerLogin::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->emailValue = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IdValue = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->registerSaller = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(372, 286);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Email";
			// 
			// emailValue
			// 
			this->emailValue->Location = System::Drawing::Point(378, 343);
			this->emailValue->Multiline = true;
			this->emailValue->Name = L"emailValue";
			this->emailValue->Size = System::Drawing::Size(379, 26);
			this->emailValue->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(372, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"ID";
			// 
			// IdValue
			// 
			this->IdValue->Location = System::Drawing::Point(378, 201);
			this->IdValue->Multiline = true;
			this->IdValue->Name = L"IdValue";
			this->IdValue->Size = System::Drawing::Size(379, 26);
			this->IdValue->TabIndex = 6;
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::Color::White;
			this->loginButton->Location = System::Drawing::Point(501, 439);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(150, 59);
			this->loginButton->TabIndex = 7;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &SellerLogin::loginButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(373, 596);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(309, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"You don\'t have account";
			// 
			// registerSaller
			// 
			this->registerSaller->AutoSize = true;
			this->registerSaller->BackColor = System::Drawing::Color::Transparent;
			this->registerSaller->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerSaller->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->registerSaller->Location = System::Drawing::Point(636, 596);
			this->registerSaller->Name = L"registerSaller";
			this->registerSaller->Size = System::Drawing::Size(179, 32);
			this->registerSaller->TabIndex = 9;
			this->registerSaller->TabStop = true;
			this->registerSaller->Text = L"Register now";
			this->registerSaller->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SellerLogin::registerSaller_LinkClicked);
			// 
			// SellerLogin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(782, 793);
			this->Controls->Add(this->registerSaller);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->IdValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->emailValue);
			this->Controls->Add(this->label2);
			this->Name = L"SellerLogin";
			this->Text = L"SellerLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registerSaller_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		SellerRegister^ registers = gcnew SellerRegister;
		registers->Show();
		SellerLogin::Close();
	}
private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	String^ id = this->IdValue->Text;
	String^ email = this->emailValue->Text;
	seller sellerS;
	std::string idS = context.marshal_as<std::string>(id);
	std::string emailS = context.marshal_as<std::string>(email);
	bool checked = sellerS.login(idS, emailS);
	if (id!=""&& emailS!="")
	{
		if (checked)
		{
			MessageBox::Show("Login done", "done ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			productRegistration^ regist = gcnew productRegistration;
			regist->Show();
			regist->getSellerId(id);
			SellerLogin::Close();
		}
		else
		{
			MessageBox::Show("Login Error", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("Login Error", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
};
}
