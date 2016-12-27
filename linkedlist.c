#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node *next;
};
struct node *head;//head pointer holds the address of the first node of the linked list and it also defines the operations of the list
char createlinkedlist()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));//creation of a new node
	printf("\n enter the data");
	scanf("%c",&newnode->data);
	newnode->next=NULL;
	if (head==NULL)
	{
		head=newnode;
		return 1;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;

		}
		temp->next=newnode;
	}
}
void display()
{
	struct node *temp;
	//temp=head;
	if(head!=NULL)
	{
		for(temp=head;temp!=NULL;temp=temp->next)
		{
			printf("%c",temp->data);
		}
	}
	else
	{
		printf("the list is empty");
	}
}
int main()
{
	int ch;
	//head=NULL;//LINKEDLIST IS EMPTY
	do{
	//printf("\n\n\t 1.create linkedlist");
	//printf("\n\n\t 2.display linkedlist");
	//printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		createlinkedlist();
		break;
		case 2:
		display();
		break;
		case 3:
		exit(1);
		break;
		default:
		printf("\n\n\t wrong try again");
	}
	}
	while(ch!=3);
}