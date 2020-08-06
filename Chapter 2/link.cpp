#include<iostream>
using namespace std;

// Creating Data Type
struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;// Declaring Head pointer

void insert_end(int data)
{
	struct Node *new_Node = new Node;// Declaring new_Node varible using user defined data type and putting values

	new_Node->data=data;
	new_Node->next=NULL;

	if(head == NULL)
		head=new_Node;
	else
		{
			struct Node *ptr=head;
			while(ptr!=NULL)
				ptr=ptr->next;
		}
}

void dis()
{
	if(head==NULL)
		cout<<"List is empty.";
	else
	{	
		struct Node *ptr=head;
		while(ptr!=NULL)
			{
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
	}
	cout<<endl;
}

int main()
{
	dis();
	insert_end(1);
	dis();
	insert_end(2);
	dis();
	insert_end(3);
	dis();
	insert_end(4);
	return 0;
}