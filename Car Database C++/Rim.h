#include"Headers.h"
class Rim
{
public:
	Rim();
	explicit Rim(string);
	Rim(const Rim&);
	void operator=(const Rim&);
	void setRim(string);
	string getRim() const;
	void display() const;
private:
	string type;
};