#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct link
{
	struct node *data;
	struct node *next;
}*rear=NULL,*front=NULL;
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
int enqueue(struct node *data)
{
	struct link *new;
	new=(struct link*)malloc(sizeof(struct link));
	new->data=data;
	new->next=NULL;
	if(rear==NULL)
		rear=front=new;
	else
	{
		rear->next=new;
		rear=new;
	}
}
void dequeue()
{
	if(front==NULL)
		printf("\nUnderflow");
	else
	{
		struct link *node=front;
		printf("%d\t",node->data->data);
		front=front->next;
		free(node);
	}
}
void levelorder(struct node *temp)
{
    if(temp->left!=NULL)
    	enqueue(temp->left);
    if(temp->right!=NULL)
    	enqueue(temp->right);
    dequeue();
    if(temp!=NULL && front!=NULL)
    	levelorder(front->data);
}
int main()
{
  struct node *root;
    root = newNode(10);
  root->left = newNode(20);
  root->right = newNode(30);
  root->left->left = newNode(40);
  root->left->right = newNode(50);
  root->right->left = newNode(60);
  root->right->right = newNode(70);

  	printf("\nLevelorder traversal");
	enqueue(root);
  levelorder(root);
}
