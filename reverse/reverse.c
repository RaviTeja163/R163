#include<stdio.h>
#include<math.h>
int noofdigits(int n)
{
	int a = 0;
	while (n > 0)
	{
		n = n / 10;
		a++;
	}
	return a;
}
int main()
{
	int n,temp,t,a,s=0;
	printf("Enter a number\n");
	scanf_s("%d", &n);
	a = noofdigits(n);
	temp = n;
	while (temp > 0)
	{
		t = temp % 10;
		s = s + t*pow(10, (a - 1));
		temp = temp / 10;
		a--;
	}
	printf("\nReverse of %d is %d", n, s);
	getchar();
	getchar();
	return 0;
}