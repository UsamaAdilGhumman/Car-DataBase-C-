#include"Headers.h"
class HorsePower
{
public:
	HorsePower();
	explicit HorsePower(int);
	HorsePower(const HorsePower&);
	void operator=(const HorsePower&);
	void setHorsePower(int);
	int getHorsePower() const;
	void display() const;
private:
	int Hp;
};