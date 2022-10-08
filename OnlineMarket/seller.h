#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


class seller
{
	//this struct to save data
	struct data
	{
		std::string id_d;
		std::string email_d;
		std::string name_d;
	};
	//this for open files
	std::fstream id;
	std::fstream name;
	std::fstream email;
	int idcounter = 0, emailcounter = 0;


public:
	std::vector <data>h;
	void registration(std::string idv, std::string namev, std::string emailv);
	bool login(std::string idv, std::string emailv);
	void load();

};

