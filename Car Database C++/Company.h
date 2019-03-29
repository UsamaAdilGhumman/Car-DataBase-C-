#include"Headers.h"
#pragma once
class Company
{
public:
	Company();
	explicit Company(string);
	Company(const Company&);
	void setCompany(string);
	string getCompany() const;
	void display() const;
private:
	string company;
};