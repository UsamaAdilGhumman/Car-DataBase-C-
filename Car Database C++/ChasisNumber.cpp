#include"ChasisNumber.h"
ChasisNumber::ChasisNumber() :CN(0){}
ChasisNumber::ChasisNumber(int CN)
{
	setChasisNumber(CN);
}
void ChasisNumber::setChasisNumber(int CN)
{
	if (CN > 0)
	{
		this->CN = CN;
	}
	else
		cerr << "Invalid Input";
}
int ChasisNumber::getChasisNumber() const
{
	return this->CN;
}
ChasisNumber::ChasisNumber(const ChasisNumber &N)
{
	this->CN = N.CN;
}
void ChasisNumber::display() const
{
	cout << "Chasis Number : " << CN << endl;
}
void ChasisNumber::operator = (const ChasisNumber &N)
{
	this->CN = N.CN;
}