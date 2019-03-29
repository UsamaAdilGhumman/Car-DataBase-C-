#include"Cylinder.h"
Cylinder::Cylinder():Cy(0){}
Cylinder::Cylinder(int Cy)
{
	setCylinder(Cy);
}
Cylinder::Cylinder(const Cylinder &C)
{
	this->Cy = C.Cy;
}
void Cylinder::operator=(const Cylinder &C)
{
	this->Cy = C.Cy;
}
void Cylinder::setCylinder(int Cy)
{
	if (Cy > 0)
	{
		this->Cy = Cy;
	}
	else
		cerr << "Invalid Input";
}
int Cylinder::getCylinder() const
{
	return this->Cy;
}
void Cylinder::display() const
{
	cout << "Cylinder : " << Cy << endl;
}