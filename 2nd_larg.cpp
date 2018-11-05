#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main()
{
	int n ;
	cin>>n ;
	vector<int> arr(n) ;
	int i ;
	for(i=0;i<n;i++)
	{
		cin>>arr[i] ;
	}
	sort(arr,arr+n) ;
	cout<<"Largest : "<<arr[n-1] ;
	cout<<"\nSecond Largest : "<<arr[n-2] ;
	cout<<"\nSmallest : "<<arr[0] ;
return 0 ;
}
