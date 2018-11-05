#include<iostream>

using namespace std ;

int topa=-1,topb=100 ;
int num ;
void push_A(int arr[]) 
{
	if(topa==topb-1)
	cout<<"Overflow" ;
	else
	{
	cin>>num ;
	topa++ ;
	arr[topa]=num ;
	}
}

void push_B(int arr[])
{
       if(topa==topb-1)
       cout<<"Overflow" ;
        else
        {
        cin>>num ;
        topb-- ;
        arr[topb]=num ;
       }
}

void pop_A(int arr[])
{
	if(topa=-1)
	cout<<"Underflow!!" ;
	else
	topa-- ;
}

void pop_B(int arr[])
{
       if(topb=100)
        cout<<"Underflow!!" ;
        else
        topb++ ;
}

void peek_A(int arr[])
{
	if(topa=-1)
        cout<<"Underflow!!" ;
        else
        cout<<"\n"<<arr[topa]<<"\n" ;
}

void peek_B(int arr[])
{
        if(topb=100)
        cout<<"Underflow!!" ;
        else
        cout<<"\n"<<arr[topb]<<"\n" ;
}

void traverse(int arr[])
{
	int i ;
	cout<<"Stack A\n" ;
	for(i=topa;i>=0;i--)
	{ 
	cout<<arr[i] ;
	if(i!=0)
	cout<<"->" ;
	}
	cout<<"\n" ;
	cout<<"Stack B\n" ;
        for(i=topb;i<100;i++)
        { 
        cout<<arr[i] ;
        if(i!=99)
        cout<<"->" ;
        }
        cout<<"\n" ;
}




int main()
{
	int arr[100],ch ;
	do
	{
	cout<<"1.push() A\n2.Push() B\n3.Pop() A\n4.Pop() B\n" ;
	cout<<"5.Peek() A\n6.Peek() B\n7.Traverse A&B\n8.Exit\n" ;
	cout<<"Enter choice :" ;
	cin>>ch ;
	switch(ch)
	{
	case 1 :push_A(arr) ;
		break ;
	case 2:	push_B(arr) ;
		break ;
	case 3 :pop_A(arr) ;
                break ;
        case 4: pop_B(arr) ;
                break ;
	case 5 :peek_A(arr) ;
                break ;
        case 6: peek_B(arr) ;
                break ;
	case 7: traverse(arr);
		break ;
	case 8:cout<<"Exiting program!!" ;
		break ;
	default :cout<<"Enter a valid choice" ;
	} ;
	}while(ch!=8) ;
return 0 ;
}
