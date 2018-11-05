#include<iostream>



using namespace std ;


void bubble_sort(int arr[],int n)
{	
	int i, j ;
	int temp ;
	for(i=0;i<n-1;i++)
	{	for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp =arr[j] ;
			arr[j]=arr[j+1] ;
			arr[j+1]=temp ;
			}
		}
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
        cout<<"Initial array :\n" ;
         for(j=0;j<n;j++)
                {
                cout<<arr[j]<<" " ;
                }
                cout<<endl<<endl ;
        bubble_sort(arr,n) ;
        cout<<"Sorted array :\n" ;
         for(j=0;j<n;j++)
                {
                cout<<arr[j]<<" " ;
                }
                cout<<endl ;
return 0 ;
}





