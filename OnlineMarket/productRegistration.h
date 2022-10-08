#pragma once
#include "porduct.h"
#include <msclr\marshal_cppstd.h>
#include "Admin.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for productRegistration
	/// </summary>
	public ref class productRegistration : public System::Windows::Forms::Form
	{
	public:
		productRegistration(void)
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
		~productRegistration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addButton;
	protected:

	private: System::Windows::Forms::TextBox^ priceValue;
	private: System::Windows::Forms::TextBox^ catvalue;
	protected:




	private: System::Windows::Forms::TextBox^ idvalue;
	private: System::Windows::Forms::TextBox^ quantityvalue;


	private: System::Windows::Forms::TextBox^ namevalue;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ openpro;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(productRegistration::typeid));
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->priceValue = (gcnew System::Windows::Forms::TextBox());
			this->catvalue = (gcnew System::Windows::Forms::TextBox());
			this->idvalue = (gcnew System::Windows::Forms::TextBox());
			this->quantityvalue = (gcnew System::Windows::Forms::TextBox());
			this->namevalue = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openpro = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::Transparent;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::Color::Black;
			this->addButton->Location = System::Drawing::Point(296, 460);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(150, 59);
			this->addButton->TabIndex = 46;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &productRegistration::addButton_Click);
			// 
			// priceValue
			// 
			this->priceValue->Location = System::Drawing::Point(263, 401);
			this->priceValue->Multiline = true;
			this->priceValue->Name = L"priceValue";
			this->priceValue->Size = System::Drawing::Size(211, 26);
			this->priceValue->TabIndex = 45;
			// 
			// catvalue
			// 
			this->catvalue->Location = System::Drawing::Point(69, 308);
			this->catvalue->Multiline = true;
			this->catvalue->Name = L"catvalue";
			this->catvalue->Size = System::Drawing::Size(211, 26);
			this->catvalue->TabIndex = 44;
			// 
			// idvalue
			// 
			this->idvalue->Location = System::Drawing::Point(447, 192);
			this->idvalue->Multiline = true;
			this->idvalue->Name = L"idvalue";
			this->idvalue->Size = System::Drawing::Size(211, 26);
			this->idvalue->TabIndex = 42;
			// 
			// quantityvalue
			// 
			this->quantityvalue->Location = System::Drawing::Point(447, 317);
			this->quantityvalue->Multiline = true;
			this->quantityvalue->Name = L"quantityvalue";
			this->quantityvalue->Size = System::Drawing::Size(211, 26);
			this->quantityvalue->TabIndex = 41;
			// 
			// namevalue
			// 
			this->namevalue->Location = System::Drawing::Point(69, 192);
			this->namevalue->Multiline = true;
			this->namevalue->Name = L"namevalue";
			this->namevalue->Size = System::Drawing::Size(211, 26);
			this->namevalue->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(320, 349);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 39);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(62, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 39);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Category";
			this->label6->Click += gcnew System::EventHandler(this, &productRegistration::label6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(440, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 39);
			this->label4->TabIndex = 36;
			this->label4->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(440, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 39);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Quantity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(62, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 39);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(203, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 51);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Add New Product";
			// 
			// openpro
			// 
			this->openpro->AutoSize = true;
			this->openpro->BackColor = System::Drawing::Color::Transparent;
			this->openpro->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openpro->Location = System::Drawing::Point(438, 531);
			this->openpro->Name = L"openpro";
			this->openpro->Size = System::Drawing::Size(89, 50);
			this->openpro->TabIndex = 47;
			this->openpro->TabStop = true;
			this->openpro->Text = L"Show";
			this->openpro->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &productRegistration::openpro_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(60, 531);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(452, 50);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Do you want to show your product";
			// 
			// productRegistration
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 803);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->openpro);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->priceValue);
			this->Controls->Add(this->catvalue);
			this->Controls->Add(this->idvalue);
			this->Controls->Add(this->quantityvalue);
			this->Controls->Add(this->namevalue);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"productRegistration";
			this->Text = L"productRegistration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ sellerId;
	public:void getSellerId(String^ id)
	{
		sellerId = id;
	}
	private: void add()
	{
		
		String^ nameProduct = this->namevalue->Text;
		String^ idProduct = this->idvalue->Text;
		String^ catProduct = this->catvalue->Text;
		String^ priceProduct = this->priceValue->Text;
		String^ quantityProduct = this->quantityvalue->Text;
		convert(idProduct, nameProduct, priceProduct, quantityProduct, sellerId, catProduct);
	}
	private: void convert(String^id,String^ name,String^ price,String^ countity,String^ sellerid,String^ cate)
	{
		Product pnew;
		msclr::interop::marshal_context context;
		std::string idS = context.marshal_as<std::string>(id);
		std::string nameS = context.marshal_as<std::string>(name);
		std::string priceS = context.marshal_as<std::string>(price);
		std::string qountityS = context.marshal_as<std::string>(countity);
		std::string selleridS = context.marshal_as<std::string>(sellerid);
		std::string cateS = context.marshal_as<std::string>(cate);
		pnew.addProduct(idS, nameS, cateS, priceS, qountityS);
		pnew.addSellerID(selleridS);

	}
	

	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	add();
	MessageBox::Show("Addation completed", "Addation ", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->namevalue->Text = "";
	this->idvalue->Text = "";
	this->catvalue->Text = "";
	this->quantityvalue->Text = "";
	this->priceValue->Text="";
}
private: System::Void openpro_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Admin^ admn = gcnew Admin;
	admn->getsellerId(sellerId);
	admn->Show();
	
	admn->showProduct();
}
};
}
