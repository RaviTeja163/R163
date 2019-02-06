#include<stdio.h>
#include<math.h>
double amount(int p, int t, int r, int n)
{
	float co = ((float)r / (100 * n));
	double a = p*pow((1 +co), (t*n))-p;
	return a;
}
void simple(int p, int t, int r)
{
	long int a = (p*t*r) / 100;
	printf("\nSimple interest=%d", a);
}
void compone(int p, int t, int r)
{
	int n = 1;
	int ap = p, at = t, ar = r;
	double interest = amount(ap, at, ar, n);
	printf("\nCI compounded yearly=%lf", interest); 
}
void comphalf(int p, int t, int r)
{
	int n = 2;
	int ap = p, at = t, ar = r;
	double interest = amount(ap, at, ar, n);
	printf("\nCI compounded half yearly=%lf", interest);
}
void compquat(int p, int t, int r)
{
	int n = 4;
	int ap = p, at = t, ar = r;
	double interest = amount(ap, at, ar, n);
	printf("\nCI compounded quaterly=%lf", interest);
}
void compmonth(int p, int t, int r)
{
	int n = 12;
	int ap = p, at = t, ar = r;
	double interest = amount(ap, at, ar, n);
	printf("\nCI compounded monthly=%lf", interest);
}
void compday(int p, int t, int r)
{
	int n = 365;
	int ap = p, at = t, ar = r;
	double interest = amount(ap, at, ar, n);
	printf("\nCI compounded daily=%lf", interest);
}
int main()
{
	int p = 500000;
	int t = 10;
	int r = 5;
	simple(p, t, r);
	compone(p, t, r);
	comphalf(p, t, r);
	compquat(p, t, r);
	compmonth(p, t, r);
	compday(p, t, r);
	getchar();
	getchar();
	return 0;
}