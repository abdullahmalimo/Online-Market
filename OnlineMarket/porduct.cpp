#include "porduct.h"

void Product::addProduct(std::string productId, std::string nameId, std::string categoryId, std::string priceId, std::string quantityId)
{
	std::fstream productQuantity;
	std::fstream productPrice;
	std::fstream productName;
	std::fstream productID;
	std::fstream productCategory;

	productQuantity.open("../ProductData/productQuantity.txt", std::ios::app);
	productPrice.open("../ProductData/productPrice.txt", std::ios::app);
	productName.open("../ProductData/productName.txt", std::ios::app);
	productID.open("../ProductData/productID.txt", std::ios::app);
	productCategory.open("../ProductData/productCategory.txt", std::ios::app);

	productQuantity << quantityId << "\n";
	productPrice << priceId << "\n";
	productID << productId << "\n";
	productName << nameId << "\n";
	productCategory << categoryId << "\n";

	productQuantity.close();
	productPrice.close();
	productName.close();
	productID.close();
	productCategory.close();
}

void Product::addSellerID(std::string sellerId)
{
	std::fstream sellerID;

	sellerID.open("../ProductData/sellerID.txt", std::ios::app);

	sellerID << sellerId << "\n";

	sellerID.close();

}

int Product::count()
{
	/*
	int counter = 0;

	std::ifstream sellerID;

	sellerID.open("../ProductData/productID.txt");
	std::string x;
	while (getline(sellerID, x))
	{

		counter++;
	}

	sellerID.close();

	return counter;
	*/
	load();
	return productVector.size();
}

std::string Product::showName(int loc)
{/*
	int counter = 1;
	std::ifstream Name;
	std::string saved;

	Name.open("../ProductData/productName.txt");

	while (getline(Name, saved))
	{
		if (loc == counter)
		{
			return saved;
			Name.close();
		}
		counter++;
	}*/
	int counter = 0;
	std::string saved;
	for (auto i : productVector)
	{
		if (loc == counter)
		{
			saved = i.name;
			return saved;
		}
		counter++;
	}
}

std::string Product::showPrice(int loc)
{
	/*
	int counter = 1;
	std::ifstream price;
	std::string saved;

	price.open("../ProductData/productPrice.txt");

	while (getline(price, saved))
	{
		if (loc == counter)
		{
			return saved;
			price.close();
		}
		counter++;
	}*/
	int counter = 0;
	std::string saved;
	for (auto i : productVector)
	{
		if (loc == counter)
		{
			saved = i.price;
			return saved;
		}
		counter++;
	}

}

std::string Product::showCategory(int loc)
{/*
	int counter = 1;
	std::ifstream cat;
	std::string saved;

	cat.open("../ProductData/productCategory.txt");

	while (getline(cat, saved))
	{
		if (loc == counter)
		{
			return saved;
			cat.close();
		}

		counter++;
	}
	*/

	int counter = 0;
	std::string saved;
	for (auto i : productVector)
	{
		if (loc == counter)
		{
			saved = i.category;
			return saved;
		}
		counter++;
	}
}

bool Product::showId(int loc, std::string i)
{
	int counter = 1;
	std::ifstream id;
	std::string saved;
	//bool check = false;
	id.open("../ProductData/productID.txt");

	while (getline(id, saved))
	{
		if (loc == counter&&saved==i)
		{
			return true;
			id.close();
		}

		counter++;
	}
	
}

std::string Product::showQuantity(int loc)
{/*
	int counter = 1;
	std::ifstream qntty;
	std::string saved;

	qntty.open("../ProductData/productQuantity.txt");

	while (getline(qntty, saved))
	{
		if (loc == counter)
		{
			return saved;
			qntty.close();
		}

		counter++;
	}
	*/
	int counter = 0;
	std::string saved;
	for (auto i : productVector)
	{
		if (loc == counter)
		{
			saved = i.quantity;
			return saved;
		}
		counter++;
	}
}



bool Product::checksellerId(int loc, std::string i)
{

	int counter = 1;
	std::ifstream id;
	std::string saved;
	id.open("../ProductData/sellerID.txt");

	while (getline(id, saved))
	{
		if (loc == counter && saved == i)
		{
			return true;
			id.close();
		}

		counter++;
	}

}
///////////////////////////////////////
void Product::load()
{
	std::string sellerIDLine;
	std::string productQuantityLine;
	std::string productPriceLine;
	std::string productNameLine;
	std::string productIDLine;
	std::string productCategoryLine;
	/////////////////////
	std::ifstream fsellerID;
	std::ifstream fproductQuantity;
	std::ifstream fproductPrice;
	std::ifstream fproductName;
	std::ifstream fproductID;
	std::ifstream fproductCategory;
	//////////
	fsellerID.open("../ProductData/sellerID.txt");
	fproductName.open("../ProductData/productName.txt");
	fproductID.open("../ProductData/productID.txt");
	fproductQuantity.open("../ProductData/productQuantity.txt");
	fproductCategory.open("../ProductData/productCategory.txt");
	fproductPrice.open("../ProductData/productPrice.txt");

    ///////////////
	while (getline(fsellerID, sellerIDLine),
		getline(fproductQuantity, productQuantityLine),
		getline(fproductPrice, productPriceLine),
		getline(fproductID, productIDLine),
		getline(fproductCategory, productCategoryLine),
		getline(fproductName, productNameLine))
	{
		productData s;
		s.category = productCategoryLine;
		s.productID = productIDLine;
		s.name = productNameLine;
		s.price = productPriceLine;
		s.quantity = productQuantityLine;
		s.sellerID = sellerIDLine;
		productVector.push_back(s);
	}
}


void Product::Buying(int loaction, int quantity)
{
//	load();
	/*
	for (int i = 0; i < size; i++)
	{
		if (i == loaction)
		{
			int q = stoi(productVector[i].quantity);
			if (q >= quantity)
			{
				productBuying.push_back(productVector[i]);
				
			}
		}
	}*/
	int counter = 0;
	for (auto i : productVector)   
	{
		if (counter == loaction)
		{
			int q = stoi(i.quantity);//int 5
			if (q >= quantity)
			{
				
				i.quantity = std::to_string(quantity);
				productBuying.push_back(i);
				//////
				q = q - quantity;
				std::string s= std::to_string(q);
				i.quantity = s;

			}
		}
		counter++;
	}

}

void Product::savingCart()
{
	std::string name, price, quantity,id;
	std::fstream namep, pricep, quantityp,idp;

	namep.open("../CartData/nameProduct.txt", std::ios::app);
	pricep.open("../CartData/priceProduct.txt", std::ios::app);
	quantityp.open("../CartData/quntityProduct.txt", std::ios::app);
	idp.open("../CartData/idProduct.txt", std::ios::app);

	for (auto i : productBuying)
	{
		namep << i.name << "\n";
		pricep << i.price << "\n";
		quantityp << i.quantity << "\n";
		idp << i.productID << "\n";
	}
	modify();
}

void Product::modify()
{
	std::vector<productData> mod;
	for (auto i : productVector)
	{
		bool checki = false;
		int qunatity = 0;
		for (auto j : productBuying)
		{

			//////////////////
			if (i.productID == j.productID)
			{
					
				checki = true;
				
				qunatity = stoi(j.quantity);
				//mod.push_back(i);	
			}
			/*
			else if(i.quantity>j.quantity)
			{
				
				mod.push_back(i);
			}*/
		}

		if (checki)
		{
			
			int quntp = stoi(i.quantity);
			int newq = quntp - qunatity;

			
			std::string q = std::to_string(newq);
			//i.quantity = q;
			productData temp = i;
			temp.quantity = q;
			mod.push_back(temp);
		}
		else
		{
			mod.push_back(i);
		}



	}
	productVector = mod;
	std::ofstream id, name, sellerid, price, cat, quant;

	id.open("../ProductData/productID.txt", std::ofstream::trunc);
	name.open("../ProductData/productName.txt", std::ofstream::trunc);
	sellerid.open("../ProductData/sellerID.txt", std::ofstream::trunc);
	price.open("../ProductData/productPrice.txt", std::ofstream::trunc);
	cat.open("../ProductData/productCategory.txt", std::ofstream::trunc);
	quant.open("../ProductData/productQuantity.txt", std::ofstream::trunc);



	id.close();
	name.close();
	sellerid.close();
	price.close();
	cat.close();
	quant.close();
	for (auto i : mod)
	{
		addProduct(i.productID, i.name, i.category, i.price, i.quantity);
		addSellerID(i.sellerID);

	}
	

}

int Product::search(std::string x)
{
	load();

	
	int check = -1;
	int counter = 0;
	for (auto i : productVector)
	{
		std::string s = i.name;
		if (x == s)
		{
			check = counter;
		}
		counter++;	
	}
	return check;
	

	//std::string 
	
}

