#include <stdio.h>
#include <math.h>
#include <string.h>

void dtoh(int n)
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
	int j;
	printf("\nhex of %d is ", n);
	for (j = i - 1; j >= 0; j--)
		printf("%c", arr[j]);
}

void htod(char hex[])
{
	long dec = 0;
	int val;

	int len = strlen(hex);
	len--;

	for (int i = 0; hex[i] != '\0'; i++)
	{

		if (hex[i] >= '0' && hex[i] <= '9')
		{
			val = hex[i] - 48;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			val = hex[i] - 97 + 10;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			val = hex[i] - 65 + 10;
		}

		dec += val * pow(16, len);
		len--;
	}

	printf("\nDecimal of %s is ", hex);
	printf("%ld", dec);

}

int main()
{
	int n;
	char hex[10];
	printf("\nEnter a hex number\n");
	//scanf_s("%s", hex);
	gets(hex);
	htod(hex);
	
	printf("\nEnter a decimal number\n");
	scanf_s("%d", &n);
	dtoh(n);
	
	getchar();
	getchar();
	return 0;
}