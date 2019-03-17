#include<iostream>
using namespace std;
class Cl{
	int op1,op2,sum,diff,pro,rem;
	float quo;
public:
	Cl(int i,int j)
	{
		op1=i;
		op2=j;
	}
	void add();
	void sub();
	void mul();
	void div();
	void mod();
};
inline void C :: add()
{
    sum = op1+op2;
    cout << "Addition of two numbers: " << sum << endl;
}
inline void C :: sub()
{
    diff = op1-op2;
    cout << "Difference of two numbers: " << diff << endl;
}
inline void C :: mul()
{
    pro = op1*op2;
    cout << "Product of two numbers: " << pro << endl;
}
inline void C :: div()
{
    quo = (float)op1/op2;
    cout << "Division of two numbers: " << quo << endl;
}
inline void C :: mod()
{
    rem=op1%op2;
    cout << "Remainder: " << rem << endl;
}

int main()
{
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	Cl c(a,b);
	c.add();
	c.sub();
	c.mul();
	c.div();
	c.mod();
	return 0;
}
