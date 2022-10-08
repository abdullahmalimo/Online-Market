#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
class Product
{
private:
	std::string sellerID;
	std::string productID;
	std::string name;
	std::string category;
	std::string price;
	std::string quantity;
	/////////////
	struct productData
	{
		std::string sellerID;
		std::string productID;
		std::string name;
		std::string category;
		std::string price;
		std::string quantity;
	};
	/////////
	std::vector<productData> productVector;
	std::vector<productData> productBuying;

public:
	void addProduct(std::string productId, std::string nameId, std::string categoryId, std::string priceId, std::string quantityId);

	void addSellerID(std::string sellerId);
	////////show in gui
	int count();

	std::string showName(int loc);

	std::string showPrice(int loc);

	std::string showCategory(int loc);

	bool showId(int loc,std::string i);

	bool checksellerId(int loc, std::string i);

	std::string showQuantity(int loc);
	
	//////save in vector

	void load();

	
	 ////////////////
	void Buying(int loaction,int quantity);

	void savingCart();

	void modify();
	///////////search

	int search(std::string x);
	

};
