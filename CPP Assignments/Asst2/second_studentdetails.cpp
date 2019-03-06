#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class student
{ 
	char * s;
	char *grade;
	int *marks;
public:
	void set_data(char name[],int marks1,int marks2,int marks3)
	{
		int len=strlen(name)+1;
		s=(char*)malloc(len*sizeof(char));
		strcpy(s,name);
		marks=(int *)malloc(3*sizeof(int));
		grade=(char *)malloc(15*sizeof(char));
		marks[0]=marks1;
		marks[1]=marks2;
		marks[2]=marks3;			

	}
	float calculateaverage()
	{
		float avg=(marks[0]+marks[1]+marks[2])/(float)3;
	 	return avg;	     
	}
	void computegrade()
	{                                  
		float avg=calculateaverage();
		if(avg>60.0)
			strcpy(grade,"First class");
		else if(avg>=50.0 && avg<60.0)
			strcpy(grade,"Second class");
		else if(avg>=40.0 && avg<50.0)
			strcpy(grade,"Third class");
		else
			strcpy(grade,"Fail");
		}
	void display()
	{
		cout<<s<<endl;
		cout<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
		cout<<grade<<endl;
	}

};
int main()
{
student c1;
c1.set_data("Ravi",70,90,80);
c1.computegrade();
c1.display();
}
