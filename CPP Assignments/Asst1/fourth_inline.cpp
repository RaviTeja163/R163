#include<iostream>
using namespace std;
class C{
	int a,b,sum,diff,pro,modu;
	float quo;
public:
	C(int i,int j)
	{
		a=i;
		b=j;
	}
	void add();
	void sub();
	void mul();
	void div();
	void mod();
};
inline void C :: add() 
{ 
    sum = a+b; 
    cout << "Addition of two numbers: " << sum << endl; 
}
inline void C :: sub()       
{ 
    diff = a-b; 
    cout << "Difference of two numbers: " << diff << endl;
} 
inline void C :: mul()       
{ 
    pro = a*b; 
    cout << "Product of two numbers: " << pro << endl;
} 
inline void C :: div()       
{ 
    quo = (float)a/b; 
    cout << "Division of two numbers: " << quo << endl;
}
inline void C :: mod()       
{ 
    if(a<0)
	modu=-a;
    else
	modu = a; 
    cout << "Modulus of first number: " << modu << endl;
}

int main()
{
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	C c(a,b);
	c.add();
	c.sub();
	c.mul();
	c.div();
	c.mod();
	return 0;
}
