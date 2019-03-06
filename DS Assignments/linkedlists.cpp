#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
class List{
	struct node *start;
public:
	List()
	{
		start=NULL;
	}
	void insert_first(int n)
	{
		struct node *temp;
		temp=new node;
		temp->data=n;
		temp->next=start;
		start=temp;
	}
	void insert_last(int n)
	{
		struct node *temp,*curr;
		temp=new node;
		temp->data=n;
		temp->next=NULL;
		if(start==NULL)
			start=temp;
		else
		{
			curr=start;
			while(curr->next!=NULL)
				curr=curr->next;
			curr->next=temp;
		}
	}
	void inser_after(int n,int search)
	{
		if(start!=NULL)
		{
			struct node *curr;
			curr=start;
			while((curr!=NULL)&&(curr->data!=search))
				curr=curr->next;
			if(curr!=NULL)
			{
				struct node *temp;
				temp=new node;
				temp->data=n;
				temp->next=curr->next;
				curr->next=temp;
			}
			else
				cout<<"Element is not found"<<endl;
		}
		else
			cout<<"List is empty"<<endl;
	}
	void inser_before(int n,int search)
	{
		if(start!=NULL)
		{
			if(start->data==search)
			{
				struct node *temp;
				temp=new node;
				temp->data=n;
				temp->next=start;
				start=temp;
			}
			else
			{
				struct node *curr;
				curr=start;
				while((curr->next!=NULL)&&(curr->next->data!=search))
					curr=curr->next;
				if(curr->next!=NULL)
				{
					struct node *temp;
					temp=new node;
					temp->data=n;
					temp->next=curr->next;
					curr->next=temp;
				}
				else
					cout<<"Element is not found"<<endl;
			}
		}
		else
			cout<<"List is empty"<<endl;
	}
	int delete_first()
	{
		int x=-1;
		if(start!=NULL)
		{
			struct node *temp;
			temp=start;
			start=start->next;
			x=temp->data;
			delete temp;
		}
		else
			cout<<"List is empty"<<endl;
		return x;
	}
	int delete_last()
	{
		int x=-1;
		if(start!=NULL)
		{
			if(start->next==NULL)
			{
				x=start->data;
				delete start;
				start=NULL;
			}
			else
			{
				struct node *curr;
				curr=start;
				while(curr->next->next!=NULL)
					curr=curr->next;
				x=curr->next->data;
				delete curr->next;
				curr->next=NULL;
			}
		}
		else
			cout<<"List is empty"<<endl;
		return x;
	}
	void delete_spec(int n)
	{
		if(start!=NULL)
		{
			if(start->data==n)
			{
				struct node *temp;
				temp=start;
				start=temp->next;
				delete temp;
			}
			else
			{
				struct node *curr;
				curr=start;
				while((curr->next!=NULL)&&(curr->next->data!=n))
					curr=curr->next;
				if(curr->next!=NULL)
				{
					struct node *temp;
					temp=curr->next;
					curr->next=temp->next;
					delete temp;
				}
				else
					cout<<"Element is not found"<<endl;
			}
		}
		else
			cout<<"List is empty"<<endl;
	}
	void traverse_forward()
	{
		cout<<"The elements in forward direction are"<<endl;
		if(start!=NULL)
		{
			struct node *curr;
			curr=start;
			while(curr!=NULL)
			{
			cout<<curr->data<<endl;
			curr=curr->next;
			}
		}
		else
			cout<<"List is empty"<<endl;
	}
	void print(struct node *curr)
	{
		if(curr!=NULL)
		{
			print(curr->next);
			cout<<curr->data<<endl;
		}
	}
	void traverse_backward()
	{
		cout<<"The elements in backward direction are"<<endl;
		if(start!=NULL)
			print(start);
		else
			cout<<"List is empty"<<endl;
	}
	void reverse()
	{
		struct node *rev;
		rev=NULL;
		if(start!=NULL)
		{
			if(start->next!=NULL)
			{
				while(start!=NULL)
				{
					struct node *temp;
					temp=start;
					start=temp->next;
					temp->next=rev;
					rev=temp;
				}
				start=rev;
			}
			else
				cout<<"Only one element"<<endl;
		}
		else
			cout<<"List is empty"<<endl;
	}
	~List()
	{
		while(start!=NULL)
		{
			struct node *temp;
			temp=start;
			start=temp->next;
			delete temp;
		}
	}
};
int main()
{
	List l;
	int n,i,ele;
	cout<<"Enter the number of elements required"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cin>>ele;
			l.insert_first(ele);
		}
		else if(i==(n-1))
		{
			cin>>ele;
			l.insert_last(ele);
		}
		else
		{
			int p=ele;
			cin>>ele;
			l.inser_after(ele,p);
		}
	}
	l.reverse();
	l.traverse_forward();
	l.traverse_backward();
	return 0;
}
