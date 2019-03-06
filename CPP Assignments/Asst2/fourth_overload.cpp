#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
public:
	Complex()
	{
		cout<<"Default constructor"<<endl;
		real=img=0;
	}
	Complex(int r, int i)
	{
		cout<<"Parameterized constructor"<<endl;
		real=r;
		img=i;
	}
	Complex(Complex &c)
	{
		cout<<"Copy constructor"<<endl;
		real=c.real;
		img=c.img;
	}
	~Complex()
	{
		cout<<"Destructor"<<endl;
	}
	Complex operator+(Complex c)
	{
		Complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return (temp);
	}
	Complex operator-(Complex c)
        {
                Complex temp;
                temp.real=real-c.real;
                temp.img=img-c.img;
                return (temp);
        }
	Complex operator-()
        {
                Complex temp;
		temp.real=-real;
                temp.img=-img;
                return (temp);
        }
	Complex operator++()
        {
                ++real;
                ++img;
                return (*this);
        }
	 Complex operator++(int x)
        {
                Complex temp;
		temp.real=real++;
                temp.img=img++;
                return (temp);
        }
	Complex operator=(Complex c)
	{
                real=c.real;
                img=c.img;
                return (*this);
	}
	Complex operator,(Complex c)
        {
                return (c);
        }
	Complex* operator->()
        {
                return (this);
        }
	friend ostream& operator<<(ostream& cout,Complex c);
	friend istream& operator>>(istream& cin,Complex &c);
};
ostream& operator<<(ostream& cout,Complex c)
{
	cout<<c.real<<"+i"<<c.img<<endl;
	return cout;
}
istream& operator>>(istream& cin,Complex &c)
{
	cin>>c.real>>c.img;
	return cin;
}
int main()
{
	Complex c1,c2(3,4),c3(c2),c4,c5,c6;
	cout<<"Enter complex number"<<endl;
	cin>>c1;
	cout<<c1;
	cout<<c2;
	cout<<c3;
	cout<<c4;
	cout<<c5;
	cout<<c6;
	/*c4=c1+c2;
	cout<<c4;
	c5=c2-c1;
	cout<<c5;
	c6=-c3;
	cout<<c6;
	c6=++c1;
	cout<<c6;
	c6=c2++;
	cout<<c6;*/
	
	return 0;
}
