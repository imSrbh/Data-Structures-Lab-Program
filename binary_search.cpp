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
		cin>>arr[i] ;
	sort(arr.begin(),arr.end()) ;
	int num ;
	cout<<"Enter the number to be searched : " ;
	cin>>num ;
	int pos = binary_search(arr.begin(),arr.end(),num) ;
	if(pos==0)
		cout<<"Element not found" ;
	else
		cout<<"Element found!!" ;
return 0 ;
}
