//Program for insertion and traversal in a BST
#include<cstdio>

#include<malloc.h>
struct node
{
 int data;
 struct node *lchild, *rchild;
};
struct node* insert(struct node *,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
int main()
{
 int element,choice;
 struct node *root=NULL;

 do
 {
  printf("\n1.Insert\n2.Inorder Traversal\n3.Preorder Traversal\n4.Postorder Traversal\n5.Exit\nChoice : ");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:
                 printf("Enter the element to insert : ");
                 scanf("%d",&element);
                 root = insert(root,element);
                 break;
     case 2:
                 inorder(root);
                 break;
     case 3:
                 preorder(root);
                 break;
     case 4:
                 postorder(root);
                 break;
     default:
                 printf("Enter the right choice : ");
  }
 }while(choice != 5);
 return(0);
}
struct node* getNode(int element)
{
  struct node *newNode = (struct node*)malloc(sizeof(struct node));
  newNode->data = element;
  newNode->lchild = NULL;
  newNode->rchild = NULL;
  return(newNode);
}
struct node* insert(struct node *root, int element)
{
  struct node *temp=root;
  if(root == NULL) // If it is the first element in the tree
  {
    root=getNode(element);
    return(root);
  }//IF
  while(1) //Loop infinitely till u find the parent of new node
  {
    if(temp->data > element)
    {
      if(temp->lchild == NULL) //If there is no left child
      {
            temp->lchild = getNode(element);
            break;
      }
      else
            temp = temp->lchild;
    }//if
    else
    {
      if(temp->rchild == NULL) //If there is no right child
      {
            temp->rchild = getNode(element);
            break;
      }
      else
      {
            temp = temp->rchild;
      }
    }//else
  } //while
  return(root);
}
void inorder(struct node *root)
{
  if(root->lchild != NULL)
     inorder(root->lchild);
  printf(" %d",root->data);
  if(root->rchild != NULL)
     inorder(root->rchild);
}
void preorder(struct node *root)
{
  printf(" %d",root->data);
  if(root->lchild != NULL)
     preorder(root->lchild);
  if(root->rchild != NULL)
     preorder(root->rchild);
}
void postorder(struct node *root)
{
  if(root->lchild != NULL)
     postorder(root->lchild);
  if(root->rchild != NULL)
     postorder(root->rchild);
  printf(" %d",root->data);
}




