#pragma once
#include "CustomerRegister.h"
#include <msclr\marshal_cppstd.h>
#include "customer.h"
#include "Market.h"
#include "Cart.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerLogin
	/// </summary>
	public ref class CustomerLogin : public System::Windows::Forms::Form
	{
	public:
		CustomerLogin(void)
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
		~CustomerLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ registerCustomer;
	protected:
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::TextBox^ IdValue;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ emailValue;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerLogin::typeid));
			this->registerCustomer = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->IdValue = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->emailValue = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// registerCustomer
			// 
			this->registerCustomer->AutoSize = true;
			this->registerCustomer->BackColor = System::Drawing::Color::Transparent;
			this->registerCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerCustomer->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->registerCustomer->Location = System::Drawing::Point(270, 552);
			this->registerCustomer->Name = L"registerCustomer";
			this->registerCustomer->Size = System::Drawing::Size(179, 32);
			this->registerCustomer->TabIndex = 19;
			this->registerCustomer->TabStop = true;
			this->registerCustomer->Text = L"Register now";
			this->registerCustomer->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CustomerLogin::registerCustomer_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(19, 552);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(309, 32);
			this->label4->TabIndex = 18;
			this->label4->Text = L"You don\'t have account";
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::Color::White;
			this->loginButton->Location = System::Drawing::Point(134, 412);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(150, 59);
			this->loginButton->TabIndex = 14;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &CustomerLogin::loginButton_Click);
			// 
			// IdValue
			// 
			this->IdValue->Location = System::Drawing::Point(24, 217);
			this->IdValue->Multiline = true;
			this->IdValue->Name = L"IdValue";
			this->IdValue->Size = System::Drawing::Size(379, 26);
			this->IdValue->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(18, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 32);
			this->label3->TabIndex = 22;
			this->label3->Text = L"ID";
			// 
			// emailValue
			// 
			this->emailValue->Location = System::Drawing::Point(24, 328);
			this->emailValue->Multiline = true;
			this->emailValue->Name = L"emailValue";
			this->emailValue->Size = System::Drawing::Size(379, 26);
			this->emailValue->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(18, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 32);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(421, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(414, 135);
			this->label1->TabIndex = 24;
			this->label1->Text = L"There is a great selection of \r\nproducts waiting for you \r\nand great discounts";
			// 
			// CustomerLogin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 797);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->IdValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->emailValue);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->registerCustomer);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->loginButton);
			this->Name = L"CustomerLogin";
			this->Text = L"CustomerLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registerCustomer_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		CustomerRegister^ registerc = gcnew CustomerRegister;
		registerc->Show();
		CustomerLogin::Close();
	}
private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	String^ id = this->IdValue->Text;
	String^ email = this->emailValue->Text;
	customer customerS;
	std::string idS = context.marshal_as<std::string>(id);
	std::string emailS = context.marshal_as<std::string>(email);
	bool checked = customerS.login(idS, emailS);
	if (id != "" && email != "")
	{
		if (checked)
		{
			MessageBox::Show("Login done", "done ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Market^ show = gcnew Market;
			show->Show();

			show->showProduct();
			Cart c;
			c.deleting();
			CustomerLogin::Close();
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
