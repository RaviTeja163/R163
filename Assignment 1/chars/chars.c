#include<stdio.h>
#include<string.h>
int main()
{
	int i, c = 0, d = 0, s = 0, t = 0;
	char text[80];
	printf("Enter the text\n");
	gets(text);
	int len = strlen(text);
	for (i = 0; i <= len; i++)
	{
		if ((text[i] >= 'A'&&text[i] <= 'Z') || (text[i] >= 'a'&&text[i] <= 'z'))
			c++;
		if (text[i] >= '0'&&text[i] <= '9')
			d++;
		if (text[i] == ' ')
			s++;
		if (text[i] == '	')
			t++;
	}
	printf("Entered text is:\n%s\n",text);
	printf("Length=%d\n",len);
	printf("Number of alphabets=%d\n", c);
	printf("Number of digits=%d\n", d);
	printf("Number of spaces=%d\n", s);
	printf("Number of tabs=%d\n", t);
	getchar();
	getchar();
	return 0; 
}