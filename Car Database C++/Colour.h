#include"Headers.h"
class Colour
{
public:
	Colour();
	explicit Colour(string);
	void setColour(string);
	string getColour() const;
	Colour(const Colour&);
	void display() const;
	void operator=(const Colour&);
private:
	string colour;
};