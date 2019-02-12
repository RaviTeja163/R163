#include<stdio.h>
void count(FILE *fp)
{
	/*char c = fgetc(fp);
	printf("%c", c);
	int r = ftell(fp);
	printf("\n%d", r);
	fseek(fp, 4, SEEK_SET);
	r= ftell(fp);
	printf("\n%d", r);
	char d = fgetc(fp);
	printf("\n%c", d);*/
	printf("Counting each type of character\n");
	int a = 0, d = 0, s = 0, sc = 0;
	printf("The file contents are:\n");
	while (1)
	{
		if (feof(fp))
			break;
		char c = fgetc(fp);
		
		
		printf("%c", c);
		if (c == ' ')
			s++;
		if (c >= '0'&&c <= '9')
			d++;
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
			a++;
		if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '*' || c == '(' || c == ')' || c == '_' || c == '+')
			sc++;
	}
	printf("\nCharacters=%d\nDigits=%d\nSpaces=%d\nSpecial characters=%d\n", a, d, s, sc);
}