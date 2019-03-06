#include<iostream>
using namespace std;
class Queue{
	int cqueue[5];
	int n;
	int front;
	int rear;
public:
	Queue()
	{
		n=5;
		front=-1;
		rear=-1;
	}
	void Insert()
	{
		int val;
		if((front==0 && rear==n-1)||(front==rear+1))
			cout<<"Queue overflow"<<endl;
		else
		{
			if(front==-1)
			{
				front =0;
				rear=0;
			}
			else if(rear==n-1)
				rear=0;
			else
				rear++;
			cout<<"Enter element to be inserted in queue :";
			cin>>val;
			cqueue[rear]=val;
		}
	}
	void Delete()
	{
		if(front==-1)
		{
			cout<<"Queue underflow"<<endl;
		}
		else
		{
			cout<<"Element deleted is :"<<cqueue[front]<<endl;
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else if(front==n-1)
				front=0;
			else
				front++;
		}
	}
	void Display()
	{
		int f=front;
		int r=rear;
		if(front==-1)
			cout<<"Queue is empty"<<endl;
		else
		{
			cout<<"The elements in the queue are"<<endl;
			if(f<=r)
			{
				while(f<=r)
				{
					cout<<cqueue[f]<<" ";
					f++;
				}
			}
			else
			{
				while(f<=n-1)
				{
					cout<<cqueue[f]<<" ";
					f++;
				}
				f=0;
				while(f<=r)
				{
					cout<<cqueue[f]<<" ";
					f++;
				}
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

