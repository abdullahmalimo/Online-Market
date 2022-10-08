#include "Cart.h"

void Cart::insert(std::string productName, double productPrice, int productQuantity)
{
	item temp;
	temp.N = productName;
	temp.P = productPrice;
	temp.Q = productQuantity;
	l.push_back(temp);
	totalPrice += (productPrice * productQuantity);
}

std::string Cart::showName(int n)
{

	std::string nameProduct;
	int counter = 0;
	for (auto it : l)
	{
		counter++;
		if (n == counter)
		{
			nameProduct = it.N;
			return nameProduct;
		}

	}
}

double Cart::showPrice(int n)
{
	double price;
	int counter = 0;
	for (auto it : l)
	{
		counter++;
		if (n == counter)
		{
			price = it.P;
			
			return price;
		}

	}
}

int Cart::showQuantity(int n)
{
	int Quantity;
	int counter = 0;
	for (auto it : l)
	{
		counter++;
		if (n == counter)
		{
			Quantity = it.Q;
			
			return Quantity;
		}

	}
}

int Cart::counter()
{
	return l.size();
}

double Cart::Price()
{
	return	totalPrice;
}

void Cart::load()
{
	std::string name, price, quantity;
	std::ifstream namep, pricep, quantityp;
	namep.open("../CartData/nameProduct.txt");
	pricep.open("../CartData/priceProduct.txt");
	quantityp.open("../CartData/quntityProduct.txt");
	while (getline(namep, name), getline(pricep, price), getline(quantityp, quantity))
	{
		double p=std::stod(price);
		int q=std::stoi(quantity);
		insert(name, p, q);
	}
	namep.close();
	pricep.close();
	quantityp.close();


}

void Cart::deleting()
{
	std::ofstream namep, pricep, quantityp;
	namep.open("../CartData/nameProduct.txt", std::ofstream::trunc);
	pricep.open("../CartData/priceProduct.txt", std::ofstream::trunc);
	quantityp.open("../CartData/quntityProduct.txt", std::ofstream::trunc);
	namep.close();
	pricep.close();
	quantityp.close();
	
}
