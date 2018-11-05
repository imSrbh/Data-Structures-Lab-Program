#include<iostream>
	

using namespace std;

int main()
{
	int n, num,p ;
	cin>>n ;
	int arr[n] ;
	int i ;
	for(i=0;i<n;i++)
	cin>>arr[i] ;
	for(i=0;i<n;i++)
        cout<<arr[i]<<" " ;
	cout<<"\nEnter the postion :" ;
	cin>>p ;
	cout<<"Enter the new value :";
	cin>>num ;
	arr[p-1]=num ;
	for(i=0;i<n;i++)
        cout<<arr[i]<<" "  ;
	return 0 ;
}
