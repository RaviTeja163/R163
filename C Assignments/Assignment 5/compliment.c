#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE* fp=fopen(argv[1],"w+");
         char name[100]={" "},ch;
	 int i=0;
	printf("enter the string\n");
       scanf("%s",name);
        while(name[i]!='\0')
	{
		fputc(~name[i],fp);
		i++;
	}
         fseek(fp,0,SEEK_SET);
	 i=0;
	 while((ch=fgetc(fp))!=EOF)
			 {
			 printf("%c",ch);
			 name[i++]=~ch;
			 } 
	 name[i]='\0';
	 printf("\n%s",name);
         
	return 0;
}
