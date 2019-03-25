#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};

class Queue{
	struct node *front;
	struct node *rear;
public:
	Queue()
	{
		front=NULL;
		rear=NULL;
	}
	void Insert()
	{
		int val;
		cout<<"Enter element to be inserted in queue :";
		cin>>val;
		if(rear==NULL)
		{
			rear=new node;
			rear->data=val;
			rear->next=NULL;
			front=rear;
		}
		else
		{
			struct node *temp;
			temp=new node;
			rear->next=temp;
			temp->data=val;
			temp->next=NULL;
			rear=temp;
		}
	}
	void Delete()
	{
		struct node *temp;
		temp=front;
		if(front==NULL)
		{
			cout<<"Queue underflow"<<endl;
			return;
		}
		else if(temp->next!=NULL)
		{
			tem
		}
		{
			cout<<"Element deleted is :"<<front->data<<endl;
			front=front->next;
		}
	}
	void Display()
	{
		if(rear==NULL)
			cout<<"Queue is empty"<<endl;
		else
		{
			struct node *temp;
			temp=front;
			while(temp!=rear)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
	}
};
int main()
{
	Queue q;
	int ch;
	cout<<"1.Insert element\n2.Delete element\n3.Display elements\n4.Exit"<<endl;
	do{
		cout<<"Enter your choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:q.Insert();break;
			case 2:q.Delete();break;
			case 3:q.Display();break;
			case 4:cout<<"Exit"<<endl; break;
			default:cout<<"Invalid choice"<<endl;
		}
	}while(ch!=4);
	return 0;
}
