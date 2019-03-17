#include<iostream>
#include<cstring>
using namespace std;
class Student{
    char* name;
    char grade[20];
    int mark1,mark2,mark3;
public:
    void set_data(char* studentName,int marks1,int marks2,int marks3)
    {
        int length;
        length=strlen(studentName);
        name=(char*)malloc(sizeof(char)*(length+1));
        strcpy(name,studentName);
        mark1=marks1;
        mark2=marks2;
        mark3=marks3;
    }
    float calculateAverage()
    {
        int sum=mark1+mark2+mark3;
        return sum/3;
    }
    void ComputeGrade()
    {
        float avg=calculateAverage();
        if(avg>=60)
            strcpy(grade,"First Class");
        else if(avg>=50&&avg<60)
            strcpy(grade,"Second Class");
        else if(avg>=40&&avg<50)
            strcpy(grade,"Third Class");
        else if(avg<40)
            strcpy(grade,"Fail");
    }
    void display()
    {
        cout<<"The student details are\n"<<name<<endl<<mark1<<endl<<mark2<<endl<<mark3<<endl<<grade<<endl;
    }
};

int main()
{
    Student s;
    s.set_data("Ravi",70,80,90);
    s.ComputeGrade();
    s.display();
    return 0;
}
