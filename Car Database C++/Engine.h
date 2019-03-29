#include"Cylinder.h"
#include"HorsePower.h"
class Engine
{
public:
	Engine();
	explicit Engine(Cylinder,HorsePower,int,int);
	Engine(const Engine&);
	void operator=(const Engine&);
	void setCylinder(Cylinder);
	void setHorsePower(HorsePower);
	void setNoOfGears(int);
	void setTopSpeed(int);
	Cylinder getCylinder() const;
	HorsePower getHorsePower() const;
	int getNoOfGears() const;
	int getTopSpeed() const;
	void display() const;
private:
	Cylinder Cyl;
	HorsePower Hp;
	int NoOFGears;
	int TopSpeed;
};