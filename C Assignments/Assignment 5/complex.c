#include<stdio.h>
typedef enum{
	addition=1,subtraction,multiplication
}e;
struct comple
{
	int real;
	int img;
}s[2];
void addcomplex()
{
	printf("%d+i%d is the sum\n",s[0].real+s[1].real,s[0].img+s[1].img);
}
void subcomplex()
{
	printf("%d+i(%d) is the difference\n",s[0].real-s[1].real,s[0].img-s[1].img);
}
void mulcomplex()
{
	printf("%d+i%d is the product\n",s[0].real*s[1].real-s[0].img*s[1].img,s[0].real*s[1].img+s[1].real*s[0].img);
}
int main()
{
int ch,i;
e choice;
do{

	for(i=0;i<2;i++)
	{
                   printf("enter %d complex number",i+1);
		   scanf("%d %d",&s[i].real,&s[i].img);
	}		
	printf("1.addition\n2.subtraction\n3.multiplication\n4.exit\n");
	printf("enter the desired opertaion\n");
	scanf("%d",&ch);
	 choice=ch;
switch(choice)
{
	case addition:addcomplex();break;
	case subtraction:subcomplex();break;
	case multiplication:mulcomplex();break;
	case 4:printf("exiting....");
	       break;
	default:printf("invalid choice");
			break;
}
}while(choice!=4);
}
