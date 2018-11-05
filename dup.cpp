#include<iostream>

using namespace std ;

int main()
{
	int n ;
	cin>>n;
	int arr[n] ;
	int i,j ;
	for(i=0;i<n;i++)
	cin>>arr[i] ;
/*	int temp ,value ;
        for(i=0;i<n;i++)
        {
                temp=i ;
                value=arr[i] ;
                while(temp>0&&arr[temp]<arr[temp-1])
                {
                arr[temp]=arr[temp-1] ;
                temp-- ;
                }
        arr[temp]=value ;
        }*/
	for(i=0;i<n-1;i++)
	{	for(j=i+1;j<n;j++)
		if(arr[i]==arr[j])			
		cout<<arr[i]<<"\n" ;
		
	}
return 0 ;
}
		
