#include"HorsePower.h"
HorsePower::HorsePower() :Hp(0){}
HorsePower::HorsePower(int Hp)
{
	setHorsePower(Hp);
}
HorsePower::HorsePower(const HorsePower &H)
{
	this->Hp = H.Hp;
}
void HorsePower::operator=(const HorsePower &H)
{
	this->Hp = H.Hp;
}
void HorsePower::setHorsePower(int Hp)
{
	if (Hp > 0)
		this->Hp = Hp;
	else
		cerr << "Invalid Input";
}
int HorsePower::getHorsePower() const
{
	return this->Hp;
}
void HorsePower::display() const
{
	cout << "Horse Power : " << Hp << endl;
}