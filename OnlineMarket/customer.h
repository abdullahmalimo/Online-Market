#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
class customer
{
	//files that hold customer data 
	std::fstream id;
	std::fstream name;
	std::fstream email;
	std::fstream address;
	std::fstream phone;
	std::fstream CustomerCart;
	/// /////////
	/*
	 we load each file in a data structure.
	 we used vector because it allow us to insert and delete from any position and 
	 it's easier to search vectors than files.
	 */
	std::vector<std::string> emails;
	std::vector<std::string> ids;


	int idcounter = 0, emailcounter = 0;
public:
	void load();
	bool login(std::string idv, std::string emailv);
	void registration(std::string idv, std::string namev, std::string emailv, std::string addressv, std::string phonev, std::string cartv);
};

