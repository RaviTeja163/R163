#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n;
struct country
{
	char **key;
	char **value;
	
}s;
void insert()
{ int i;
	char name[50],name2[50];
	printf("enter the number of countries\n");
	scanf("%d",&n);
	s.key=(char**)malloc(n*sizeof(char*));
	s.value=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
                printf("enter %d country and capital",i+1);
		scanf("%s %s",name,name2);
		s.key[i]=(char *)malloc((strlen(name)+1)*sizeof(char));
		s.value[i]=(char *)malloc((strlen(name2)+1)*sizeof(char));
		strcpy(s.key[i],name);
		strcpy(s.value[i],name2);
	}
}
void findvalue()
{
	char name[50];
	int i;
	printf("enter the country name\n");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(s.key[i],name)==0)
		{
			printf("%s\n",s.value[i]);
			break;
		}	
	}


}
void findkey()
{
	char name[50];
	int i;
	printf("enter the capital name\n");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(s.value[i],name)==0)
		{
			printf("%s\n",s.key[i]);
			break;
		}	
	}


}
int main()
{
int ch;
insert();
do{
printf("enter your desired choice\n");
printf("1.determine capital\n2.determine country\n3.exit\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:findvalue();
	       break;
	case 2:findkey();
	       break;
	case 3:printf("exiting....");
	       break;
	default:printf("invalid choice");
		break;
}
}while(ch!=3);
}
