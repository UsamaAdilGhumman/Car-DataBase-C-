#include"ChasisNumber.h"
#include"Company.h"
class Chassis
{
public:
	Chassis();
	explicit Chassis(Company,ChasisNumber);
	void setCompany(Company);
	void setChasisNumber(ChasisNumber);
	Company getCompany() const;
	ChasisNumber getChasisNumber() const;
	void display() const;
	Chassis(const Chassis&);
	void operator=(const Chassis&);
private:
	Company Com;
	ChasisNumber Num;
};