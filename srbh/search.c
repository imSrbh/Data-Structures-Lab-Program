#include<stdio.h>

int main()
{
int arr[50],n,i,num;

printf("\nenter the number of elements in given array\n");
scanf("%d",&n);

printf("enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the number to be searched\n");
scanf("%d",&num);
for(i=0;i<n;i++)

if(num==arr[i])

{
printf("element found in array.\nits location in array is arr[%d]\n",i);
}

printf("element not found");
}
