#include"Headers.h"
class ChasisNumber
{
public:
	ChasisNumber();
	explicit ChasisNumber(int);
	void setChasisNumber(int);
	int getChasisNumber() const;
	ChasisNumber(const ChasisNumber&);
	void display() const;
	void operator=(const ChasisNumber&);
private:
	int CN;
};