#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf("Enter the number of strings required:");
	scanf("%d",&n);
	char *ch[n];
	for(i=0;i<n;i++)
	{
		printf("Enter string %d :",i+1);
		char name[20];
		scanf("%s",name);
		int len=strlen(name);
		ch[i]=(char*)malloc((len+1)*(sizeof(char)));
		if(ch[i]==NULL)
		{
			return -1;
			free(ch[i-1]);
			for(j=i-2;j>=0;j--)
				free(ch[j]);
		}
		strcpy(ch[i],name);
	}
	printf("The strings are:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",ch[i]);
	}
	for(j=n-1;j>=0;j--)
		free(ch[j]);
	return 0;
}
