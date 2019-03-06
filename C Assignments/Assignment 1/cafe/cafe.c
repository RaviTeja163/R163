#include<stdio.h>
void threeon(int n)
{
	int r = n & 0x000F;
	int c = 0;
	for (int i = 0; i < 4; i++)
	{
		int t = 1<<i;
		if (r&t)
			c++;
	}
	if(c>=3)
		printf("Test: atleat three ones are present in last 4 bits\n");
	else
		printf("Three ones are not present\n");
}
void reverse(int n)
{
	int a = (n << 8) & 0x0000FFFF;
	int b = n >> 8;
	printf("Reversed Byte Order : %x\n", a + b);
}
void rotate(int n)
{
	int a = (n << 12) & 0x0000FFFF;
	int b = n >> 4;
	printf("Four bits rotated : %x\n", a + b);
}

int main()
{
	int val = 0xCAFE;
	printf("Original data : %x\n", val);
	threeon(val);
	reverse(val);
	rotate(val);
	
	getchar();
	getchar();
	return 0;
}
