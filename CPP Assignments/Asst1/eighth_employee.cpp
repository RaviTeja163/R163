#include<iostream>
using namespace std;

class Employee{
    int i;
public:
    Employee(int t)
    {
        i=t;
        cout<<"Constructor "<<t<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor "<<i<<endl;
    }
};
int main()
{
    Employee e1(1);
    Employee e2(2);
    Employee e3(3);
    cout<<"The size of an object of this class="<<sizeof(e1)<<endl;
    return 0;
}
