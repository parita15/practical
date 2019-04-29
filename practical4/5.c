#include<stdio.h>
#include<conio.h>
#define size 6
int stack1[20];
int stack2[20];
int top1=-1;
int top2=-1;
void push(int);
void push_1(int);
int pop();
int pop_1();
int main()
{
	int int_st[20];
	int temps[10],i,temp;
	printf("\nEnter the elements:");
	for(i=0;i<size;i++)
		scanf("%d",&i);
	while(int_st!='\0')
	{
		temp=pop();
		while(temps[top1]!='\0' && temps[top1]>temp)
		{
			push_1(temp);
		}
	}
	printf("\nThe sorted stack is:");
	for(i=0;i<size;i++)
		printf("%d\t",temps[i]);
}
void push(int x)
{
	if(stack1[top1]>=size)
		printf("\nStack is overflow");
	else
		stack1[++top1]=x;
}
int pop()
{
	if(stack1<=size)
		printf("\nStack is underflow");
	else
	{
		printf("\npop element is %d",stack1[top1]);
		stack1[top1--];
	}
}
void push_1(int x)
{
	if(stack2[top2]>=size)
		printf("\nStack is overflow");
	else
		stack1[++top2]=x;
}
int pop_1()
{
	if(stack2<=size)
		printf("\nStack is underflow");
	else
	{
		printf("\nPop element is %d",stack2[top2]);
		stack2[top2--];
	}
}
