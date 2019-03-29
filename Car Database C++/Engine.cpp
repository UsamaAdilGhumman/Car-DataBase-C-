#include"Engine.h"
Engine::Engine() :Cyl(0), Hp(0), NoOFGears(0), TopSpeed(0){}
Engine::Engine(Cylinder Cyl, HorsePower Hp, int NoOFGears, int TopSpeed)
{
	setCylinder(Cyl);
	setHorsePower(Hp);
	setNoOfGears(NoOFGears);
	setTopSpeed(TopSpeed);
}
Engine::Engine(const Engine &E)
{
	this->Cyl = E.Cyl;
	this->Hp = E.Hp;
	this->TopSpeed = E.TopSpeed;
	this->NoOFGears = E.NoOFGears;
}
void Engine::operator=(const Engine &E)
{
	this->Cyl = E.Cyl;
	this->Hp = E.Hp;
	this->TopSpeed = E.TopSpeed;
	this->NoOFGears = E.NoOFGears;
}
void Engine::setCylinder(Cylinder Cyl)
{
	this->Cyl = Cyl;
}
void Engine::setHorsePower(HorsePower Hp)
{
	this->Hp = Hp;
}
void Engine::setNoOfGears(int NoOFGears)
{
	if (NoOFGears > 0 && NoOFGears < 5)
	{
		this->NoOFGears = NoOFGears;
	}
	else
		cerr<<"Invalid Input";
}
void Engine::setTopSpeed(int TopSpeed)
{
	if (TopSpeed>0 && TopSpeed < 240)
	{
		this->TopSpeed = TopSpeed;
	}
	else
		cerr<<"Invalid Input";
}
Cylinder Engine::getCylinder() const
{
	return this->Cyl;
}
HorsePower Engine::getHorsePower() const
{
	return this->Hp;
}
int Engine::getNoOfGears() const
{
	return this->NoOFGears;
}
int Engine::getTopSpeed() const
{
	return this->TopSpeed;
}
void Engine::display() const
{
	cout << "Engine Information " << endl;
	Cyl.display();
	Hp.display();
	cout << "No Of Gears : " << NoOFGears << endl;
	cout << "Top Speed : " << TopSpeed << endl;
}