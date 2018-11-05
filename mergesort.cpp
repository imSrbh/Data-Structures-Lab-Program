#include<iostream>

using namespace std ;

void merge(int l[],int sl,int r[],int sr,int ans[]) ;

void merge_sort(int arr[] , int size,int ans[])
{
	int l,r,i,j ;
	l=size/2 ;
	int left[l] ;
	r=size-l ;
	int right[r] ;
	for(i=0;i<l;i++)
	{
		left[i]=arr[i] ;
	}
	for(j=0;j<r;j++)
	{
		right[j]=arr[i] ;
		i++ ;
	}
/*	for(i=0;i<l;i++)
        {
                cout<<left[i]<< " " ;
        }
	cout<<endl ;
	 for(i=0;i<r;i++)
        {
                cout<<right[i]<< " " ;
        }
	cout<<endl;*/
   	
	if(l>1)
	merge_sort(left,l,ans) ;
	if(r>1)
	merge_sort(right,r,ans) ;

	merge(left,l,right,r,ans) ;


}

void merge(int l[],int sl,int r[],int sr,int ans[]) 
{	int temp[50] ;
	int i=0 , j=0 ;
	int k=0 ;
	while(i<=sl&&j<=sr)
	{	//cout<<l[i]<<" "<<r[j]<<endl ;
			
		
		if(l[i]<r[j])
		{ 
			temp[k]=l[i] ;
			i++ ;
			k++;
		}
		else 
		{	
			temp[k]=r[j] ;
			j++ ;
			k++ ;
		}
	}
	while(j<=sr)
	{
                                temp[k]=r[j] ;
                                k++ ;
                                j++ ;
                        }
	while(i<=sl)
                        {
                                temp[k]=l[i] ;
                                k++ ;
                                i++ ;
                        } 
		
	for(k=0;k<sl+sr;k++)
	{	ans[k]=temp[k] ;
	}
	cout<<endl ;
}


int main()
{
	int s,i ;
	cin>>s ;
	int arr[s] ;
	int ans[s] ;
	for(i=0;i<s;i++)
	cin>>arr[i] ;
	merge_sort(arr,s,ans) ;
	for(i=0;i<s;i++)
	cout<<ans[i]<<" " ;
	return 0 ;
}
	
