#include"Type.h"
Type::Type() :type(""){}
Type::Type(string type)
{
	setType(type);
}
Type::Type(const Type &T)
{
	this->type=T.type;
}
void Type::operator=(const Type &T)
{
	this->type = T.type;
}
void Type::setType(string type)
{
	if (type != "")
	{
		this->type = type;
	}
	else
		cerr<<"Invalid Input";
}
string Type::getType() const
{
	return this->type;
}
void Type::display() const
{
	cout << "Type : " << type << endl;
}