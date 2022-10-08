#pragma once
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
class Cart
{
	double totalPrice = 0;
	struct item {  
		std::string N;
		double P;
		int Q;
	};
	std::list<item> l;

public:
	void insert(std::string productName, double productPrice, int productQuantity);

	std::string showName(int n);

	double showPrice(int n);

	int showQuantity(int n);

	int counter();

	double Price();
	////////////////////////////
	void load();

	void deleting();



};

