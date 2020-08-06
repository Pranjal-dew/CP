//Simple C++ implementation of Linked List 

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
	//struct node *newNode;
	//newNode = malloc(sizeof(struct node));
	struct Node *newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;

	struct Node *temp = head;
	while(temp->next != NULL)
  		temp = temp->next;
	temp->next = newNode;
}

void display()
{
	struct Node *temp = head;
	//printf("\n\nList elements are - \n");
	cout<<"\n\nList elements are - \n";
	while(temp != NULL)
	{
	     //printf("%d --->",temp->data);
		cout<<temp->data<<" -> ";
	     temp = temp->next;
	}

}

int main()
{
	display();
	insert_end(1);
	display();
	insert_end(2);
	display();
	insert_end(3);
	display();
	insert_end(4);
	display();
	return 0;
}