#pragma once
#include "CustomerLogin.h"
#include "SellerLogin.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
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
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ sellerbutton;
	private: System::Windows::Forms::Button^ customerbutton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sellerbutton = (gcnew System::Windows::Forms::Button());
			this->customerbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(255, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hello ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(30, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(628, 64);
			this->label2->TabIndex = 2;
			this->label2->Text = L"\r\nPlease choose your type is a seller or a client";
			// 
			// sellerbutton
			// 
			this->sellerbutton->BackColor = System::Drawing::Color::Gold;
			this->sellerbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sellerbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sellerbutton->ForeColor = System::Drawing::Color::White;
			this->sellerbutton->Location = System::Drawing::Point(18, 276);
			this->sellerbutton->Name = L"sellerbutton";
			this->sellerbutton->Size = System::Drawing::Size(142, 49);
			this->sellerbutton->TabIndex = 3;
			this->sellerbutton->Text = L"Seller";
			this->sellerbutton->UseVisualStyleBackColor = false;
			this->sellerbutton->Click += gcnew System::EventHandler(this, &Start::sellerbutton_Click);
			// 
			// customerbutton
			// 
			this->customerbutton->BackColor = System::Drawing::Color::Crimson;
			this->customerbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->customerbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerbutton->ForeColor = System::Drawing::Color::White;
			this->customerbutton->Location = System::Drawing::Point(18, 331);
			this->customerbutton->Name = L"customerbutton";
			this->customerbutton->Size = System::Drawing::Size(142, 51);
			this->customerbutton->TabIndex = 4;
			this->customerbutton->Text = L"Customer";
			this->customerbutton->UseVisualStyleBackColor = false;
			this->customerbutton->Click += gcnew System::EventHandler(this, &Start::customerbutton_Click);
			// 
			// Start
			// 
			this->AllowDrop = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 703);
			this->Controls->Add(this->customerbutton);
			this->Controls->Add(this->sellerbutton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(660, 750);
			this->MinimumSize = System::Drawing::Size(600, 750);
			this->Name = L"Start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Start";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sellerbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		SellerLogin^ seller = gcnew SellerLogin;
		seller->Show();
		

	}
private: System::Void customerbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerLogin^ customer = gcnew CustomerLogin;
	customer->Show();

}
};
}
