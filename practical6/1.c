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
void insert_specific(struct node*);
void delete_last();
void deletel();
void search(struct node*);
void disp(struct node*);

int main()
{
	int ch;
	printf("\n1.Insert a node");
	printf("\n2.Insert a node at last");
	printf("\n3.Insert at specific node");
	printf("\n4.Delete a node");
	printf("\n5.Delete a node at last");
	printf("\n6.Search for a node");
	printf("\n7.display a node");
	printf("\n8.exit");
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
			case 3:insert_specific(new_node);
				break;
			case 4:deletel();
				break;
			case 5:delete_last();
				break;
			case 6:search(new_node);
				break;
			case 7:disp(new_node);
				break;
			default: 
					break;
		}
	}while(ch!=8);
}
void insert(struct node *new_node)
{
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
		new_node->next=head;
		head=new_node;
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
		while(temp!=NULL)
		{
			previous=temp;
			temp=temp->next;
		}
		previous->next=new_node;
	}
}
void insert_specific(struct node *new_node)
{
    struct node *curr,*temp;
    int pos;
    int val;
    int count=1;
    new_node=(struct node*)malloc(sizeof(struct node));
	printf("\n enter an element=");
    scanf("%d",&val);
    new_node->data=val;
    new_node->next=NULL;
    if(head==NULL)
        head=new_node;
    else
    {
        printf("\n enter desired location=");
        scanf("%d",&pos);
        temp=head;
        curr=temp;
        while(pos!=count)
        {
            curr=temp;
            temp=temp->next;
            count++;
        }
        curr->next=new_node;
        new_node->next=temp;
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
void search(struct node *new_node)
{
	struct node *temp;
	struct node *previous;
	int flag=0,search;
	int cnt=1;
	printf("\nEnter value to search:");
	scanf("%d",&search);
	temp=head;
	while(temp!=NULL)
	{
		if(search==temp->data)
		{
			printf("\nSearch is successfully");
			flag=1;
			break;
		}
		else
		{
			cnt++;
			previous=temp;
			temp=temp->next;
			previous=previous->next;
		}
	}
}
void disp(struct node *new_node)
{
	struct node *temp;
	temp=head;
	while(temp)
	{
		printf("\nElement is %d",temp->data);
		temp=temp->next;
	}
}

