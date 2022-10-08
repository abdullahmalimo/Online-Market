#pragma once
#include "porduct.h"
#include "CartGui.h"
#include "Cart.h"
#include <msclr\marshal_cppstd.h>
#include "Rate.h"
namespace OnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Market
	/// </summary>
	public ref class Market : public System::Windows::Forms::Form
	{
	public:
		Market(void)
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
		~Market()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Buybutton;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelSearch;
	private: System::Windows::Forms::Label^ nameProduct;
	private: System::Windows::Forms::NumericUpDown^ quantityProduct;


	private: System::Windows::Forms::Label^ priceProduct;
	private: System::Windows::Forms::Label^ catProduct;
	private: System::Windows::Forms::Button^ buy;
	private: System::Windows::Forms::Label^ nnn;
	private: System::Windows::Forms::TextBox^ ss;









	protected:

	protected:




	protected:




	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Market::typeid));
			this->Buybutton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelSearch = (gcnew System::Windows::Forms::Panel());
			this->buy = (gcnew System::Windows::Forms::Button());
			this->quantityProduct = (gcnew System::Windows::Forms::NumericUpDown());
			this->priceProduct = (gcnew System::Windows::Forms::Label());
			this->catProduct = (gcnew System::Windows::Forms::Label());
			this->nameProduct = (gcnew System::Windows::Forms::Label());
			this->nnn = (gcnew System::Windows::Forms::Label());
			this->ss = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantityProduct))->BeginInit();
			this->SuspendLayout();
			// 
			// Buybutton
			// 
			this->Buybutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Buybutton->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Buybutton->Location = System::Drawing::Point(777, 834);
			this->Buybutton->Name = L"Buybutton";
			this->Buybutton->Size = System::Drawing::Size(181, 77);
			this->Buybutton->TabIndex = 0;
			this->Buybutton->Text = L"Buy";
			this->Buybutton->UseVisualStyleBackColor = false;
			this->Buybutton->Click += gcnew System::EventHandler(this, &Market::Buybutton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1401, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 28);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Market::pictureBox1_Click);
			// 
			// panelSearch
			// 
			this->panelSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->panelSearch->Controls->Add(this->buy);
			this->panelSearch->Controls->Add(this->quantityProduct);
			this->panelSearch->Controls->Add(this->priceProduct);
			this->panelSearch->Controls->Add(this->catProduct);
			this->panelSearch->Controls->Add(this->nameProduct);
			this->panelSearch->Location = System::Drawing::Point(559, 197);
			this->panelSearch->Name = L"panelSearch";
			this->panelSearch->Size = System::Drawing::Size(399, 370);
			this->panelSearch->TabIndex = 3;
			this->panelSearch->Visible = false;
			// 
			// buy
			// 
			this->buy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->buy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buy->ForeColor = System::Drawing::Color::White;
			this->buy->Location = System::Drawing::Point(150, 317);
			this->buy->Name = L"buy";
			this->buy->Size = System::Drawing::Size(114, 41);
			this->buy->TabIndex = 4;
			this->buy->Text = L"Confirm";
			this->buy->UseVisualStyleBackColor = false;
			this->buy->Click += gcnew System::EventHandler(this, &Market::buy_Click);
			// 
			// quantityProduct
			// 
			this->quantityProduct->Location = System::Drawing::Point(344, 295);
			this->quantityProduct->Name = L"quantityProduct";
			this->quantityProduct->Size = System::Drawing::Size(52, 22);
			this->quantityProduct->TabIndex = 3;
			// 
			// priceProduct
			// 
			this->priceProduct->AutoSize = true;
			this->priceProduct->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceProduct->ForeColor = System::Drawing::Color::Black;
			this->priceProduct->Location = System::Drawing::Point(3, 156);
			this->priceProduct->Name = L"priceProduct";
			this->priceProduct->Size = System::Drawing::Size(101, 40);
			this->priceProduct->TabIndex = 2;
			this->priceProduct->Text = L"Name";
			// 
			// catProduct
			// 
			this->catProduct->AutoSize = true;
			this->catProduct->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->catProduct->ForeColor = System::Drawing::Color::Black;
			this->catProduct->Location = System::Drawing::Point(3, 86);
			this->catProduct->Name = L"catProduct";
			this->catProduct->Size = System::Drawing::Size(101, 40);
			this->catProduct->TabIndex = 1;
			this->catProduct->Text = L"Name";
			// 
			// nameProduct
			// 
			this->nameProduct->AutoSize = true;
			this->nameProduct->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameProduct->ForeColor = System::Drawing::Color::Black;
			this->nameProduct->Location = System::Drawing::Point(124, 22);
			this->nameProduct->Name = L"nameProduct";
			this->nameProduct->Size = System::Drawing::Size(123, 49);
			this->nameProduct->TabIndex = 0;
			this->nameProduct->Text = L"Name";
			// 
			// nnn
			// 
			this->nnn->AutoSize = true;
			this->nnn->Location = System::Drawing::Point(230, 233);
			this->nnn->Name = L"nnn";
			this->nnn->Size = System::Drawing::Size(0, 16);
			this->nnn->TabIndex = 4;
			// 
			// ss
			// 
			this->ss->Location = System::Drawing::Point(1297, 3);
			this->ss->Name = L"ss";
			this->ss->Size = System::Drawing::Size(98, 22);
			this->ss->TabIndex = 5;
			// 
			// Market
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1524, 953);
			this->Controls->Add(this->ss);
			this->Controls->Add(this->nnn);
			this->Controls->Add(this->panelSearch);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Buybutton);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"Market";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Market";
			this->Load += gcnew System::EventHandler(this, &Market::Market_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelSearch->ResumeLayout(false);
			this->panelSearch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantityProduct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int x = 50, y = 25;
		int location = 1;
		int size;
		array<Panel^>^ group = gcnew array<Panel^>(12);
		array<CheckBox^>^ checkbuy = gcnew array<CheckBox^>(12);
		array<NumericUpDown^>^ qunitiypro = gcnew array<NumericUpDown^>(12);
		array<NumericUpDown^>^ ratepro = gcnew array<NumericUpDown^>(12);

		void showProduct()
		{
			
			Product pr;
			Rate rate;
			size = pr.count();
			
			array<Label^>^ namePro = gcnew array<Label^>(12);
			array<Label^>^ catpro = gcnew array<Label^>(12);
			array<Label^>^ pricePro = gcnew array<Label^>(12);
			array<Label^>^ starPro = gcnew array<Label^>(12);

				InitializeComponent();
			
			
			for (int i = 0; i < size; i++)
			{
				


				double star = rate.showRate(i);
				
				//////////////////
				std::string nameshowstd = pr.showName(i),
					priceshowstd = pr.showPrice(i),
					catshowstd = pr.showCategory(i);




					
				String^ nameshow = gcnew String(nameshowstd.c_str());
				String^ priceshow = gcnew String(priceshowstd.c_str());
				String^ catshow = gcnew String(catshowstd.c_str());
				String^ starshow = Convert::ToString(star);




				location++;
				group[i] = (gcnew Panel());
				group[i]->Tag = (int)i;
				group[i]->Location = System::Drawing::Point(x, y);
				group[i]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
					static_cast<System::Int32>(static_cast<System::Byte>(191)));
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
					System::Drawing::Size(250, 25);
				namePro[i]->ForeColor = System::Drawing::Color::Black;
				namePro[i]->Text = nameshow;
				///////////////////////////////cat
				catpro[i] = (gcnew Label());
				catpro[i]->Tag = (int)i;
				catpro[i]->Location =
					Point(13, 50);
				catpro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				catpro[i]->Size =
					System::Drawing::Size(250, 30);
				catpro[i]->ForeColor = System::Drawing::Color::Black;
				catpro[i]->Text = "Category :  " + catshow;
				////////////////price 
				pricePro[i] = (gcnew Label());
				pricePro[i]->Tag = (int)i;
				pricePro[i]->Location =
					Point(13, 90);
				pricePro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				pricePro[i]->Size =
					System::Drawing::Size(250, 30);
				pricePro[i]->ForeColor = System::Drawing::Color::Black;
				pricePro[i]->Text = "Price: " + priceshow + " EGP";
				/////////////checkbox
				//////////////////
				checkbuy[i] = (gcnew CheckBox());
				checkbuy[i]->Tag = (int)i;
				checkbuy[i]->Location =
					Point(85, 163);
				checkbuy[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				checkbuy[i]->Size =
					System::Drawing::Size(60, 32);
				checkbuy[i]->ForeColor = System::Drawing::Color::Black;
				checkbuy[i]->Text = "Buy";
				/////////////////////
				/////quantity
				qunitiypro[i] = (gcnew NumericUpDown());
				qunitiypro[i]->Tag = (int)i;
				qunitiypro[i]->Location =
					System::Drawing::Point(166, 163);
				qunitiypro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				qunitiypro[i]->Size =
					System::Drawing::Size(38, 50);
				//////////////////////star


				starPro[i] = (gcnew Label());
				starPro[i]->Tag = (int)i;
				starPro[i]->Location =
					Point(13, 130);
				starPro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				starPro[i]->Size =
					System::Drawing::Size(80, 30);
				starPro[i]->ForeColor = System::Drawing::Color::Black;
				starPro[i]->Text = "Rate: " + starshow ;
				///////////////////////////starinput



				ratepro[i] = (gcnew NumericUpDown());
				ratepro[i]->Tag = (int)i;
				ratepro[i]->Location =
					System::Drawing::Point(13, 163);
				ratepro[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				ratepro[i]->Size =
					System::Drawing::Size(38, 70);

				////////////////location
				x += 275;
				if (i == 3 || i == 7)
				{
					x = 50;
					y += 215;
				}
				
				/////////////ddd
				
				//////////////////
				this->Controls->Add(group[i]);
				group[i]->Controls->Add(namePro[i]);
				group[i]->Controls->Add(catpro[i]);
				group[i]->Controls->Add(pricePro[i]);
				group[i]->Controls->Add(checkbuy[i]);
				group[i]->Controls->Add(qunitiypro[i]);
				group[i]->Controls->Add(starPro[i]);
				group[i]->Controls->Add(ratepro[i]);

			}
		

		}
		int check;
	private: System::Void Market_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	CartGui^ cartshow = gcnew CartGui;
private: System::Void Buybutton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Product pr;

	Rate rate;
	pr.load();


	for (int i = 0; i < size; i++)
	{
		if (checkbuy[i]->Checked == true)
		{
			Decimal q =this->qunitiypro[i]->Value;
			

			int qunitiy = Convert::ToInt16(q);
			

			pr.Buying(i, qunitiy);
			
		}
		
		Decimal ra = this->ratepro[i]->Value;
		int rateValue = Convert::ToInt16(ra);
		if (rateValue > 0)
		{
			rate.addRate(i, rateValue);
		}
	}


	pr.savingCart();
	cartshow->Show();
	cartshow->showCart();
}
	   String^ search;
	   int qunt;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	msclr::interop::marshal_context context;
	Product pro;

	search = this->ss->Text;
	std::string Name = context.marshal_as<std::string>(search);
	check =  pro.search(Name);
	//this->nnn->Text = search;
	//check = 1;
	if (check != -1)
	{
		for (int i = 0; i < size; i++)
		{
			this->group[i]->Visible = false;
		}
		this->Buybutton->Visible = false;
		
		panelSearch->Visible = true;
		std::string name = pro.showName(check);
		std::string price = pro.showPrice(check);
		std::string cat = pro.showCategory(check);

		String^ n = gcnew String(name.c_str());
		String^ p = gcnew String(price.c_str());
		String^ c = gcnew String(cat.c_str());
		qunt=Convert::ToInt16(this->quantityProduct->Value);
		this->nameProduct->Text = n;
		this->catProduct->Text = c;
		this->priceProduct->Text = p;

		panelSearch->Visible = true;
	}
	else
	{
		MessageBox::Show("Login Error", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void buy_Click(System::Object^ sender, System::EventArgs^ e) {
	Product pro;
	pro.load();
	pro.Buying(check, qunt);

	pro.savingCart();
	cartshow->Show();
	cartshow->showCart();
}
};
}
