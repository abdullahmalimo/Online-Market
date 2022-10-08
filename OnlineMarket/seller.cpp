#include "seller.h"

void seller::registration(std::string idv, std::string namev, std::string emailv)
{
	//this function open files and append (id,name,emil)
	id.open("../SellerData/id.txt", std::ios::app);
	name.open("../SellerData/name.txt", std::ios::app);
	email.open("../SellerData/email.txt", std::ios::app);
	///
	id << idv << "\n";
	name << namev << "\n";
	email << emailv << "\n";
	id.close();
	name.close();
	email.close();
}
///////
bool seller::login(std::string idv, std::string emailv)
{
	// this function open files and search about id ,email in vector 
	load();
	bool check_id = false, check_email = false;
	int count = 0;
	for (auto i : h) //this loop save 
	{
		count++;
		if (idv == i.id_d)
		{
			check_id = true;
			idcounter = count;


		}
		if (emailv == i.email_d)
		{
			check_email = true;
			emailcounter = count;
		}

	}
	if (idcounter == emailcounter && check_id && check_email)
	{
		return true;
	}
	else
		return false;


}
///////////////////
void seller::load()
{
	std::ifstream idd, emaill, namee;//ifstream
	idd.open("../SellerData/id.txt");
	emaill.open("../SellerData/email.txt");
	namee.open("../SellerData/name.txt");
	std::string line1, line2, line3;
	while (getline(idd, line1) && getline(emaill, line2) && getline(namee, line3))
	{
		data s; //data is struct name
		s.id_d = line1;
		s.email_d = line2;
		s.name_d = line3;
		h.push_back(s); //h is vector name

	}


}
/*
bool seller::login(std::string idv, std::string emailv)
{
	bool checkId = false, checkEmail = false;
	std::string idc, emailc;
	id.open("../SellerData/id.txt");
	email.open("../SellerData/email.txt");
	while (!id.eof())
	{
		idcounter++;
		getline(id, idc);
		if (idc == idv)
		{
			checkId = true;
			break;
		}
	}

	while (!email.eof())
	{
		emailcounter++;
		getline(email, emailc);
		if (emailc == emailv && emailcounter == idcounter)
		{
			checkEmail = true;
			break;
		}
	}
	if (checkEmail == true && checkId == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/