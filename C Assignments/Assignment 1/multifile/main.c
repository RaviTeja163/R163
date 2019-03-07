#include<stdio.h>
int res = -1;
long int res1 = -1;
float res2 = -1;
int add(int, int);
int sub(int, int);
long int mul(int, int);
float divi(int, int);
int main()
{
	int a, b, c;
	printf("Enter the inputs\n");
	scanf("%d %d", &a, &b);
	printf("Enter your choice\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
	{
		res = add(a, b); printf("Sum=%d\n", res); break;
	}
	case 2:
	{
		res = sub(a, b); printf("Diff=%d\n", res); break;
	}
	case 3:
	{
		res1 = mul(a, b); printf("Product=%ld\n", res1); break;
	}
	case 4:
	{
		res2 = divi(a, b); printf("Quotient=%f\n", res2); break;
	}
	}

	return 0;
}