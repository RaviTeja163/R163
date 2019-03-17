#include<iostream>
using namespace std;

class Swap{
public:
    void swap_value(int a, int b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void swap_reference(int &a, int &b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
};
int main()
{
    Swap s;
    int op1,op2,choice;
    cout<<"Enter the 2 numbers\n";
    cin>>op1>>op2;
    do{
        cout<<"Enter the method of swapping\n1.Call by value\n2.Call by reference\n3.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:s.swap_value(op1,op2);
                cout<<"The swapped numbers are\n"<<op1<<endl<<op2<<endl;
                break;
            case 2:s.swap_reference(op1,op2);
                cout<<"The swapped numbers are\n"<<op1<<endl<<op2<<endl;
                break;
            case 3:cout<<"Exit\n";
                break;
            default:cout<<"Invalid choice\n";
                break;
        }        
    }while(choice!=3);

    return 0;
}
