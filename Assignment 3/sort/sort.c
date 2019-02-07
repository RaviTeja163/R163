#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int x[20], y[20], n, i, j = 0;
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
	for (i = 0; i<n; i++)
	{
		if (x[i]<0)
		{
			y[j] = x[i];
			j++;
		}
	}
	for (i = 0; i<n; i++)
	{
		if (x[i]>0)
		{
			y[j] = x[i];
			j++;
		}
	}
	printf("\nSorted data : ");
	for (i = 0; i<n; i++)
	{
		printf("%d ", y[i]);
	}
	getchar();
	getchar();
	return 0;
}