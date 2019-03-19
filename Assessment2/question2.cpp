#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

class LinkedLists{
    struct node* start;
    int count;
public:
    LinkedLists()
	{
		start=NULL;
        count=0;
	}
    void insert_at(int pos,int element)
    {
        if(pos<1||pos>(count+1))
            cout<<"Invalid position\n";
        else
        {
            if(count==0)
            {
                struct node* temp;
                temp=new node;
                temp->data=element;
                temp->next=start;
                start=temp;
                count++;
            }
            else if(pos==(count+1))
            {
                struct node *curr,*temp;
                temp=new node;
        		temp->data=element;
        		temp->next=NULL;
                curr=start;
    			while(curr->next!=NULL)
    				curr=curr->next;
    			curr->next=temp;
                count++;
            }
            else if(pos<(count+1))
            {
                struct node *curr,*temp;
                curr=start;
                int c=count;
                while(pos!=2)
                {
                    curr=curr->next;
                    pos--;
                }
                temp=curr->next;
                temp->data=element;
                curr->next=temp;
            }
        }
    }
    void print_forward()
    {
        struct node* curr;
        cout<<"Traversing in forward direction\n";
        if(start!=NULL)
        {
            curr=start;
            while(curr!=NULL)
            {
                cout<<curr->data<<" ";
                curr=curr->next;
            }
            cout<<endl;
        }
        else
            cout<<"List is empty\n";
    }
    void print(struct node* curr)
    {
        if(curr!=NULL)
        {
            print(curr->next);
            cout<<curr->data<<" ";
        }
    }
    void print_reverse()
    {
        cout<<"Traversing in backward direction\n";
        if(start!=NULL)
            print(start);
        else
            cout<<"List is empty\n";
        cout<<endl;
    }
    void reverse()
    {
        struct node*rev;
        rev=NULL;
        if(start!=NULL)                 //no elements
        {
            if(start->next!=NULL)       //only one element
            {
                while(start!=NULL)
                {
                    struct node* temp;
                    temp=start;
                    start=temp->next;
                    temp->next=rev;
                    rev=temp;
                }
                start=rev;
            }
            else
                cout<<"Only one element\n";
        }
        else
            cout<<"List is empty\n";
    }
    ~LinkedLists()
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
    LinkedLists l;
    int n,ele,choice;
    do{
        cout<<"\nEnter choice\n1.Insert\n2.Print forward\n3.Print backward\n4.Reverse list\n5.Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter the position and element\n";
                cin>>n>>ele;
                l.insert_at(n,ele);
                break;
            case 2:l.print_forward();
                break;
            case 3:l.print_reverse();
                break;
            case 4:l.reverse();
                break;
            case 5:cout<<"Exit\n";
                break;
            default:cout<<"Invalid option\n";
                break;
        }
    }while(choice!=5);
    return 0;
}
