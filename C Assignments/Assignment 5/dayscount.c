#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yr;
}s[2];
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int countLeapYears(struct date d) 
{ 
	    int years = d.yr; 
	      
	        if (d.mm <= 2) 
			        years--;  
		    return years / 4 - years / 100 + years / 400; 
}
int countdays(struct date d1,struct date d2)
{
 long int n1 = d1.yr*365 + d1.dd;
int i; 
   
    for (i=0; i<d1.mm - 1; i++) 
	           n1 += monthDays[i];  
        
       n1 += countLeapYears(d1); 
        
          long int n2 = d2.yr*365 + d2.dd; 
	     for (i=0; i<d2.mm - 1; i++) 
		            n2 += monthDays[i]; 
	        n2 += countLeapYears(s[1]); 
	         
	    return (n2 - n1);	
}

int main()
{ int i=0;
	for(i=0;i<2;i++){
	printf("enter the %d date in mm dd yyyy format\n",i+1);
	scanf("%d %d %d",&s[i].dd,&s[i].mm,&s[i].yr);
	}
	int res=countdays(s[0],s[1]);
	printf("Difference is %d days\n",res);
	return 0;
	
}
