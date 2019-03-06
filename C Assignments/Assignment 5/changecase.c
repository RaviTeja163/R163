#include<stdio.h>
int main()
{
	char s[100]={" "};
	int i=0;
	printf("enter a line\n");
	scanf("%s",s);
	FILE*fp=fopen("out.txt","w");
	while(s[i]!='\0')
	{
		if(s[i]>='A'&& s[i]<='Z')
		{s[i]+=32;
		
		}
		else 
		{
			s[i]-=32;
			
		}
		fputc(s[i],fp);
		i++;
	}
	printf("%d is the current file position\n",ftell(fp));
	fseek(fp,-2,SEEK_CUR);
	printf("%d is the current file position after seek\n",ftell(fp));
	printf("%s\n",s);
	fclose(fp);
	return 0;

}
