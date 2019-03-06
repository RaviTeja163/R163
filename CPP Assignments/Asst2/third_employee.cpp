#include<iostream>
using namespace std;
class Employee{
	int empno;
	char s[50];
	int salary;
public:
	Employee()
	{
		empno=0;
		strcpy(s,"name");
		salary=0;
	}
	void setdata()
	{
		cin>>empno>>s>>salary;
	}
	~Employee()
	{
		cout<<"Destructor called"<<endl;
	}
	friend ostream& operator<<(ostream& cout,Employee e);
};
ostream& operator<<(ostream& cout,Employee e)
{
	cout<<e.empno<<endl<<e.s<<endl<<e.salary<<endl;
	return cout;
}
int main()
{
	Employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number,name and salary of employee "<<i+1<<endl;
		e[i].setdata();
	}
	for(i=0;i<5;i++)
        {
                cout<<"Details of employee "<<i+1<<endl;
		cout<<e[i];
        }
	cout<<endl;	
return 0;
}
	
