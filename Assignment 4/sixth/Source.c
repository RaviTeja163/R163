#include <stdio.h>
#include <string.h>

void revr(char *s, int len, int i)
{
	//printf("%d\n", i);
	if(i >= len)
	{
		return;
	}

	char c = *(s+i);
	*(s + i) = *(s + len);
	*(s + len) = c;
	revr(s, --len, ++i);
}

int main()
{
	char s[50];
	printf("Enter the text\n");
	gets(s);
	int len = strlen(s);
	printf("Length=%d\n",len);
	int i = 0;
	printf("\nThe entered text is : %s\n",s);
	revr(s,len-1,i);
	printf("\nReversed text is : %s\n", s);
	getchar();
	return 0;
}