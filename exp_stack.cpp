#include<iostream>

using namespace std;

int pow,top ;
void push(int arr[],int num)
{	
	if(top<pow)
	{
	top++ ;
	arr[top]=num ;
	}
	else
	cout<<"Overflow!!" ;
}
void pop(int arr[],int top)
{	if(top!=0)
	top-- ;
	else
	cout<<"underflow!!" ;
}
//int peek(int arr[],int top)
//{
//	return arr[top] ;
//}



long int exp(long int n,int pow)
{
	if(pow==1)
	return n ;
	else
	return n*exp(n,pow-1) ;
} 


int main()
{ 
	int n;
	top=-1 ;
	cout<"Enter the number: " ;
	cin>> n ;
	cout<<"Enter the power : " ;
	cin>>pow ;
//	int arr[pow] ;
	int i ;
//	for(i=0;i<pow;i++)
//	push(arr,n) ;
	long int ans ;
/*	for(i=0;i<pow;i++)
	{
	cout<<arr[i]<< " " ;
	}
	cout<<"top= "<<top ;
*/
//	while(top>=0)
//	{
//	ans=ans*arr[top] ;

//	pop(arr,top) ;
//	}
//	cout<<"Answer using stack is : "<<ans ;
	ans=exp(n,pow)	;
	cout<<"Answer using recursion is : " ;
	cout<<ans ;
return 0 ;
}
