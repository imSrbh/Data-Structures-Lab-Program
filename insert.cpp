#include<iostream>

using namespace std ;

int main()
{  
	int  n,p,num ;
 	cin>> n;
	int arr[n+1]; 
	int i ;
	for(i=0;i<n;i++)
	cin>>arr[i] ;
	for(i=0;i<n;i++)
        cout<<arr[i]<<" "  ;
	cout<<"Ente the index: " ;
	cin>> p;
	cout<<"Ente the number:" ;
	cin>>num ;
	for(i=n;i>p;i--)
	{	arr[i]=arr[i-1];
	}
	arr[i]=num ;
	for(i=0;i<=n;i++)
        cout<<arr[i]<<" "  ;
	return 0;
}
