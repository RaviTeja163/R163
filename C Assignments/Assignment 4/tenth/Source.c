#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void delete(char s[],char c)
{
	int i,j=0;
	int len=strlen(s);
	char c1;
	char s1[20];
	for(i=0;i<len;i++)
	{
		if(s[i]!=c)
		{
			c1=s[i];
			s1[j++]=c1;
		}
	}
	s1[j]='\0';
	printf("Corrected string is : %s\n",s1);
}
int main()
{
	char s[20];
	char c;
	printf("Enter the string\n");
	gets(s);
	printf("Enter the character to be deleted\n");
	scanf("%c",&c);
	delete(s,c);
	return 0;
}
