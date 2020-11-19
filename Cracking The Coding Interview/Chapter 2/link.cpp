#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

void insert(int data)
{
	struct Node *newNode=new Node;
	newNode->data=data;
	newNode->next=NULL;

	if(head==NULL)
		head=newNode;
	else
	{
		struct Node *ptr = head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=newNode;
	}


}

void ndelete()
{
	if(head==NULL)
		cout<<"Data Underflow";
	else
	{
		struct Node *ptr = head;
		while(ptr->next->next!=NULL)
			ptr=ptr->next;
		ptr->next=NULL;
	}
}

void display()
{
	struct Node *temp = head;
	cout<<"\nList elements are - \n";
	while(temp != NULL)
	{
	    
		cout<<temp->data<<" -> ";
	    temp = temp->next;
	}

}

int main()
{
	insert(1);
	display();
	insert(2);
	display();
	ndelete();
	display();
	return 0;
}