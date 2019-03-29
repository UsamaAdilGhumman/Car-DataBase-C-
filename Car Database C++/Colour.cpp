#include"Colour.h"
Colour::Colour() :colour(""){}
Colour::Colour(string colour)
{
	setColour(colour);
}
void Colour::setColour(string colour)
{
	if (colour != "")
	{
		this->colour = colour;
	}
	else
		cerr<<"Invalid Input";
}
string Colour::getColour() const
{
	return this->colour;
}
Colour::Colour(const Colour &C)
{
	this->colour = C.colour;
}
void Colour::display() const
{
	cout << "Colour : " << colour << endl;
}
void Colour::operator=(const Colour &C)
{
	this->colour = C.colour;
}