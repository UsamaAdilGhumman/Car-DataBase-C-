#include"Rim.h"
Rim::Rim() :type(""){}
Rim::Rim(string type)
{
	setRim(type);
}
Rim::Rim(const Rim &T)
{
	this->type = T.type;
}
void Rim::operator=(const Rim &T)
{
	this->type = T.type;
}
void Rim::setRim(string type)
{
	if (type != "")
	{
		this->type=type;
	}
	else
		cerr<<"Invalid Input";
}
string Rim::getRim() const
{
	return this->type;
}
void Rim::display() const
{
	cout << "Rim : " << type << endl;
}