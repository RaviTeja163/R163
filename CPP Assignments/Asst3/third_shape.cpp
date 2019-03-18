#include<iostream>
using namespace std;
class Shape
{
public:
	virtual void displayArea()
	{
		cout << "displayArea function of Shape class\n";
	}
};
class Triangle :public Shape
{
public:
	void displayArea()
	{
		cout << "Triangle area is (b*h)/2\n";
	}
};
class Square :public Shape
{
public:
	void displayArea()
	{
		cout << "Square area is (s*s)\n";
	}
};
class Rectangle :public Shape
{
public:
	void displayArea()
	{
		cout << "Rectangle area is (l*b)\n";
	}
};
int main()
{
	Shape *s, sh;
	sh.displayArea();
	Triangle tr;
	tr.displayArea();      //Direct Triangle class
    s = &tr;
	s->displayArea();      //Triangle class with pointer of Shape class
	Square sq;
	s = &sq;
	s->displayArea();      //Square class with pointer of Shape class
	Rectangle rec;
	s = &rec;
	s->displayArea();      //Rectangle class with pointer od Shape class
	return 0;
}
