#include<iostream>

using namespace std ;

void insertion_sort(int arr[], int n)
{
	int temp , value ;
	int i,j ;
	for(i=1;i<n; i++)
	{
		temp = i ;
		value = arr[i] ;
		while(temp>=0 && value<arr[temp-1])
		{
			arr[temp]=arr[temp-1] ;
			temp-- ;
		}
		arr[temp]=value ;
		for(j=0;j<n;j++)
		{
		cout<<arr[j]<<" " ;
		}
		cout<<endl ;
	}
}

int main()
{	
	int n,j ;
	cout<<"Enter the size of the array : " ;
	cin>>n ;
	int arr[n] ;
	
	 for(j=0;j<n;j++)
                {
                cin>>arr[j] ;
                }
                cout<<endl ;
	cout<<"Initial array :\n " ;
	 for(j=0;j<n;j++)
                {
                cout<<arr[j]<<" " ;
                }
                cout<<endl<<endl ;
	insertion_sort(arr,n) ;
	cout<<"Sorted array :\n " ;
	 for(j=0;j<n;j++)
                {
                cout<<arr[j]<<" " ;
                }
                cout<<endl ; 
return 0 ;
}
