#include<iostream>
using namespace std;
class Queue{
	int queue[100];
	int n;
	int front;
	int rear;
public:
	Queue()
	{
		n=100;
		front=-1;
		rear=-1;
	}
	void Insert()
	{
		int val;
		if(rear==n-1)
			cout<<"Queue overflow"<<endl;
		else
		{
			if(front==-1)
				front =0;
			cout<<"Enter element to be inserted in queue :";
			cin>>val;
			rear++;
			queue[rear]=val;
		}
	}
	void Delete()
	{
		if((front==-1)||(front>rear))
		{
			cout<<"Queue underflow"<<endl;
			return;
		}
		else
		{
			cout<<"Element deleted is :"<<queue[front]<<endl;
			front++;
		}
	}
	void Display()
	{
		if(front==-1)
			cout<<"Queue is empty"<<endl;
		else
		{
			cout<<"The elements in the queue are"<<endl;
			int i;
			for(i=front;i<=rear;i++)
				cout<<queue[i]<<" ";
			cout<<endl;
		}
	}
};
int main()
{
	Queue q;
	int ch;
	do{
		cout<<"Enter your choice:"<<endl;
		cout<<"1.Insert element\n2.Delete element\n3.Display elements\n4.Exit"<<endl;
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
