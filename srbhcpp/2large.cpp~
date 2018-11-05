#include<iostream>
using namespace std;
int main()
{

  int a[50],i,j,n,temp;

  cout<<"Enter the number of elements:";
  cin>>n;

  cout<<"Enter the elements:";
 for (i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
   {
     if(a[i]>a[j])
    {  
       temp = a[i];
       a[i]=a[j];
       a[j]=temp;
     }}}  
	cout<<"Second largest element is"<<a[n-2];

}
