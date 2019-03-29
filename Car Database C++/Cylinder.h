#include"Headers.h"
class Cylinder
{
public:
	Cylinder();
	explicit Cylinder(int);
	Cylinder(const Cylinder&);
	void operator=(const Cylinder&);
	void setCylinder(int);
	int getCylinder() const;
	void display() const;
private:
	int Cy;
};