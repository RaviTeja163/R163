#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x_coordinate;
    int y_coordinate;
public:
    void read_point(int a,int b)
    {
        x_coordinate=a;
        y_coordinate=b;
    }
friend void distance(Point,Point);
};
void distance(Point p1,Point p2)
{
    float dist;
    dist= sqrt(((p2.x_coordinate - p1.x_coordinate)*(p2.x_coordinate - p1.x_coordinate)) + ((p2.y_coordinate - p1.y_coordinate)*(p2.y_coordinate - p1.y_coordinate)));
    cout<<"Distance is : "<<dist<<endl;
}

int main()
{
    int point1_x,point1_y,point2_x,point2_y;
    Point p1,p2;
    cout<<"Enter the x and y coordinates of first point\n";
    cin>>point1_x>>point1_y;
    p1.read_point(point1_x,point1_y);
    cout<<"Enter the x and y coordinates of second point\n";
    cin>>point2_x>>point2_y;
    p2.read_point(point2_x,point2_y);
    distance(p1,p2);
    return 0;
}
