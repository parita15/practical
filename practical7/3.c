#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
struct node *new_node;
void insert(struct node*);
void insert_last(struct node*);
void delete_last();
void deletel();
void disp(struct node*);

int main()
{
	int ch;
	printf("\n1.Insert a node");
	printf("\n2.Insert a node at last");
	printf("\n3.Delete a node");
	printf("\n4.Delete a node at last");
	printf("\n5.display a node");
	printf("\n6.exit");
	do
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert(new_node);
				break;
			case 2:insert_last(new_node);
				break;
			case 3:deletel();
				break;
			case 4:delete_last();
				break;
			case 5:disp(new_node);
				break;
			default:
					break;
		}
	}while(ch!=6);
}
void insert(struct node *new_node)
{
	int val;
	struct node *tmp=head;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter value:");
	scanf("%d",&val);
	new_node->data=val;
	if(head==NULL)
	{
		head=new_node;
		new_node->next=head;
	}
	else
	{
		do
		{
			tmp=tmp->next;
		}while(tmp->next!=head);
		new_node->next=head;
		head=new_node;
		tmp->next=head;
	}
}
void insert_last(struct node *new_node)
{
	struct node *temp;
	struct node *previous;
	int val;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter value:");
	scanf("%d",&val);
	new_node->data=val;
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		temp=head;
		do
		{
			previous=temp;
			temp=temp->next;
		}while(temp!=head);
		previous->next=new_node;
		new_node->next=head;
	//	temp->next=new_node;
	}
}
void delete_last()
{
	struct node *temp;
	struct node *previous;
	if(head==NULL)
	{
		printf("\nUnderflow");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			previous=temp;
			temp=temp->next;
		}
		printf("\nDeleted element is %d",temp->data);
		previous->next=NULL;
		free(temp);
	}
}
void deletel()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\nDeleted elementd is %d",temp->data);
		head=temp->next;
		free(temp);
	}
}
void disp(struct node *new_node)
{
	struct node *temp;
	temp=head;
	do
	{
		printf("\nElement is %d",temp->data);
		if(temp->next==head)
			break;
		else
			temp=temp->next;
	//	printf("\nElement is %d",temp->data);
	}while(temp);
	//printf("\nElement is %d",temp->data);
}
