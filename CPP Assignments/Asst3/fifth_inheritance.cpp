#include<iostream>
#include<cstring>
using namespace std;
class Person
{
public:
	char name[20];
	int age;
	Person()
	{
		strcpy(name,"Ravi");
		age = 20;
	}
	void display()
	{
		printf("Name is %s and age is %d\n", name, age);
	}
};

class physique : virtual public Person
{
public:
	int height;
	int weight;
	physique()
	{
		height = 190;
		weight = 70;
	}
	void display1()
	{
		printf("Height is %d and weight is %d\n", height, weight);
	}
};

class family : virtual public Person
{
public:
	int numChildren;
	char religion[20];
	family()
	{
		numChildren = 0;
		strcpy(religion,"Hindu");
	}
	void display2()
	{
		printf("Number of children are %d and religion is %s\n", numChildren, religion);
	}
};

class employee : public physique, public family
{
public:
	int empno;
	float salary;
	employee()
	{
		empno = 65;
		salary = 50000.0;
	}
	void display3()
	{
		display();
		display1();
		display2();
		printf("Employee number is %d and salary is %f\n", empno, salary);
	}
};
int main()
{
	employee e;
	e.display3();
    return 0;
}
