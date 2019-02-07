#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int size(int binary)

{

	int i = 0;

	while (binary>0)

	{

		binary = binary / 10;

		i++;

	}

	return i;

}

int binary_to_decnum(int binary)

{

	int i, j, temp, decnum = 0;

	i = size(binary);

	for (j = 0; j<i; j++)

	{

		temp = binary % 10;

		decnum = decnum + (int)temp*(pow(2, j));

		binary = binary / 10;

	}

	return decnum;

}

int decnum_to_hexa()

{

	int rem, quot;

	int i = 1, j, temp;

	long int binary;

	printf("Enter binary number : ");

	scanf_s("%ld", &binary);

	char hexdecnum[MAX];

	quot = binary_to_decnum(binary);

	while (quot != 0)

	{

		temp = quot % 16;

		if (temp < 10)

		{

			temp = temp + 48;

		}

		else

		{

			temp = temp + 55;

		}

		hexdecnum[i++] = temp;

		quot = quot / 16;

	}

	for (j = i - 1; j > 0; j--)

	{

		return (hexdecnum[j]);

	}

}
char binary(char n[])
{
		char binarynum[MAX], hexa[MAX];
		long int i = 0;

		printf("Enter the value for hexadecimal ");
		scanf_s("%s", hexa);
		printf("\n Equivalent binary value: ");
		while (hexa[i])
		{
			switch (hexa[i])
			{
			case '0':
				return ("0000"); break;

			case '1':
				return("0001"); break;

			case '2':
				return("0010"); break;

			case '3':
				return("0011"); break;

			case '4':
				return("0100"); break;

			case '5':
				return("0101"); break;

			case '6':
				return("0110"); break;

			case '7':
				return("0111"); break;

			case '8':
				return("1000"); break;

			case '9':

				return("1001"); break;

			case 'A':

				return("1010"); break;

			case 'B':

				return("1011"); break;

			case 'C':

				return("1100"); break;

			case 'D':

				return("1101"); break;

			case 'E':

				return("1110"); break;

			case 'F':

				return("1111"); break;

			case 'a':

				return("1010"); break;

			case 'b':

				return("1011"); break;

			case 'c':

				return("1100"); break;

			case 'd':

				return("1101"); break;

			case 'e':

				return("1110"); break;

			case 'f':

				return("1111"); break;

			default:

				printf("\n Invalid hexa digit %c ", hexa[i]);

				return 0;

			}

			i++;

		}

		return 0;

}
int complement(char n[])
{
	int l,i,j;
	char x[MAX],y[MAX], hexdecnum[MAX];
	strcpy_s(x, binary(n));
	
	l = strlen(x);
	for (i = 0; i < l; i++)
	{
		if (x[i] == '1')
		{
			y[i] = '0';
		}
		else
		{
			y[i] = '1';
		}
	}
	for (j = i - 1; j > 0; j--)

	{

		return (hexdecnum[j]);

	}
}
int main()
{
	int i;
	char n[100];
	printf("\n Enter an hexa decimal number");
	gets(n);
	printf("\n Enter ur choice: \n 1) One's complement \n 2)Masking \n 3) Bit shifting \n 4) exit");
	scanf_s("%d", &i);
	switch (i)
	{
		case 1:
		{
			complement(n);
			break;
		}
	}
	return 0;
}