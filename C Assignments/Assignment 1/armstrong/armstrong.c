#include<stdio.h>
#include<math.h>
int main()
{
	int n, temp, s = 0;
	printf("Enter a number\n");
	scanf("%d", &n);
	temp = n;
	while (temp > 0)
	{
		int t = temp % 10;
		s = s + pow(t, 3);
		temp = temp / 10;
	}
	if (s == n)
		printf("%d is an armstrong number", n);
	else
		printf("%d is not an armstrong number", n);
	getchar();
	return 0;
	//system("pause");
}