#include<stdio.h>
int main()
{
	int n,f=1;
	printf("Enter a number");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		f = f*i;
	}
	printf("\nFactorial of %d is %d", n,f);
	getchar();
	getchar();
	return 0;
}