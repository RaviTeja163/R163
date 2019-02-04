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
void rotate_right(int n,int b)
{
	int s = 0,a;
	int i = 0,t;
	int temp = n;
	while (i < b)
	{
		t = temp % 10;
		s = s + t * pow(10,i) ;
		temp = temp / 10;
		i++;
	}
	a = noofdigits(n);
	s = (s * pow(10, (a - b))) + temp;
		printf("\n Result is %d", s);
}

int main()
{
	int n, b;
	printf("Enter number and shifts");
	scanf_s("%d %d", &n, &b);
	rotate_right(n, b);
	getchar();
	getchar();
	return 0;
}