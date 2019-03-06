#include<stdio.h>
#include<math.h>
void itob(int n, char s[])
{
	int arr[10], i;
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
		s[j] = arr[k];
		k--;
	}
	printf("\nBinary of %d is ", n);

	for (j = 0; j < i; j++)
		printf("%d", s[j]);
}

void itoh(int n,char s[])
{
	char arr[10];
	int i;
	int temp = n;
	for (i = 0; temp > 0; i++)
	{
		int r = temp % 16;
		if (r<10)
			arr[i] = r + 48;
		else
			arr[i] = r + 55;
		temp = temp / 16;
	}
	
	int j, k;
	k = i - 1;

	for (j = 0; j < i; j++)
	{
		s[j] = arr[k];
		k--;
	}
	printf("\nHex of %d is ", n);

	for (j = 0; j < i; j++)
		printf("%c", s[j]);
}

int main()
{
	int n;
	printf("Enter a decimal number\n");
	scanf_s("%d", &n);
	char s[20];
	itob(n, s);
	itoh(n, s);

	getchar();
	getchar();
	return 0;
}