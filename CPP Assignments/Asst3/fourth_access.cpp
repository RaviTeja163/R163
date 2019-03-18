#include <iostream>
using namespace std;
class Base
{
	int op1;
public:
	virtual void display()
	{
		cout << "Base class";
	}
	Base()
	{
		op1 = 2;
		op2 = 3;
		op3 = 4;
	}
	int op2;
protected:
	int op3;
};

class Pri : private Base    //op2 and op3 are private
{
public:
	void display()
	{
		cout << "op2 = " << op2 << endl;
		cout << "op3 = " << op3 << endl;
	}
};
class Pub : public Base    //op2 and op3 are public
{
public:
	void display()
	{
		cout << "op2 = " << op2 << endl;
		cout << "op3 = " << op3 << endl;
	}
};
class Pro : protected Base    //op2 and op3 are protected
{
public:
	void display()
	{
		cout << "op2 = " << op2 << endl;
		cout << "op3 = " << op3 << endl;
	}
};
int main()
{
	Base b;
	Base *b1;
	Pub pub;       //Can be accessed outside the class
	cout << "Public varaiable in Base class is:" << pub.op2 << endl;
	Pri pri;       //Cannot be accesses outside the class
	Pro pro;       //Cannot be accesses outside the class
	b1 = &pub;
	b1->display();     //Public class display function can only be accessed
	return 0;
}
