#include<stdio.h>
#include<ctype.h>
#include<string.h>

void shand(char *s1, char *s2)
{
	int a,b,c;	//iterators
	c=0;			//iterator for resultant string
	
	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] != '-')
			s2[c++] = s1[a];
		else
		{
			if (s1[a-1]>=48&&s1[a-1]<=57&&s1[a+1]>=48&&s1[a+1]<=57)     //for digits expansion
			{
				b = s1[a - 1]-48;
				if((s1[a+1]>b)&&(b>0))
				{
					//coverting to ASCII range. For numbers 0= ascii 48 to 9=ascii57
					for (b = s1[a - 1] - 47; b < s1[a + 1] - 48; b++)
						s2[c++] = b + 48;
				}
				else
				{
					printf("Cannot expand");
					s2[c++] = '-';
				}
			}
			
			else if(s1[a-1]>=97&&s1[a-1]<=122&&s1[a+1]>=97&&s1[a+1]<=122) //for lowercase alphabets expansion
			{
				//For lower alphabets a= ascii 97 to z=ascii 122
				for (b = s1[a - 1] - 96; b < s1[a + 1] - 97; b++)
					s2[c++] = b + 97;
			}
			else if(s1[a-1]>=65&&s1[a-1]<=90&&s1[a+1]>=65&&s1[a+1]<=90) //for lowercase alphabets expansion
			{
				//For upper alphabets A= ascii 65 to Z=ascii 90
            	for(b = s1[a - 1] - 64; b < s1[a + 1] - 65; b++)//uppercase alphabets(65-90)
            		s2[c++] = b + 65;					}
			else
          {  
            	printf("Cannot expand");
				s2[c++] = '-';
			}
		}
	}
	s2[c] = '\0';
}
int main()
{
	char input_string[50], output_string[50];
	printf("Enter input shorthand string with alphabets and positive numbers\n");
	scanf("%s", input_string);
	shand(input_string, output_string);
	printf("\nExpanded String is %s\nThis expansion is correct for positive numbers and alphabets only\n\n", output_string);
	
	getchar();
	return 0;
}
