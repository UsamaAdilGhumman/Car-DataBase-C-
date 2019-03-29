#include"Company.h"
Company::Company():company(""){}
Company::Company(string company)
{
	setCompany(company);
}
Company::Company(const Company &C)
{
	this->company = C.company;
}
void Company::setCompany(string company)
{
	if (company != "")
	{
		this->company = company;
	}
	else
		cerr << "Invalid Input";
}
string Company::getCompany() const
{
	return this->company;
}
void Company::display() const
{
	cout << "Company : " << company << endl;
}