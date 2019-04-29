#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int val;
	struct Node *next;
}*f=NULL,*r=NULL;
void enqueue(int va)
{
	struct Node *newnode;
	newnode=(struct Node *)malloc(sizeof(struct Node));
	newnode->val=va;
	if(r==NULL)
	{
		newnode->next=f;
		r=newnode;
		f=newnode;

	}
	else
	{
		newnode->next=f;
		r->next=newnode;
		r=newnode;
	}
	printf("Valude inserted %d",va);
}
int dequeue()
{
	struct Node *newnode=f;
	int tmp;
	if(f==NULL)
		printf("Queue empty");
	else
	{
		tmp=f->val;
		f=f->next;
		r->next=f;
	}
	free(newnode);
	return tmp;

}
void display()
{
	struct Node *tmp=f;
	if(tmp==NULL)
		printf("Queue empty");
	else
	{
		while(tmp->next!=NULL)
		{

			if(tmp->next==f)
				break;
			else
				printf("%d\t",tmp->val);
			tmp=tmp->next;
		}
		printf("%d",tmp->val);
	}

}
int main()
{
	int ch,con=1,val;
	do
	{
		printf("\n---------menu---------");
		printf("\n1.Insert");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\n4.Exit\n");
		printf("Enter choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
				printf("\n Enter value for insert  : " );
				scanf("%d",&val);
				enqueue(val);
				break;
			case 2:
				val=dequeue();
				printf("\nDeleted value = %d",val);
				break;
			case 3:
				display();
				break;
			case 4:
				//exit(1);
				break ;
			default :
				printf("Invalid choice try again ");
				break;

		}
	}while(ch!=4);

}

