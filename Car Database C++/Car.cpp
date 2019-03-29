#include"Car.h"
Car::Car() :ModelNumber(""), Brand(""), Type(""), Seats(0){}
Car::Car(string ModelNumber, string Brand, string Type, Engine Eng, Chassis Cha, Wheel Whe,int Seats) 
{
	
	setBrand(Brand);
	setModelNumber(ModelNumber);
	setType(Type);
	setseats(Seats);
	setEngine(Eng);
	setChassis(Cha);
	setWheel(Whe);

}
Car::Car(const Car &C)
{
	this->ModelNumber = C.ModelNumber;
	this->Brand = C.Brand;
	this->Type = C.Type;
	this->Seats = C.Seats;
	this->Eng = C.Eng;
	this->Cha = C.Cha;
	this->Whe = C.Whe;
}
void Car::operator=(const Car &C)
{
	this->ModelNumber = C.ModelNumber;
	this->Brand = C.Brand;
	this->Type = C.Type;
	this->Seats = C.Seats;
	this->Eng = C.Eng;
	this->Cha = C.Cha;
	this->Whe = C.Whe;
}
void Car::setModelNumber(string ModelNumber)
{
	if (ModelNumber != "")
		this->ModelNumber = ModelNumber;
	else
		cerr<<"Invalid Input ";
}
void Car::setBrand(string Brand)
{
	if (Brand != "")
		this->Brand = Brand;
	else
		cerr<<"Invalid Input";
}
void Car::setType(string Type)
{
	if (Type != "")
		this->Type = Type;
	else
		cerr<<"Invalid Input ";
}
void Car::setseats(int Seats)
{
	if (Seats > 0)
		this->Seats = Seats;
	else
		cerr<<"Invalid Input";
}
void Car::setEngine(Engine Eng)
{
	this->Eng = Eng;
}
void Car::setChassis(Chassis Cha)
{
	this->Cha = Cha;
}
void Car::setWheel(Wheel Whe)
{
	this->Whe = Whe;
}
string Car::getModelNumber() const
{
	return this->ModelNumber;
}
string Car::getBrand() const
{
	return this->Brand;
}
string Car::getType() const
{
	return this->Type;
}
int Car::getseats() const
{
	return this->Seats;
}
Engine Car::getEngine() const
{
	return this->Eng;
}
Chassis Car::getchassis() const
{
	return this->Cha;
}
Wheel Car::getWheeel() const
{
	return this->Whe;
}
void Car::display() const
{
	cout << "Car Information " << endl;
	cout << "Model Number : " << ModelNumber << endl;
	cout << "Brand : " << Brand << endl;
	cout << "Seats : " << Seats << endl;
	Eng.display();
	Cha.display();
	Whe.display();
}