#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter a number\n");
	scanf_s("%x", &n);
	printf("Hexadecimal number=%x\n", n);
	printf("Choose an option\n1)Ones complement\n2)Masking\n3)Bit shifting\n4)Exit\n");
	scanf_s("%d", &i);
	switch (i)
	{
	case 1: printf("One's complement=%x\n", ~n); break;
	case 2: printf("LSB byte masked=%x\n", (n & 0xffffff00)); break;
	case 3: printf("1 bit right shifted=%x\n", (n >> 1)); break;
	case 4: return 0;
	default: printf("Invalid Option"); break;
	}
	getchar();
	getchar();
	return 0;
}
