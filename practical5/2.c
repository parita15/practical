#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void equeue(int);
void dqueue();
void disp();
int main()
{
	int ch,value;
	printf("\n1.Equeue");
	printf("\n2.Dqueue");
	printf("\n3.Display");
	printf("\n4.Exit");
	do
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter value:");
					scanf("%d",&value);
					equeue(value);
					break;
			case 2:dqueue();
					break;
			case 3:disp();
					break;
			default:
					break;
		}
	}while(ch!=4);
}
void equeue(int x)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=x;
	new_node->next=NULL;
	if(rear==NULL)
		front=rear=new_node;
	else
	{
		rear->next=new_node;
		rear=new_node;	
	}
	printf("\nSuccessfull inserted");
}
void dqueue()
{
	if(front==NULL)
		printf("\nQueue is empty");
	else
	{
		struct node *temp;
		temp=front;
		printf("\nDeleted element is %d",temp->data);
		front=temp->next;
		free(temp);
	}
}
void disp()
{
	if(front==NULL)
		printf("\nQueue is empty");
	else
	{
		struct node *temp;
		temp=front;
		while(temp!=NULL)
		{
			printf("\nElements is %d",temp->data);
			temp=temp->next;
		}
	}	
}
