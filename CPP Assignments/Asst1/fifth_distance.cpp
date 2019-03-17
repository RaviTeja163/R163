#include<iostream>
using namespace std;
class Distance2;
class Distance1{
    int metres;
    int centimetres;
public:
    void read()
    {
        cout<<"Enter the distance in metres and centimetres"<<endl;
        cin>>metres>>centimetres;
    }
friend void add(Distance1,Distance2);
};
class Distance2{
    int feet;
    int inches;
public:
    void read()
    {
        cout<<"Enter the distance in feet and inches"<<endl;
        cin>>feet>>inches;
    }
friend void add(Distance1,Distance2);
};

void add(Distance1 d1,Distance2 d2)
{
    int choice;
    float result;
    cout<<"Enter the choice of result\n1.In metres\n2.In feet\n";
    cin>>choice;
    switch(choice)
    {
        case 1:result=(d1.metres)+(d1.centimetres*0.01)+(d2.feet*0.3048)+(d2.inches*0.083*0.3048);
            cout<<"Result in metres = "<<result<<endl;
            break;
        case 2:result=(d1.metres*3.281)+(d1.centimetres*0.01*3.281)+(d2.feet)+(d2.inches*0.083);
            cout<<"Result in feet = "<<result<<endl;
            break;
        default:cout<<"Invalid option\n";
            break;
    }
}

int main()
{
    Distance1 d1;
    Distance2 d2;
    d1.read();
    d2.read();
    add(d1,d2);
    return 0;
}
