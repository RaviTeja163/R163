#include<iostream>
using namespace std;

int result = -1;
long int result1 = -1;
float result2 = -1;
int add(int, int);
int sub(int, int);
long int mul(int, int);
float divi(int, int);

struct _stack_{
	int top;
	char *s;
	int size;
};

class Stack{
	struct _stack_ sta;
public:
	Stack()
	{
		sta.top=-1;
		sta.size=0;
	}
	void getSize(int n)
	{
		sta.size=n;
		sta.s=new char[n];
	}
	bool IsFull()
	{
		return (sta.top==(sta.size-1));
	}
	bool IsEmpty()
	{
		return (sta.top==-1);
	}
	void push(char n)
	{
		if(!IsFull())
			sta.s[++sta.top]=n;
		else
			cout<<"Stack is full"<<endl;
	}
	char pop()
	{
		char x='\0';
		if(!IsEmpty())
			x=sta.s[sta.top--];
		else
			cout<<"Stack is empty"<<endl;
		return x;
	}
	char peek()
	 {
                char x='\0';
                if(!IsEmpty())
                        x=sta.s[sta.top];
                else    
                     x='\0';
        	return x;
	}
	~Stack()
	{
		delete sta.s;
	}
	int prio(char c)
	{
		int score;
		switch(c)
		{
			case '%':score=5;break;
			case '/':
			case '*':score=4;break;
			case '+':
			case '-':score=3;break;
			case '[':
			case '{':
			case '(':score=2;break;
			default:score=-1;break;
		}
		return score;
	}
	
	void posteval(char *string)
	{
		char x;		//dummy variable to string
		int a,b;		//variables to store the 2 operands
		int i;
		for(i=0;string[i]!='\0';i++)
		{
			x=string[i];
			if(isdigit(x))
			{
				push(x);
			}
			else if((x=='+')||(x=='-')||(x=='*')||(x=='/'))
			{
				b=int(pop())-48;
				a=int(pop())-48;
				switch(x)
				{
					char z;		//temperory variable
					case '+':
						z = add(a, b);
						push(z+'0');
						break;
					case '-':
						z=sub(a, b);
						push(z+'0');
						break;
					case '*':
						z=mul(a, b);
						push(z+'0');
						break;
					case '/':
						z=divi(a, b);
						push(z+'0');
						break;
				}	
			}
		}
		cout<<"The result is "<<int(pop())-48<<endl<<"This result is correct only for single positive digit expression with +, -, *, /\n";
	}
	
	void intopost(char *string)
	{
		char x;
		char res[20];		//to store the resultant string
		int i,j=0;
		for(i=0;string[i]!='\0';i++)
		{
			x=string[i];
			if(isdigit(string[i]))
			{
				res[j++]=x;
			}
			else if((x=='(')||(x=='{')||(x=='['))
			{
				push(x);
			}
			else if(x==')')
			{
				while(peek()!='(')
				{
					res[j++]=pop();
				}
				char gar=pop();
			}
			else if(x=='}')
          {
          	while(peek()!='{')
             {
             		res[j++]=pop();
          	}
				char gar=pop();
          }
			else if(x==']')
          {
          	while(peek()!='[')
             {
             		res[j++]=pop();
             	}
				char gar=pop();
          }
			else if((x=='+')||(x=='-')||(x=='*')||(x=='/'))
			{
				if(IsEmpty())
					push(x);
				else
				{
					//cout<<prio(x)<<"  "<<prio(peek())<<endl;
					if(prio(x)>prio(peek()))
						push(x);
					else
					{
					  while(prio(x)<=prio(peek()))
						res[j++]=pop();
						push(x);
					}
				}
			}
		}
		while(!IsEmpty())
		{
			res[j++]=pop();
		}
		cout<<"Post fix expression : "<<res<<endl;
		posteval(res);
	}
	
};

int main()
{
	Stack s;
	int n;
	cout<<"Enter the size of stack required :";
	cin>>n;
	s.getSize(n);
	char string[20];
	cout<<"Enter the expression in Infix notation with only single positive digits:"<<endl;
	cin>>string;
	s.intopost(string); 

	getchar();
	return 0;
}
