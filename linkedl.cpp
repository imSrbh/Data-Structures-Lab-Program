//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
void Add();
void Traverse();

//using namespace std ;

typedef struct list
{
	int data ;
	struct list *link ;
}node ;
//node *n=(node*)malloc(sizeof(node)) ;

node* start=NULL ;
node* end=NULL ;
void Add() 
{	char ch ;
	do
	{
	node *n=(node*)malloc(sizeof(node)) ;
	printf("Enter the data: ") ;
	scanf("%d",&n->data) ;
        n->link=NULL ;
	if(start==NULL)
	{
	start = n ;
        end=n ;
	}
	else
	{
	end->link=n ;
	end=n ;
	}
	printf("Create another(y/n) :") ;
	__fpurge(stdin) ;
	scanf("%c",&ch) ;
	} while(ch!='n') ;
//	printf("%d %ld",n->data,n->link) ;
}

//node *point=(node*)malloc(sizeof(node)) ;
void Traverse()
{	
	node *point ; 
	point = start ;
	while(point!=NULL)
	{
	printf("%d->",point->data) ;
	point=point->link ;
	}
}
void Add_top()
{      
        node *top=(node*)malloc(sizeof(node)) ;
        printf("Enter the data: ") ;
        scanf("%d",&top->data) ;
	top->link=start ;
	start=top ;
}

void Add_last()
{
        node *last=(node*)malloc(sizeof(node)) ;
        printf("Enter the data: ") ;
        scanf("%d",&last->data) ;
        end->link=last ;
        end=last ;
	last->link=NULL ;
}


int main()
{	int c ;
	Add() ;
	do
	{
	printf("\n1.Traverse\n2.Add_top()\n3.Add_last()\n4.Exit\nEnter choice:") ;
	scanf("%d",&c) ;
	if(c==1)
	Traverse() ;
	else if(c==2)
	{
		Add_top() ;
		Traverse() ;
	}
	else if(c==3)
	{
		Add_last() ;
		Traverse() ;
	}
	}while(c!=4) ;
return 0 ;
}		
