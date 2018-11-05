#include<iostream>

using namespace std ;

int front=-1,rear=-1 ;

void enqueue(int Q[])
{	
	int num ;
	cout<<"Enter the element : " ;
	cin>> num ;
 	if(rear==49)
	cout<<"Overflow!!" ;
	if((rear==-1)&&(front==-1))
	{
		front=rear=0 ;
	}
	else
	rear ++ ;

	Q[rear]=num ;
}
void dequeue(int Q[])
{
	if(front==-1)
	cout<<"Underflow !!" ;
	
	if(rear==front)
	front=rear=-1 ;
	else
	front++ ;
}
void peek(int Q[])
{
cout<<Q[front] ;
}

void traverse(int Q[])
{	int i; 

	{for(i=front;i<=rear;i++)
	{
	cout<<Q[i] ;
	if(i!=rear)
	cout<<"->" ;
	}}
}


int main()
{	int ch ;
	int Q[50] ;
	do
	{
	cout<<"\n1.Push()\n2.Pop()\n3.Peek()\n4.Traverse\n5.Exit\nEnter choice : " ;
	cin>>ch;
	switch(ch)
	{
	case 1 :enqueue(Q) ;
		break; 
	case 2 :dequeue(Q) ;
		break ;
	case 3 :peek(Q) ;
		break ;
	case 4 :traverse(Q) ;
		break ;
	case 5 : break ;
	default:cout<<"Enter a vaild option " ;
	} ;
	}while(ch!=5) ;
return 0 ;
}
