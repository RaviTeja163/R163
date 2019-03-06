#include<stdio.h>
int main()
{
	float hra, da;
	int sal;
	printf("Enter the salary\n");
	scanf_s("%d", &sal);
	if (sal > 0 && sal <= 4000)
	{
		hra = (10 * (float)sal) / 100;
		da = (50 * (float)sal) / 100;
	}
	if (sal > 4000 && sal <= 8000)
	{
		hra = (20 * (float)sal) / 100;
		da = (60 * (float)sal) / 100;
	}
	if (sal > 8000 && sal <= 12000)
	{
		hra = (25 * (float)sal) / 100;
		da = (70 * (float)sal) / 100;
	}
	if (sal > 12000)
	{
		hra = (30 * (float)sal) / 100;
		da = (80 * (float)sal) / 100;
	}
	float gross = (float)sal + hra + da;
	printf("Gross salary=%f",gross);
	getchar();
	getchar();
	return 0;
}