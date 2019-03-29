#include"Wheel.h"
Wheel::Wheel() :size(0){}
Wheel::Wheel(Type Ty, Colour Cou, Company Com, Rim R, int size)
{
	setType(Ty);
	setCompany(Com);
	setColour(Cou);
	setRim(R);
	setSize(size);
}
Wheel::Wheel(const Wheel &W)
{
	this->Com = W.Com;
	this->Cou = W.Cou;
	this->R = W.R;
	this->Ty = W.Ty;
	this->size = W.size;
}
void Wheel::operator=(const Wheel &W)
{
	this->Com = W.Com;
	this->Cou = W.Cou;
	this->R = W.R;
	this->Ty = W.Ty;
	this->size = W.size;
}
void Wheel::setType(Type Ty)
{
	this->Ty = Ty;
}
void Wheel::setCompany(Company Com)
{
	this->Com = Com;
}
void Wheel::setRim(Rim R)
{
	this->R = R;
}
void Wheel::setSize(int size)
{
	if (size > 0)
		this->size = size;
	else
		cerr << "Invalid Input";
}
void Wheel::setColour(Colour Cou)
{
	this->Cou = Cou;
}
Type Wheel::getType() const
{
	return this->Ty;
}
Company Wheel::getCompany() const
{
	return this->Com;
}
Rim Wheel::getRim() const
{
	return this->R;
}
Colour Wheel::getColour() const
{
	return this->Cou;
}
int Wheel::getSize() const
{
	return this->size;
}
void Wheel::display() const
{
	cout << "Wheel Information " << endl;
	Com.display();
	Cou.display();
	R.display();
	Ty.display();
	cout << "Size : " << size << endl;
}