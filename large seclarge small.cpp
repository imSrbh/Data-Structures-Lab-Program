#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cin>>n;
	int arr[n] ;
	int i ;
	for(i=0;i<n;i++)
	cin>>arr[i] ;
	
	int temp ,value ;
	for(i=1;i<n;i++)
	{
		temp=i ;
		value=arr[i] ;
		while((temp>=0)&&(arr[temp]<arr[temp-1]))
		{
		arr[temp]=arr[temp-1] ;
		temp-- ;
		}
	arr[temp]=value ;
	}
	cout<<"Largest : "<<arr[n-1] ;
        cout<<"\nSecond Largest : "<<arr[0] ;
        cout<<"\nSmallest : "<<arr[n-2] ;
return 0 ;
}
