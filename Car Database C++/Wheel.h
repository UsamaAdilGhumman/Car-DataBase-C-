#include"Type.h"
#include"Colour.h"
#include"Company.h"
#include"Rim.h"
class Wheel
{
public:
	Wheel();
	explicit Wheel(Type,Colour,Company, Rim, int);
	Wheel(const Wheel&);
	void operator=(const Wheel&);
	void setType(Type);
	void setCompany(Company);
	void setRim(Rim);
	void setColour(Colour);
	void setSize(int);
	Type getType() const;
	Company getCompany() const;
	Rim getRim() const;
	Colour getColour() const;
	int getSize() const;
	void display() const;
private:
	Type Ty;
	Colour Cou;
	Company Com;
	Rim R;
	int size;
};