#include<stdio.h>
int main()
{
	int arr[10],n,i;
	printf("Enter a number\n");
	scanf_s("%d", &n);
	int temp = n;
	for (i=0;temp > 0;i++)
	{
		int r = temp % 2;
		arr[i] = r;
		temp = temp / 2;
		printf("%d",arr[i]);
	}
	printf("\n%d\n,i");
	int j;
	for(j=i;j>=0;j--)
		printf("%d", arr[i]);
	getchar();
	getchar();
	return 0;
}