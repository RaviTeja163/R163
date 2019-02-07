#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a decimal number\n");
	scanf_s("%d", &n); 
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
	getchar();
	getchar();
	return 0;
}
