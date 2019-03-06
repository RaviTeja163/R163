#include<iostream>
#include<cstring>
using namespace std;
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
		{
			x='\0';    
                     cout<<"Stack is empty"<<endl;
		}
        	return x;
	}
	~Stack()
	{
		delete sta.s;
	}
	int prio(char c)
	{
		int i;
		switch(c)
		{
			case '%':i=5;break;
			case '/':
			case '*':i=4;break;
			case '+':
			case '-':i=3;break;
			case '}':
			case ']':
			case ')':i=2;break;
			default:i=-1;break;
		}
		return i;
	}
	void intopre(char *string)
	{
		char x;
		char res[20],res1[20];
		int i,k,j=0;
		int len=strlen(string);
		cout<<"Length is "<<len<<endl;
		for(i=len-1;i>=0;i--)
		{
			x=string[i];
			if(isalpha(string[i]))
			{
				res[j++]=x;
			}
			else if((x==')')||(x=='}')||(x==']'))
			{
				push(x);
			}
			else if(x=='(')
			{
				while(peek()!=')')
				{
					res[j++]=pop();
				}
				char gar=pop();
			}
			else if(x=='{')
                        {
                                while(peek()!='}')
                                {
                                        res[j++]=pop();
                                }
				char gar=pop();
                        }
			else if(x=='[')
                        {
                                while(peek()!=']')
                                {
                                        res[j++]=pop();
                                }
				char gar=pop();
                        }
			else if((x=='+')||(x=='-')||(x=='*')||(x=='/')||(x=='%'))
			{
				if(IsEmpty())
					push(x);
				else
				{
					cout<<prio(x)<<"  "<<prio(peek())<<endl;
					if(prio(x)>=prio(peek()))
						push(x);
					else
					{
					  while(prio(x)<prio(peek()))
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
		cout<<res<<endl;
		int len1=strlen(res);
		for(j=len1-1,k=0;k<len1;k++,j--)
		{
			res1[k]=res[j];
		}
		cout<<res1<<endl;
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
	cout<<"Enter the expression in Infix notation:"<<endl;
	cin>>string;
	s.intopre(string);
	return 0;
}

