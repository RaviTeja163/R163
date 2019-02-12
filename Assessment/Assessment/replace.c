#include<stdio.h>
void replace(FILE *fp)
{
	FILE *fp1;
	fopen_s(&fp1, "res.txt", "w"); 
	printf("Replacing the tabs\n");
	
	printf("The file contents are:\n");
	while (1)
	{
		if (feof(fp))
			break;
		else
		{
			char c = fgetc(fp);
			if (c == '	')
			{
				fputc('\\', fp1);
				fputc('t', fp1);
			}
			else
				fputc(c, fp1);
			printf("%c", c);
		}
	}
	printf("\nThe changes can be viewed in res.txt\n");
}