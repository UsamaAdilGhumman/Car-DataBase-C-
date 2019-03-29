#include"Chassis.h"
Chassis::Chassis() :Com(""), Num(0){}
Chassis::Chassis(Company Com, ChasisNumber Num) : Com(), Num()
{
	setCompany(Com);
	setChasisNumber(Num);
}
void Chassis::setCompany(Company Com)
{
	this->Com = Com;
}
void Chassis::setChasisNumber(ChasisNumber Num)
{
	this->Num = Num;
}
Company Chassis::getCompany() const
{
	return this->Com;
}
ChasisNumber Chassis::getChasisNumber() const
{
	return this->Num;
}
void Chassis::display() const
{
	cout << "Chassis Information " << endl;
	Com.display();
	Num.display();
}
Chassis::Chassis(const Chassis &C)
{
	this->Com = C.Com;
	this->Num = C.Num;
}
void Chassis::operator=(const Chassis &C)
{
	this->Com = C.Com;
	this->Num = C.Num;
}