#include <stdio.h>
//#include <conio.h>
#include <malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *tree;

void create_tree(struct node *tree)
{
	tree = NULL;
}

struct node *insertElement(struct node *tree, int val)
{
	struct node *ptr, *nodeptr, *parentptr;
	ptr = (struct node*)malloc(sizeof(struct node));

	ptr -> data = val;

	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL)
	{
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		parentptr=NULL;
		nodeptr=tree;
	while(nodeptr!=NULL)
	{
		parentptr=nodeptr;
		
		if(val < nodeptr->data )
			nodeptr=nodeptr->left;
		
		else
			nodeptr=nodeptr->right;
	}
	if(val<parentptr->data)
		parentptr->left = ptr;
	else
		parentptr->right = ptr;
	}
return tree;
}



void preorderTraversal(struct node *tree)
{if(tree != NULL)
  {
   printf("%d\t", tree->data);
   preorderTraversal(tree->left);
   preorderTraversal(tree->right);
  }
}

void postorderTraversal(struct node *tree)
{if(tree != NULL)
  {
   postorderTraversal(tree->left);	
   postorderTraversal(tree->right);
   printf("%d\t", tree->data);
 //  preorderTraversal(tree->left);
//   preorderTraversal(tree->right);
  }
}








int main()
{
    
   
int option, val,i,n;
struct node *ptr;
create_tree(tree);
char ch ;
/*do{
	printf("Enter the value: ") ;
	scanf("%d",&val) ;
	tree = insertElement(tree,val) ;
	printf("Do you want to insert more elements : ") ;
	scanf("%c" , &ch) ;
}while(ch!='n') ;*/
/*printf("Enter the elements you want to enter :" ) ;
scanf("%d",&n) ;
for(i=0;i<n;i++) ;
{
	printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;
}*/
printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;

printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;

printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;
printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;

printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;

printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ;

printf("Enter the value: ") ;
        scanf("%d",&val) ;
        tree = insertElement(tree,val) ; 



preorderTraversal(tree) ;
printf("\n") ;
postorderTraversal(tree) ;
return 0 ;
}
