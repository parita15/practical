#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
void push(int);
int reverseInsert(int);
int reverse();
int pop();

void main()
{
    int n,i,data;
    printf("Enter Number of Element Insert in Stack : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("Enter Data : ");
	scanf("%d",&data);
	push(data);
    }
    reverse();
    printf("\n\n");
    while(!isEmpty())
    {
	printf("\t %d\n",stack[top]);
	pop();
    }
    getch();

}
int isEmpty()
{
    if(top == -1)
	return 1;
    else
	return 0;
}

void push(int item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}

int pop()
{
    int item;
	if(top <0)
	{
		printf("stack under flow:");
    }
	else
	{
		item = stack[top];
		top = top-1;

	}
    return(item);
}
int reverseInsert(int x)
{   int temp;
    if (isEmpty())
    {
	push(x);
    }

    temp = pop();
    reverseInsert(x);
    push(temp);
}

int reverse()
{
    if (isEmpty())
    {
	int x = pop();
	reverse();
	reverseInsert(x);
    }
}

