#include"Headers.h"
class Type
{
public:
	Type();
	explicit Type(string);
	Type(const Type&);
	void operator=(const Type&);
	void setType(string);
	string getType() const;
	void display() const;
private:
	string type;
};