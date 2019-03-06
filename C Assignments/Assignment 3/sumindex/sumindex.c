#include<stdio.h>
int main()
{
	int x[20], sum, n, m, i, j, s, f = 0;
	printf("Enter the number of terms\n");
	scanf_s("%d", &n);
	printf("Enter the data\n");
	for (i = 0; i<n; i++)
	{
		scanf_s("%d", &x[i]);
	}
	printf("\nOriginal data : ");
	for (i = 0; i<n; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\nRequired sum = ");
	scanf_s("%d", &sum);

	///////////////////////////////////CODE
	for (j = 0; j<n; j++)
	{
		m = j;
		s = 0;
		for (i = j; i<n; i++)
		{
			s += x[i];
			if (s == sum)
			{
				n = i;
				f = 1;
				break;
			}
		}
		if (f == 1)
		{
			break;
		}
	}
	if (f == 1)
	{
		printf("\nSum found between %d and %d ", m, n);
	}
	else
		printf("\nNo subarray found");

	getchar();
	getchar();
	return 0;
}