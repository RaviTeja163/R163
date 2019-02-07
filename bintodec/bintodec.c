#include<stdio.h>
#include<math.h>
void dtob(int n)
{
	int arr[10], i; 
	int temp = n;
	for (i = 0; temp > 0; i++)
	{
		int r = temp % 2;
		arr[i] = r;
		temp = temp / 2;
	}
	int j;
	printf("\nbinary of %d is ", n);
	for (j = i - 1; j >= 0; j--)
		printf("%d", arr[j]);
}
void btod(int b)
{
	int temp, t, s = 0;
	temp = b;
	for (int i = 0; temp > 0; i++)
	{
		t = temp % 10;
		s += t*pow(2, i);
		temp = temp / 10;
	}
	printf("\ndecimal of %d is %d", b,s);
}
int main()
{
	int n,b;
	printf("Enter a decimal number\n");
	scanf_s("%d", &n);
	dtob(n);
	printf("\nEnter a binary number\n");
	scanf_s("%d", &b);
	btod(b);
	getchar();
	getchar();
	return 0;
}
