#include<stdio.h>


int main()
{
	int n, sum=0, temp,t;
	printf("Enter a number\n");
	scanf_s("%d", &n);
	temp = n;
	while (temp > 0)
	{
		t = temp % 10;
		sum += t;
		temp = temp / 10;
	}
	printf("\nSum of digits=%d", sum);
	getchar();
	getchar();
	return 0;
}