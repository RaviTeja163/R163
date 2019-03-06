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
	void posteval(char *string)
	{
		char x;
		int a,b;
		int i;
		for(i=0;string[i]!='\0';i++)
		{
			x=string[i];
			if(isdigit(x))
			{
				push(x);
			}
			else if((x=='+')||(x=='-')||(x=='*')||(x=='/')||(x=='%'))
			{
				a=int(pop())-48;cout<<a<<endl;
				b=int(pop())-48;
				switch(x)
				{
					char z;
					case '+':z=b+a;push(z+'0');break;
					case '-':z=b-a;push(z+'0');break;
					case '*':z=b*a;push(z+'0');break;
					case '/':z=b/a;push(z+'0');break;
				}	
			}
		}
	cout<<"The result is "<<int(pop())-48<<endl;
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
	cout<<"Enter the postfix expression:"<<endl;
	cin>>string;
	s.posteval(string);
	return 0;
}
