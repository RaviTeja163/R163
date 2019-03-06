#include<stdio.h>
struct time{
	int hrs;
	int min;
	int sec;
}s;
int main()
{
	printf("Enter the hrs,min and sec\n");
	scanf("%d %d %d",&s.hrs,&s.min,&s.sec);
	printf("The time in 24hour format is %d:%d:%d\n",s.hrs,s.min,s.sec);
	return 0;
}
