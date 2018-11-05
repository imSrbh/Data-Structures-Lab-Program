#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int main()
{
	int n ;
	cin>> n ;
	vector<int> arr(n) ;
	int i ;
	for(i=0;i<n;i++)
		cin>>arr[i] ;
	int num ;
	cout<<"Enter the number to be searched : " ;
	cin>>num ;
	sort(arr.begin(),arr.end()) ;
	int f, l, mid,flag=0 ;
	f=0;
	l=n-1 ;
	while(f!=l)
	{
		if(num==arr[f])
		{	cout<<"element found at position : "<<f+1 ;
			flag=1 ;
			break ;
		}
		else if(num==arr[l])
		{
			 cout<<"element found at position : "<<f+1 ;
                        flag=1 ;
                        break ;
		}
		else
		{
			mid=f+l/2 ;
			if(num>=arr[mid])
			f=mid ;
			else
			l=mid ;
		}
	}
	if(flag==0)
	cout<<"Element not found!!" ;
return 0 ;
}
