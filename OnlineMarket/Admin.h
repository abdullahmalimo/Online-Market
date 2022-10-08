#pragma once
#include "porduct.h"
#include <msclr\marshal_cppstd.h>
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1524, 981);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		String^ sellerId;

		void getsellerId(String^ idseller)
		{
			sellerId = idseller;
		}
		array<CheckBox^>^ checkDelete = gcnew array<CheckBox^>(12);
		void showProduct()
		{
			Product pr;
			int size = pr.count();
			array<Panel^>^ group = gcnew array<Panel^>(12);
			array<Label^>^ namePro = gcnew array<Label^>(12);
			array<Label^>^ catpro = gcnew array<Label^>(12);
			array<Label^>^ pricePro = gcnew array<Label^>(12);
			array<Label^>^ quantityPro = gcnew array<Label^>(12);
			InitializeComponent();
			int x = 50, y = 25;
			msclr::interop::marshal_context context;
			std::string selleridS = context.marshal_as<std::string>(sellerId);
			for (int counter = 1; counter <= size; counter++)
			{
				bool check = false;
				check = pr.checksellerId(counter, selleridS);
				int i = 0;
				if (check==true)
				{

					std::string nameshowstd = pr.showName(counter),
						priceshowstd = pr.showPrice(counter),
						catshowstd = pr.showCategory(counter),
						quantityd = pr.showQuantity(counter);

					String^ nameshow = gcnew String(nameshowstd.c_str());
					String^ priceshow = gcnew String(priceshowstd.c_str());
					String^ catshow = gcnew String(catshowstd.c_str());
					String^ quntshow = gcnew String(quantityd.c_str());
					
					group[i] = (gcnew Panel());
					group[i]->Tag = (int)i;
					group[i]->Location = System::Drawing::Point(x, y);
					group[i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
						static_cast<System::Int32>(static_cast<System::Byte>(242)));
					group[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					group[i]->Size = System::Drawing::Size(220, 190);

					group[i]->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					/////////////Name
					namePro[i] = (gcnew Label());
					namePro[i]->Tag = (int)i;
					namePro[i]->Location =
						Point(63, 9);
					namePro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					namePro[i]->Size =
						System::Drawing::Size(250, 20);
					namePro[i]->ForeColor = System::Drawing::Color::Black;
					namePro[i]->Text = nameshow;
					///////////////////////////////cat
					catpro[i] = (gcnew Label());
					catpro[i]->Tag = (int)i;
					catpro[i]->Location =
						Point(13, 40);
					catpro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					catpro[i]->Size =
						System::Drawing::Size(250, 20);
					catpro[i]->ForeColor = System::Drawing::Color::Black;
					catpro[i]->Text = "Category :  "+catshow;
					////////////////price 
					pricePro[i] = (gcnew Label());
					pricePro[i]->Tag = (int)i;
					pricePro[i]->Location =
						Point(13, 80);
					pricePro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					pricePro[i]->Size =
						System::Drawing::Size(250, 20);
					pricePro[i]->ForeColor = System::Drawing::Color::Black;
					pricePro[i]->Text = "Price: " + priceshow + " EGP";

					//////Quantity

					////////////////price 
					quantityPro[i] = (gcnew Label());
					quantityPro[i]->Tag = (int)i;
					quantityPro[i]->Location =
						Point(13, 120);
					quantityPro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					quantityPro[i]->Size =
						System::Drawing::Size(250, 20);
					quantityPro[i]->ForeColor = System::Drawing::Color::Black;
					quantityPro[i]->Text = "Quantity: " + quntshow;



					/////////////checkbox
					
					checkDelete[i] = (gcnew CheckBox());
					checkDelete[i]->Tag = (int)i;
					checkDelete[i]->Location =
						Point(13, 161);
					checkDelete[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					checkDelete[i]->Size =
						System::Drawing::Size(113, 32);
					checkDelete[i]->ForeColor = System::Drawing::Color::Black;
					checkDelete[i]->ForeColor = System::Drawing::Color::Red;
					checkDelete[i]->Text = "DELETE";
					
					//////////////////


					this->Controls->Add(group[i]);
					group[i]->Controls->Add(namePro[i]);
					group[i]->Controls->Add(catpro[i]);
					group[i]->Controls->Add(pricePro[i]);
					group[i]->Controls->Add(quantityPro[i]);
					group[i]->Controls->Add(checkDelete[i]);


					x += 275;
					if (i == 3 || i == 7)
					{
						x = 50;
						y += 215;
					}

					i++;
				}
				
			}

		}

	};
}
