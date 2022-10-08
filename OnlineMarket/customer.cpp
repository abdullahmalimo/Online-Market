#include "customer.h"
/*
bool customer::login(std::string idv, std::string emailv)
{
	bool checkId = false, checkEmail = false;
	std::string idc, emailc;
	id.open("../CustomerData/id.txt");
	email.open("../CustomerData/email.txt");
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
bool customer::login(std::string idv, std::string emailv)
{
	bool flag1 = false, flag2 = false;
	int counter1 = 0, counter2 = 0;
	//idv = idv + "\n";
	//emailv = emailv + "\n"; 
	load();

	for (auto i : ids)
	{
		counter1++;
		if (idv == i)
		{
			flag1 = true;
			break;
		}
	}

	for (auto i : emails)
	{
		counter2++;
		if (emailv == i)
		{
			flag2 = true;
			break;
		}
	}

	if (flag1 && flag2 && counter1 == counter2)
	{
		return true;
	}

	else
	{
		return false;
	}

}
void customer::registration(std::string idv, std::string namev, std::string emailv, std::string addressv, std::string phonev, std::string cartv)
{
	//openfiles
	id.open("../CustomerData/id.txt", std::ios::app);
	name.open("../CustomerData/name.txt", std::ios::app);
	email.open("../CustomerData/email.txt", std::ios::app);
	address.open("../CustomerData/address.txt", std::ios::app);
	phone.open("../CustomerData/phone.txt", std::ios::app);
	CustomerCart.open("../CustomerData/CustomerCart.txt", std::ios::app);
	
	
	//store data in files line by line
	id << idv << "\n";
	name << namev << "\n";
	email << emailv << "\n";
	address << addressv << "\n";
	phone << phonev << "\n";
	CustomerCart << cartv << "\n";
	
	
	//closing files
	id.close();
	name.close();
	email.close();
	address.close();
	phone.close();
	CustomerCart.close();

}

void customer::load()
{
	std::string idc, emailc;
	std::ifstream Id, Email;
	Id.open("../CustomerData/id.txt");
	Email.open("../CustomerData/email.txt");
	while (!Id.eof())
	{
		//idcounter++;
		getline(Id, idc);
		ids.push_back(idc);

	}

	while (!Email.eof())
	{
		//emailcounter++;
		getline(Email, emailc);
		emails.push_back(emailc);

	}

}
