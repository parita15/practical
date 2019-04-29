#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void preorder(struct node *temp)
{
    if(temp != NULL)
    {
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(struct node *temp)
{
    if(temp != NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}
void postorder(struct node *temp)
{
    if(temp != NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }
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
  printf("\nPreorder traversal...");
  preorder(root);
  printf("\nInorder traversal...");
  inorder(root);
  printf("\nPostorder traversal...");
  postorder(root);
}
