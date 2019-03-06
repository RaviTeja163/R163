#include<iostream>
using namespace std;
class Time{
	int hour;
	int minute;
	int seconds;
	public:
	Time()
	{
		hour=minute=seconds=0;
	}
	Time(int h,int m,int s)
	{
		hour=h;
		minute=m;
		seconds=s;
	}
	void display()
	{
		cout<<hour<<":"<<minute<<":"<<seconds<<endl;
	}
	void add(Time t1,Time t2)
	{
		Time temp;
		temp.hour=t1.hour+t2.hour;
		temp.minute=t1.minute+t2.minute;
		temp.seconds=t1.seconds+t2.seconds;
		if(temp.seconds>60)
		{temp.minute++;
			temp.seconds=temp.seconds-60;
		}
		if(temp.minute>60)
		{temp.hour++;
			temp.minute=temp.minute-60;
		}

		if(temp.hour>24)
		{
			 temp.hour=-24;
		}
		temp.display();
	}
};
int main()
{
	Time t1(1,30,30);
	Time t2(2,40,40);
	Time t3;
	t1.display();
	t2.display();
	t3.add(t1,t2);
	return 0;
}

