#include<iostream>

using namespace std ;

int main()
{
	int n ;
	cin>> n;
	int arr[n] ;
	int i ;
	for(i=0;i<n;i++)
	cin>>arr[i] ;
	int top=n-1 ;
	int arr_rev[n] ;
	i=0 ;
	while(top>=0)
	{	
	arr_rev[i]=arr[top] ;
	top-- ;
	i++ ;
	}
	for(i=0;i<n;i++)
        cout<<arr_rev[i]<<" " ; 
return 0 ;
}
