#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int);
void pop();
void disp();

int main()
{
	int ch,value;
	do
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n0.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("\nEnter value:");
					scanf("%d",&value);
					push(value);
					break;
			case 2:	pop();
					break;
			case 3:	disp();
					break;
			case 0:	exit(1);
					break;
			default:
				break;
		}
	}while(ch!=0);
	
}
void push(int x)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=x;
	if(top==NULL)
	{
		new_node->next=NULL;
	}
	else
	{
		new_node->next=top;
		//top=new_node;
	}
	top=new_node;
	printf("\nSuccessfully inserted");
}
void pop()
{
	if(top==NULL)
		printf("\nStacklist is not created");
	else
	{
		struct node *temp;
		temp=top;
		printf("\nDeleted emelemnt is %d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void disp()
{
	if(top==NULL)
		printf("\nStack is empty");
	else
	{
		struct node *temp;
		temp=top;
		while(temp!=NULL)
		{
			printf("\nData is %d",temp->data);
			temp=temp->next;
		}
		//printf("\nData is %d",temp->data);
	}
}

