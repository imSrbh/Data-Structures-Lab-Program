#include<iostream>
#include<cstdlib>

using namespace std ;

typedef struct list {
int data ;
struct list *prev,*next ;
}node ;

node *start = NULL ;
node *end = NULL ;
int count=0 ;

void insert_at(int pos)
{
	node *n=(node*)malloc(sizeof(node)) ;
	int c=1 ;
	cout<<"Enter the data: " ;
	cin>>n->data ;	
	node *access ;
	access=start ;
	n->prev = NULL ;
        n->next = NULL ;
	while(c<pos-1)
	{
	c++ ;
	access=access->next ;
	}
	n->next = access->next ;
	access->next=n ;
	n->next->prev=n  ;
	n->prev=access ;
//i	n->next = access->next ;
	if(c==1)
	{	
	start = start->prev ; ;
	} 
	else if(c==count+1)
	{
	end=end->next ;
	}
	count++ ;
		
}	

void delete_at(int pos)
{
	int c =1 ;
	node *access ;
	access = start ;
	while(c<pos)
	{	access =access->next ;
		c++ ;
	} 
	access->prev->next=access->next ;
	access->next->prev=access->prev ;
	free(access) ; 
	count -- ;
}
void create()
{	char ch ;
	do
	{
	count++ ;
	node *n1 = (node*)malloc(sizeof(node)) ;
	cout<<"Enter the data :" ;
	cin>>n1->data ;
	n1->prev = NULL ;
	n1->next = NULL ;
	if(start== NULL)
	{
		start = n1 ;
		end = n1 ;
	}	
	else
	{
	end->next=n1 ;
	n1->prev=end ;
	end = n1 ;
	}
	cout<<"Wanna enter more(y/n) : " ;
	cin>>ch ;
	}while(ch!='n') ;
}

void display()
{	node *access ;
	access=start ;
	cout<<"Total number of elements : "<<count <<endl ;
	while(access!=NULL)
	{
	cout<<access->data<<"->" ;
	access=access->next ;
	}
	cout<<endl ;
}
int main()
{	int pos ;
	create() ;
	display() ;
	cout<<endl ;
	cout<<"Enter the position(not index) :" ;
	cin>>pos ;
	insert_at(pos) ;
	display() ;
	cout<<"Enter the postion to delete : " ;
	cin>>pos ;
	delete_at(pos) ;
	display() ;
	return 0 ;
	

}
