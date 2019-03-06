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
                        cout<<"Stack is empty"<<endl;
        	return x;
	}
	~Stack()
	{
		delete sta.s;
	}
	void balance(char *string)
	{
		char x,z;
		int i,flag=0;
		for(i=0;string[i]!='\0';i++)
		{
			x=string[i];
			switch(x)
			{
			case '(':
			case '{':
			case '[':push(x);break;
			case ')':
			case '}':
			case ']':
				if(!IsEmpty())
				{
				if((x==')' && peek()=='(') || (x=='}' && peek()=='{') || (x==']' && peek()=='['))
					z=pop();
				else
				{
					flag=1;
					break;
				}
				}
				else
					flag=1;
			default:;
			}
			if(flag==1)
				break;
		}
		if(!IsEmpty()||flag==1)
			cout<<"Not balanced"<<endl;
		else
			cout<<"Balanced"<<endl;
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
	cout<<"Enter the string"<<endl;
	cin>>string;
	s.balance(string);
	return 0;
}

