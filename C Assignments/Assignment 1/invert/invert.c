#include<stdio.h>
#include<string.h>
void invertponwards(int n, int p, int b)
{
	int arr[10], brr[10], i;
	int temp = n;
	for (i = 0; temp > 0; i++)
	{
		int r = temp % 2;
		arr[i] = r;
		temp = temp / 2;
	}
	int j, k;
	k = i - 1;

	for (j = 0; j < i; j++)
	{
		brr[j] = arr[k];
		k--;
	}
	printf("\nbinary of %d is ", n);

	for (j = 0; j < i; j++)
		printf("%d", brr[j]);

	for (int x = (p - 1); x < (p + b-1); x++)
	{
		if (brr[x] == 1)
			brr[x] = 0;
		else
			brr[x] = 1;
	}
	printf("\nManipulated data is ");
	for (j = 0; j < i; j++)
		printf("%d", brr[j]);
}
int main()
{
	int n;
	printf("Enter a decimal number\n");
	scanf_s("%d", &n);

	int p, b;
	printf("Enter the start position\n");
	scanf_s("%d", &p);
	printf("Enter number of bits to invert\n");
	scanf_s("%d", &b);
	invertponwards(n, p, b);

	getchar();
	getchar();
	return 0;
}