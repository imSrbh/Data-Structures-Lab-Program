#include <stdio.h>
#define size 100
int partition(int a[],int beg,int end);
void quick_sort(int a[],int beg,int end);
int main()
{
int arr[size],i,n;
printf("\n Enter the number of elements :");
scanf("%d",&n);
printf("\n Enter the elements :");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
quick_sort(arr,0,n-1);
printf("\n sorted array is:\n");
for(i=0;i<n;i++)
printf(" %d\n",arr[i]);
return 0;
}
int partition(int a[],int beg,int end)
{
int l,r,t,loc,flag;
loc=l=beg;
r=end;
flag=0;
 while(flag!=1)
{
 while((a[loc]<=a[r])&&(loc!=r))
 r--;
 if(loc==r)
  flag=1;
  else if(a[loc]>a[r])
 {
  t= a[loc];
  a[loc]=a[r];
  a[r]=t;
  loc=r;
 }
if(flag!=1)
{
 while((a[loc]>=a[l])&&(loc!=l))
 l++;
 if(loc==l)
 flag =1;
else if(a[loc]<a[l])
{
 t=a[loc];
 a[loc]=a[l];
 a[l]=t;
 loc=l;
}}}
return loc;
}
void quick_sort(int a[],int beg,int end)
{
int loc;
if(beg<end)
{
loc=partition(a,beg,end);
quick_sort(a,beg,loc-1);
quick_sort(a, loc+1, end);
}}
