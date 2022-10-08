#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
class Rate
{

	struct rate {
		int total, group;
	};
	std::list<rate> rateList;
public:
	void load();
	void addRate(int loc, int rate);
	double showRate(int loc);
	void store();
	void deleting();

};

