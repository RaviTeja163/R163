#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
public:
	Complex()
	{
		real=img=0;
	}
	Complex(int i)
	{
		real=img=i;
	}
	Complex(int r,int i)
	{
		real=r;
		img=i;
	}
	void display()
	{
		cout<<real<<"+i"<<img<<endl;
	}
friend Complex add(Complex c1,Complex c2);
friend Complex mul(Complex c1,Complex c2);
};

Complex add(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return (temp);
}

Complex mul(Complex c1,Complex c2)
{
        Complex temp;
        temp.real=c1.real*c2.real-c1.img*c2.img;
        temp.img=c1.img*c2.real+c1.real*c2.img;
        return (temp);
}

int main()
{
	Complex c1(5),c2(4,6),c3,c4;
	c3=add(c1,c2);
	c4=mul(c1,c2);
	cout<<"The two complex numbers are"<<endl;
	c1.display();
	c2.display();
	cout<<"Sum is ";
	c3.display();
	cout<<"Product is ";
	c4.display();
	return 0;
}
