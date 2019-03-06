#include <stdio.h>
#include <string.h>

void upper(char s[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
			s[i] -= 32;
	}
	printf("The uppercase text is:\n");
	for (int i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);
}

void lower(char s1[])
{
	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 'A'&&s1[i] <= 'Z')
			s1[i] += 32;
	}
	printf("The lowercase text is:\n");
	for (int i = 0; s1[i] != '\0'; i++)
		printf("%c", s1[i]);
}

int main()
{
	char s[50], s1[50];
	printf("Enter the lowercase text\n");
	gets(s);
	upper(s);
	printf("\n\nEnter the uppercase text\n");
	gets(s1);
	lower(s1);
	getchar();
	return 0;
}


