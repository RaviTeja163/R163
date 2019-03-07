#include<stdio.h>
#include<string.h>

int my_strcmp(char *s1, char *s2)
{ 
	char *string1,*string2;
	string1=s1,string2=s2;
	int iterator=0;
	while (s1[iterator] == s2[iterator])
	{
		if (s1[iterator] == '\0')
			return 0;
		iterator++;
	}
	return 1;
}

void my_strcat(char *s1, char *s2)
{
	char *string1,*string2;
	string1=s1,string2=s2;
	int iterator=0;
	while(string1[iterator]!='\0')
    {
        iterator++;
    }
    int iterator2=0;
	while(string2[iterator2]!='\0')
    {
        if(string2[iterator2]=='#')
        {
        	string1[iterator]=' ';
        	iterator++;
        	iterator2++;
        }
        else
        {
        	string1[iterator]=string2[iterator2];
        	iterator++;
        	iterator2++;
        }
    }
    string1[iterator]='\0';
    printf("Concatenated string is : %s\n", string1);
}

void my_strcpy(char *s2, char *s1)
{
	char *string1,*string2;
	string1=s1,string2=s2;
	int iterator=0;
	while(string1[iterator]!='\0')
    {
        string2[iterator]=string1[iterator];
        iterator++;
    }
    string2[iterator]='\0';
    printf("Copied string is : %s\n", string2);
}

void my_strrev(char *s)
{
	int len=strlen(s)-1;
	int iterator;
	char temp[len+1];
	temp[len+1]='\0';
	for (iterator = 0; iterator < strlen(s); iterator++)
	{
		temp[len] = s[iterator];
		len--;
	}
	printf("Reversed String is : %s \n", temp);
	
}

int main()
{
	char input_string[50],dummy_string[50];
	int choice,result;
	
	do{
	printf("Enter the input string which is less than 50 characters\n");
	scanf("%s", input_string);
	printf("Enter the required choice\n1.String Reverse\n2.String Copy\n3.String Concatenation\n4.String Compare\n5.Exit\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		my_strrev(input_string); 
		break;
	case 2:
		my_strcpy(dummy_string, input_string);
		break;
	case 3:
		printf("Enter the string to be concatenated\n(For a space, keep #)\n");
		scanf("%s", dummy_string);
		my_strcat(input_string, dummy_string);
		break;
	case 4:
		printf("Enter the string to be compared\n");
		scanf("%s", dummy_string);
		result = my_strcmp(input_string, dummy_string) ;
		if (result == 0)
			printf("Strings are equal\n");
		else
			printf("Strings are not equal\n");
		break;
	case 5:
		printf("Exiting\n");
		break;
	default:
		printf("Invalid option\n");
	}
	}while(choice!=5);
	getchar();
	return 0;
}