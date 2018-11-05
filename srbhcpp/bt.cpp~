#include<cstdio>
#include<malloc.h>
struct node
{
int data;
struct node *left, *right;
};
struct node* insert(struct node *,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
int main()
{
int ele,choice;
struct node *root=NULL;

do{	printf("\n ******MAIN MENU OF BINARY TREE OPERATIONS******* \n");
 	printf("\n1.Insert\n2.Inorder Traversal\n3.Preorder Traversal\n4.Postorder Traversal\n5.Exit\nChoice : ");
 	scanf("%d",&choice);
  	switch(choice)
	{
case 1:
	printf("Enter the element to insert:");
	scanf("%d",&ele);
        root=insert(root,ele);
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
        printf("Enter the right choice :");
  }
 }while(choice!=5);
 return(0);
}
struct node*Node(int ele)
{
 struct node *newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data= ele;
  newNode->left=NULL;
  newNode->right=NULL;
  return(newNode);
}
struct node*insert(struct node*root,int ele)
{
  struct node*temp=root;
if(root==NULL)
{
root=Node(ele);
return(root);
}
while(1)
  {
    if(temp->data >ele){
      if(temp->left==NULL){
       temp->left=Node(ele);
       break;
      }
else
            temp = temp->left;
    }
    else
    {
      if(temp->right==NULL){
            temp->right=Node(ele);
            break;
      }
      else{
           temp=temp->right;
      }}} 
  return(root);
}
void inorder(struct node *root)
{
  if(root->left!=NULL)
     inorder(root->left);
  printf(" %d",root->data);
  if(root->right!=NULL)
     inorder(root->right);
}

void preorder(struct node *root)
{
  printf(" %d",root->data);
  if(root->left!=NULL)
     preorder(root->left);
  if(root->right!=NULL)
     preorder(root->right);
}
void postorder(struct node *root)
{
  if(root->left!=NULL)
     postorder(root->left);
  if(root->right!=NULL)
     postorder(root->right);
  printf(" %d",root->data);
}





