#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define size 10
int ch;
int q[size];
int rear=-1;
int front=-1;
void insert_queue();
void delete_queue();
void disp_queue();
void insert_queue()
{
	if(rear>=size)
		printf("\nQueue is overflow");
	else
	{
		if(front==-1)
			front=0;
		printf("\nEnter element:");
	scanf("%d",&ch);
		rear=rear+1;
		q[rear]=ch;
		printf("\nInserted successfully");
	}
	
}
void delete_queue()
{
	if(front==-1 || front>=rear)
		printf("\nQueue underflow");
	else
	{
		ch=q[front];
		printf("\nDelete Element is %d",ch);
		front=front+1;
	}
}
void disp_queue()
{
	int i;
	if(front==-1)
		return;
	for(i=front;i<=rear;i++)
		printf("%d",q[i]);
}
void main()
{
	int ch;
	do
	{
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert_queue();
					break;
			case 2:delete_queue();
					break;
			case 3:disp_queue();
					break;
			case 4:exit(1);
					break;
			default:
					break;
		}
	}while(ch!=5);
}
