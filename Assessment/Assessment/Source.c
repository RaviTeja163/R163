#include<stdio.h>
#include<string.h>
void count(FILE *);
void remov(FILE *);
void match(FILE *);
void replace(FILE *);
int main()
{
	
	printf("Choose an option\n1)Count characters\n2)Remove comments\n3)Match and rotate\n4)Replace tabs\n");
	FILE *fp;
	fopen_s(&fp, "dummy.txt", "r");
	int s=0;
	while (s != 6)
	{
		scanf_s("%d", &s);
		switch (s)
		{
		case 1:
		{
			count(fp);
			break;
		}
		case 2:
		{
			remov(fp);
			break;
		}
		case 3:
		{
			match(fp);
			break;
		}
		case 4:
		{
			replace(fp);
			break;
		}
		case 6:
			s = 6;
			break;
		}
	}
	getchar();
	getchar();
	return 0;
}