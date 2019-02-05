#include<stdio.h>
#include<math.h>
long int amount(int p, int t, int r, int n)
{
	long int a = p*pow((1 + (r / (100 * n))), (t*n));
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
	long int interest = amount(ap, at, ar, n);
	printf("\nAmount=%d", interest); 
}
void comphalf(int p, int t, int r)
{
	int n = 2;
	int ap = p, at = t, ar = r;
	long int interest = amount(ap, at, ar, n);
	printf("\nAmount=%d", interest);
}
void compquat(int p, int t, int r)
{
	int n = 4;
	int ap = p, at = t, ar = r;
	long int interest = amount(ap, at, ar, n);
	printf("\nAmount=%d", interest);
}
void compmonth(int p, int t, int r)
{
	int n = 12;
	int ap = p, at = t, ar = r;
	long int interest = amount(ap, at, ar, n);
	printf("\nAmount=%d", interest);
}
void compday(int p, int t, int r)
{
	int n = 365;
	int ap = p, at = t, ar = r;
	long int interest = amount(ap, at, ar, n);
	printf("\nAmount=%d", interest);
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
	float test = p*pow((1.05,10);
	printf("\n%d", test);
	getchar();
	getchar();
	return 0;
}