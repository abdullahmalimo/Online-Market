#pragma once
#include <msclr\marshal_cppstd.h>
#include "customer.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerRegister
	/// </summary>
	public ref class CustomerRegister : public System::Windows::Forms::Form
	{
	public:
		CustomerRegister(void)
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
		~CustomerRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ signUp;
	protected:
	private: System::Windows::Forms::TextBox^ CustomerCart;
	private: System::Windows::Forms::TextBox^ phonevalue;
	private: System::Windows::Forms::TextBox^ addressvalue;


	private: System::Windows::Forms::TextBox^ idvalue;
	private: System::Windows::Forms::TextBox^ emailvalue;


	private: System::Windows::Forms::TextBox^ namevalue;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerRegister::typeid));
			this->signUp = (gcnew System::Windows::Forms::Button());
			this->CustomerCart = (gcnew System::Windows::Forms::TextBox());
			this->phonevalue = (gcnew System::Windows::Forms::TextBox());
			this->addressvalue = (gcnew System::Windows::Forms::TextBox());
			this->idvalue = (gcnew System::Windows::Forms::TextBox());
			this->emailvalue = (gcnew System::Windows::Forms::TextBox());
			this->namevalue = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// signUp
			// 
			this->signUp->BackColor = System::Drawing::Color::Transparent;
			this->signUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signUp->Font = (gcnew System::Drawing::Font(L"Nueva Std Cond", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->signUp->Location = System::Drawing::Point(335, 573);
			this->signUp->Name = L"signUp";
			this->signUp->Size = System::Drawing::Size(150, 59);
			this->signUp->TabIndex = 32;
			this->signUp->Text = L"Sign UP";
			this->signUp->UseVisualStyleBackColor = false;
			this->signUp->Click += gcnew System::EventHandler(this, &CustomerRegister::signUp_Click);
			// 
			// CustomerCart
			// 
			this->CustomerCart->Location = System::Drawing::Point(441, 420);
			this->CustomerCart->Multiline = true;
			this->CustomerCart->Name = L"CustomerCart";
			this->CustomerCart->Size = System::Drawing::Size(235, 26);
			this->CustomerCart->TabIndex = 31;
			// 
			// phonevalue
			// 
			this->phonevalue->Location = System::Drawing::Point(40, 420);
			this->phonevalue->Multiline = true;
			this->phonevalue->Name = L"phonevalue";
			this->phonevalue->Size = System::Drawing::Size(259, 26);
			this->phonevalue->TabIndex = 30;
			// 
			// addressvalue
			// 
			this->addressvalue->Location = System::Drawing::Point(441, 288);
			this->addressvalue->Multiline = true;
			this->addressvalue->Name = L"addressvalue";
			this->addressvalue->Size = System::Drawing::Size(235, 26);
			this->addressvalue->TabIndex = 29;
			// 
			// idvalue
			// 
			this->idvalue->Location = System::Drawing::Point(40, 288);
			this->idvalue->Multiline = true;
			this->idvalue->Name = L"idvalue";
			this->idvalue->Size = System::Drawing::Size(259, 26);
			this->idvalue->TabIndex = 28;
			// 
			// emailvalue
			// 
			this->emailvalue->Location = System::Drawing::Point(441, 164);
			this->emailvalue->Multiline = true;
			this->emailvalue->Name = L"emailvalue";
			this->emailvalue->Size = System::Drawing::Size(235, 26);
			this->emailvalue->TabIndex = 27;
			// 
			// namevalue
			// 
			this->namevalue->Location = System::Drawing::Point(40, 164);
			this->namevalue->Multiline = true;
			this->namevalue->Name = L"namevalue";
			this->namevalue->Size = System::Drawing::Size(259, 26);
			this->namevalue->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(435, 363);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 32);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Customer Cart";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(34, 363);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 32);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Phone Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(435, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 32);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Address";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(34, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 32);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Id";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(435, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 32);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(34, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 32);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Name";
			// 
			// CustomerRegister
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(796, 780);
			this->Controls->Add(this->signUp);
			this->Controls->Add(this->CustomerCart);
			this->Controls->Add(this->phonevalue);
			this->Controls->Add(this->addressvalue);
			this->Controls->Add(this->idvalue);
			this->Controls->Add(this->emailvalue);
			this->Controls->Add(this->namevalue);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Name = L"CustomerRegister";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CustomerRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signUp_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		String^ id = this->idvalue->Text;
		String^ email = this->emailvalue->Text;
		String^ name = this->namevalue->Text;
		String^ address = this->addressvalue->Text;
		String^ phone = this->phonevalue->Text;
		String^ cart = this->CustomerCart->Text;
		customer customerS;
		std::string idS = context.marshal_as<std::string>(id);
		std::string emailS = context.marshal_as<std::string>(email);
		std::string nameS = context.marshal_as<std::string>(name);
		std::string addressS = context.marshal_as<std::string>(address);
		std::string phoneS = context.marshal_as<std::string>(phone);
		std::string cartS = context.marshal_as<std::string>(cart);
		customerS.registration(idS, nameS, emailS,addressS,phoneS,cartS);
		MessageBox::Show("Registration completed", "Registration ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->idvalue->Text = "";
		this->emailvalue->Text = "";
		this->namevalue->Text = "";
		this->addressvalue->Text = "";
		this->CustomerCart->Text = "";
		this->phonevalue->Text = "";
	}

};
}
