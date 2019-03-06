#include<iostream>
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
                     x='\0';
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
			case '[':
			case '{':
			case '(':i=2;break;
			default:i=-1;break;
		}
		return i;
	}
	void intopost(char *string)
	{
		char x;
		char res[20];
		int i,j=0;
		for(i=0;string[i]!='\0';i++)
		{
			x=string[i];
			if(isalpha(string[i]))
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
			else if((x=='+')||(x=='-')||(x=='*')||(x=='/')||(x=='%'))
			{
				if(IsEmpty())
					push(x);
				else
				{
					cout<<prio(x)<<"  "<<prio(peek())<<endl;
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
		cout<<res<<endl;
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
	s.intopost(string);
	return 0;
}
