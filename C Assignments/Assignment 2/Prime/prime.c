#include<stdio.h>
int main()
{
	printf("Enter the range\n");
	int m, n;
	scanf_s("%d%d", &m,&n);
	for (int i = m; i <= n; i++)
	{
		int c = 0; 
		for (int j = 2; j < i; j++)
		{
			int k = i%j;
			if (k == 0)
				c++;
		}
		if (c == 0)
			printf("\n%d", i);
	}
	getchar();
	getchar();
	return 0;
}