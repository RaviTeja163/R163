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
	int n, a, temp, s = 0;
	printf("Enter a number");
	scanf_s("%d", &n);
	a = noofdigits(n);
	temp = n;
	while (temp > 0)
	{
		int t = temp % 10;
		s = s + t*pow(10, (a - 1));
		temp = temp / 10;
		a--;
	}
	if (s == n)
		printf("%d is a palindrome", n);
	else
		printf("%d is not a palindrome", n);
	getchar();
	getchar();
	return 0;
}