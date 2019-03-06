#include<stdio.h>
int main()
{
	int x[8] = { 10,20,30,40,50,60,70,80 };
	printf("\nx=%d", x);
	printf("\n(x+2)=%d", (x + 2));
	printf("\n*x=%d", *x);
	printf("\n(*x+2)=%d", (*x + 2));
	printf("\n*(x+2)=%d", *(x + 2));

	getchar();
	return 0;
}