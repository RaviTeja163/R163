#include<iostream>
using namespace std;
class Polar{
	int angle;
	int radius;
	static int c;
public:
	Polar()
	{
		c++;
		angle=radius=0;
	}
	Polar(int a,int r)
	{
		c++;
		angle=a;
		radius=r;
	}
	~Polar()
	{
		c--;
	}
	int objects()
	{
		return c;
	}
};
int Polar::c=0;
int main()
{
	int count;
	Polar p1,p2,p3,p4(2,3),p5(5,8);
	count=p5.objects();
	cout<<"The number of active objects are "<<count<<endl;
	return 0;
}
