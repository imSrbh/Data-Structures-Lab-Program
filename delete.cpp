#include<iostream>

using namespace std ;

int main()
{
	int n,p ;
	cin>>n ;
	int arr[n] ;
	int  i; 
	for(i=0;i<n;i++)
	cin>>arr[i] ;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" " ;
	cout<<"\nEnter the index to be deleted :" ;
	cin>>p ;
	for(i=p;i<n-1;i++) 
	{
		arr[i]=arr[i+1] ;
	}
	for(i=0;i<n-1;i++)
        cout<<arr[i]<<" " ;
	return 0 ;
}	
