#include<stdio.h>
#include<conio.h>
#define size 10
int queue[size];
int top1=-1;
int top2=-1;
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
            case 4:
                return ;
                break;
        }
    }while(ch!=5);
}
void insert()
{
    int val;
    if(top2>size)
    {
        printf("\n queue is emplty");
    }
    else
    {
        if(top1==-1&&top2==-1)
        {
            top1=0;
            top2=0;
            printf("\n enter elememts that you want to insert=");
            scanf("%d",&val);
            //top1=top1+1;
            queue[top2]=val;
            top2=top2+1;
        }
        else
        {
        printf("\n enter elements that you want to insert=");
        scanf("%d",&val);
        queue[top2]=val;
        top2=top2+1;
        }
    }
}



void display()
{
    int i;
    if(top1==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
        for(i=top1;i<top2;i++)
        {
            printf("\t %d",queue[i]);
        }
    }
}



void delete()
{
    if(top1==-1||top1>=top2)
    {
        printf("\n queue is empty");

    }
    else if(top1==0&&top2==0)
    {
        printf("\n deleted element from queue is=%d ",queue[top1]);
        top1=-1;
        top2=-1;
    }
    else
    {
        printf("\n deleted element from queue is=%d",queue[top1]);
        top1=top1+1;
    }
}



