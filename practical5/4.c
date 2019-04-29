#include<stdio.h>
#include<conio.h>
#define size 4
int queue[size];
int front=-1;
int rear=-1;
void insert();
void delete();
void display();
int main()
{
    int ch;
    printf("\n 1) insert");
    printf("\n 2) delete");
    printf("\n 3) display");
    do
    {
        printf("\n enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                break;

        }
    }while(ch!=4);
}

void insert()
{
    int data;
    printf("\n enter an element=");
    scanf("%d",&data);
    if(front==0&&rear>size)
   {
        printf("\n queue is full");
        return;
    }
     if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=data;
    }
    else if(rear==size&&front!=0)
    {

        rear=0;
        queue[rear]=data;
    }
    else
    {
        rear=rear+1;
        queue[rear]=data;
    }

}


void display()
{

    int i;
    if(front>rear)
    {
        for( i=front;i<size-1;i++)
        {
            printf("\t %d",queue[i]);
        }
        for( i=0;i<=rear;i++)
        {
            printf("\t %d",queue[i]);
        }
    }
     else
    {
        for( i=front;i<=rear;i++)
        {
           printf("\t %d",queue[i]);
        }
    }
}

void delete()
{
    if(front==-1||front>rear)
    {
        printf("\n queue is empty");
    }
    else
    {

            printf("\n deleted element=%d",queue[front]);
            front=front+1;

    }
}

