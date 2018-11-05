#include<iostream>
using namespace std ;
int main()
{ 
	int n,i ;
	cin>>n ;
	int arr[n] ;
	for(i=0;i<n;i++)
	{
		cin>>arr[i] ;
	}
	cout<<"Missing numbers is :\n" ;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=i+1)
		{cout<<i+1 ;
		break ;
		}
	}

return 0;
}
