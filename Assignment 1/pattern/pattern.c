#include<stdio.h>
int main()
{
	int a,i,s;
	for (a = 1; a <= 5; a++)
	{
		s=5-a;
		for (i = 0; i < s; i++)
			printf(" ");
		for (i = a; i > 1; i--)
			printf("%d", i);
		for (i = 1; i <= a; i++)
			printf("%d", i);
		for (i = 0; i < s; i++)
			printf(" ");
		printf("\n");
	}
	return 0;
	getchar();
}