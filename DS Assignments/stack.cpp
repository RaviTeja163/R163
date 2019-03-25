#include<iostream>
using namespace std;
struct _stack_{
	int top;
	int *s;
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
		sta.s=new int[n];
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
	int pop()
	{
		int x=-1;
		if(!IsEmpty())
			x=sta.s[sta.top--];
		else
			cout<<"Stack is empty"<<endl;
		return x;
	}
	int peek()
	{
    int x=-1;
    if(!IsEmpty())
      x=sta.s[sta.top];
    else
      cout<<"Stack is empty"<<endl;
    return x;
	}
  void display()
  {
    cout<<"Elements in the stack are;\n";
    int i;
    for(i=0;i<=sta.top;i++)
      cout<<sta.s[i]<<" ";
    cout<<endl;
  }
	~Stack()
	{
		delete sta.s;
	}
};

int main()
{
	Stack s;
	int n;
	cout<<"Enter the size of stack required :";
	cin>>n;
	s.getSize(n);
  int ch;
	do{
		cout<<"Enter your choice:"<<endl;
		cout<<"1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:int ele;
        cout<<"Enter the element to be pushed\n";
        cin>>ele;
        s.push(ele);break;
			case 2:cout<<"Element popped: "<<s.pop()<<endl;
        break;
			case 3:cout<<"Element at the top of stack = "<<s.peek()<<endl;
        break;
			case 4:s.display();
        break;
      case 5:cout<<"Exit"<<endl; break;
			default:cout<<"Invalid choice"<<endl;
		}
	}while(ch!=5);
	return 0;
}
