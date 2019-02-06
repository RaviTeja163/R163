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
	}
	int j;
	for(j=i-1;j>=0;j--)
		printf("%d", arr[j]);
	getchar();
	getchar();
	return 0;
}
