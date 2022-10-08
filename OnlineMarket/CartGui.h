#pragma once
#include "Cart.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CartGui
	/// </summary>
	public ref class CartGui : public System::Windows::Forms::Form
	{
	public:
		CartGui(void)
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
		~CartGui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(169, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Cart";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(12, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(580, 55);
			this->panel1->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(368, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 25);
			this->label6->TabIndex = 3;
			this->label6->Text = L"total";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(231, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(108, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Price\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(433, 656);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CartGui::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 656);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 44);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Total :";
			// 
			// CartGui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(610, 709);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::White;
			this->MaximumSize = System::Drawing::Size(628, 756);
			this->MinimumSize = System::Drawing::Size(628, 756);
			this->Name = L"CartGui";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CartGui";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	double totalgroup=0;
		void showCart()
		{
			Cart product;
			product.load();
			String^ name;
			String^ price;
			String^ qunatity;
			int size = product.counter();
			int y = 120;
			array<Panel^>^ group = gcnew array<Panel^>(12);
			array<Label^>^ Nameprodcuct = gcnew array<Label^>(12);
			array<Label^>^ Priceprodcuct = gcnew array<Label^>(12);
			array<Label^>^ Quantityprodcuct = gcnew array<Label^>(12);
			array<Label^>^ totalprodcuct = gcnew array<Label^>(12);
			InitializeComponent();

			for (int i = 0; i < size; i++)
			{
				///////////std::string
				std::string n = product.showName(i+1);
				double p= product.showPrice(i+1);
				int q = product.showQuantity(i+1);
				/////////system String^
				name = gcnew String(n.c_str());
				price = Convert::ToString(p);
				qunatity = Convert::ToString(q);


				String^ t;
				////////////////group
				group[i] = (gcnew Panel());
				group[i]->Tag = (int)i;
				group[i]->Location = System::Drawing::Point(12, y);
				group[i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
					static_cast<System::Int32>(static_cast<System::Byte>(85)));
				group[i]->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				group[i]->Size = System::Drawing::Size(430, 45);

				group[i]->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				y += 50;

				//////////////Name
				Nameprodcuct[i] = (gcnew Label());
				Nameprodcuct[i]->Tag = (int)i;
				Nameprodcuct[i]->Location = System::Drawing::Point(3, 13);
				Nameprodcuct[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				Nameprodcuct[i]->Size = System::Drawing::Size(90, 25);
				Nameprodcuct[i]->Text = name;


				//////////////////////price
				Priceprodcuct[i] = (gcnew Label());
				Priceprodcuct[i]->Tag = (int)i;
				Priceprodcuct[i]->Location = System::Drawing::Point(90, 13);
				Priceprodcuct[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));

				Priceprodcuct[i]->Text = price;
				

				///////////////////////////////////////////////////Quantity
				Quantityprodcuct[i] = (gcnew Label());
				Quantityprodcuct[i]->Tag = (int)i;
				Quantityprodcuct[i]->Location = System::Drawing::Point(200, 13);
				Quantityprodcuct[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				Quantityprodcuct[i]->Size = System::Drawing::Size(50, 25);
				Quantityprodcuct[i]->Text = qunatity;
				

				/////////////////////totalone
				double totalp = p * q;
				totalgroup += totalp;
				t = Convert::ToString(totalp);
				totalprodcuct[i] = (gcnew Label());
				totalprodcuct[i]->Tag = (int)i;
				totalprodcuct[i]->Location = System::Drawing::Point(250, 13);
				totalprodcuct[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));

				totalprodcuct[i]->Text = t;


				////////

				this->Controls->Add(group[i]);
				group[i]->Controls->Add(Nameprodcuct[i]);
				group[i]->Controls->Add(Priceprodcuct[i]);
				group[i]->Controls->Add(Quantityprodcuct[i]);
				group[i]->Controls->Add(totalprodcuct[i]);

			}

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ total = Convert::ToString(totalgroup);
			
		Label^ showtotal = gcnew Label;
	    InitializeComponent();
		showtotal= (gcnew Label());
		showtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		showtotal->Location = System::Drawing::Point(151, 665);
		showtotal->Size = System::Drawing::Size(190, 32);
		showtotal->Text = total + "EGP";
		this->Controls->Add(showtotal);
	}
};
}
