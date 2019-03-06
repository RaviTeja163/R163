#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void any(char *s1,char *s2)
{
	char *p1,*p2,*p3;
	int i,j,flag=0;
	p1=s1;
	p2=s2;
	for(i=0;i<strlen(s1);i++)
	{
		if(*p1==*p2)
		{
			p3=p1;
			for(j=0;j<strlen(s2);j++)
			{
				if(*p3==*p2)
				{
					p3++;
					p2++;
				}
				else
					break;
			}
			p2=s2;
			if(j==strlen(s2))
			{
				flag=1;
				printf("Substring is found\n");
			}
		}
		p1++;
	}
	if(flag==0)
		printf("Substring not found\n");
}
int main()
{
	char string[30],sub[10];
	printf("Enter the string\n");
	gets(string);
	printf("Enter the substring\n");
	gets(sub);
	any(string,sub);
	return 0;
}	
