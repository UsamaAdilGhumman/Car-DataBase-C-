#include"Car.h"
int main()
{
	Company Com("Honda");
	Com.display();
	ChasisNumber Num(123);
	Num.display();
	Chassis Cha(Com, Num);
	Cha.display();
	Type T("Orignal");
	T.display();
	Colour Cou("Black");
	Cou.display();
	Rim R("Long");
	R.display();
	Wheel Whe(T, Cou, Com, R, 12);
	Whe.display();
	Cylinder Cyl(123);
	Cyl.display();
	HorsePower Hp(123);
	Hp.display();
	Engine Eng(Cyl, Hp, 3, 60);
	Eng.display();
	string Model = "123";
	string Brand = "Honda";
	int seats = 4;
	string Ty = "Auto";
	Car C1(Model, Brand, Ty, Eng, Cha, Whe,seats);
	Car C2 = C1;
	return 0;
}