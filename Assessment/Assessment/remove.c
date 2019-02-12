#include <stdio.h>
void remov(FILE *fp)
{
	printf("Removing comments\n");
	//printf("The file contents are:\n");
	FILE *fp1;
	fopen_s(&fp1, "res.txt", "w");
	while (1)
	{
		if (feof(fp))
			break;
		else
		{
			char c = fgetc(fp);
			if (c == '/')
			{
				fseek(fp, 1, SEEK_CUR);
				char d = fgetc(fp);
				if (d == '/')
				{
					fseek(fp, -2, SEEK_CUR);
					int k = ftell(fp);
					fseek(fp1, k, SEEK_SET);
					fseek(fp, -2, SEEK_CUR);
					while (1)
					{
						
						char e = fgetc(fp);
						if(e!='\n')
							fputc('\0', fp1);
					}
				}
			}
			else
				fputc(c, fp1);
		}
	}
}