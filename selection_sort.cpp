#include<iostream>

using namespace std ;

/*void swap ( int *a , int *b)
{
	int temp ;
	temp = *a;
	*a=*b ;
	*b=temp ;
}*/

void selection_sort(int arr[], int n)
{
	int i , pos,min,j,temp ;
	for(i=0;i<n-1;i++)
	{	min=arr[i] ;
		pos=i ;
		for(j=i+1;j<n;j++) 
		{
			if(arr[j]<min)
			{
			min=arr[j] ;
			pos= j ;
			}
		}
		temp=arr[i] ;
		arr[i] = arr[pos] ;
		arr[pos]=temp ;
		for(j=0;j<n;j++)
		cout<<arr[j]<<" " ;
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
        selection_sort(arr,n) ;
        cout<<"Sorted array :\n " ;
         for(j=0;j<n;j++)
                {
                cout<<arr[j]<<" " ;
                }
                cout<<endl ;
return 0 ;
}

