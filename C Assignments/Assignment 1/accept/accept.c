#include<stdio.h>
int main()
{
	
	int i, arr[100];
	printf("Enter the data\n");
	for (i = 0;; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] <= 0)
			break;
	}
	printf("No of positive values entered =%d\n",i);
	
	int max = arr[0];
	for (int j = 1; j < i; j++)
	{
		if (arr[j] > arr[j - 1])
			max = arr[j];
	}
	printf("The maximum value =%d\n", max);
	int min = arr[0];
	for (int j = 1; j < i; j++)
	{
		if (arr[j] < arr[j - 1])
			min = arr[j];
	}
	printf("The minimum value =%d\n", min);
	int s = 0;
	for (int j = 0; j < i; j++)
	{
		s += arr[j];
	}
	float avg = (float)s / i;
	printf("The average value =%f\n", avg);
	getchar();
	getchar();
	return 0;
}