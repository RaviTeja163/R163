#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
class List{
	struct node *top;
public:
	List()
	{
		top=NULL;
	}
	bool IsEmpty()
	{
		return (top==NULL);
	}
	void push(int n)
	{
		struct node *temp;
		temp=new node;
		temp->data=n;
		temp->next=top;
		top=temp;
	}
	int pop()
	{
		int x=-1;
		if(top!=NULL)
		{
			struct node *temp;
			temp=top;
			x=temp->data;
			top=top->next;
			delete temp;
		}
		else
			cout<<"Stack Underflow\n";
		return x;
	}
	int peek()
	{
		int x=-1;
		if(top!=NULL)
		{
			x=top->data;
		}
		else
			cout<<"Stack Underflow\n";
		return x;
	}
	void display()
	{
		if(top!=NULL)
		{
			struct node *temp;
			temp=top;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		else
			cout<<"Stack Underflow\n";
	}
};
int main()
{
	List s;
	int x,val;
	do{
		cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Peek"<<endl<<"4.Display"<<endl<<"5.Exit"<<endl;
		cin>>x;
		switch(x)
		{	
		case 1: cout<<"Enter a value"<<endl;
			cin>>val;
			s.push(val);
			break;
		case 2: cout<<s.pop()<<endl;
			break;
		case 3: cout<<s.peek()<<endl;
			break;
		case 4: s.display();
			break;
		default: cout<<"Invalid choice"<<endl;
		}	
	}while(x!=5);
	return 0;
}


