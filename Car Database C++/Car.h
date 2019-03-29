#include"Engine.h"
#include"Wheel.h"
#include"Chassis.h"
class Car
{
public:
	Car();
	explicit Car(string, string, string, Engine, Chassis, Wheel,int);
	Car(const Car&);
	void operator=(const Car&);
	void setModelNumber(string);
	void setBrand(string);
	void setType(string);
	void setseats(int);
	void setEngine(Engine);
	void setChassis(Chassis);
	void setWheel(Wheel);
	string getModelNumber() const;
	string getBrand() const;
	string getType() const;
	int getseats() const;
	Engine getEngine() const;
	Chassis getchassis() const;
	Wheel getWheeel() const;
	void display() const;
private:
	string ModelNumber;
	string Brand;
	string Type;
	int Seats;
	Engine Eng;
	Chassis Cha;
	Wheel Whe;
};