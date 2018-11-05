#include<stdio.h>

void main()
{   int a[50] , b[50] ,c[50] ;
    int n,i,j ;
    printf("\nEnter size:\n ") ;
    scanf("%d" , &n) ;
    printf("\nEnter 1st array\n");
    for(i=0 ;i<n;i++) 
{
    
    scanf("%d",&a[i]) ;
}
    printf("\nEnter 2nd array\n");
    for(i=0 ;i<n;i++)
{
    
    scanf("%d",&b[i]) ;
}
    for(i=0 ; i<n;i++)
    { c[i] = a[i] ;}
    for(j=0;j<n;j++,i++)
    { c[i] = b[j] ;
    }
    int val , temp, len ; 
    len = n + n ;
    for(j=1;j<len;j++)
    { temp = j ;
      val = c[j] ;
      while((temp>0)&&(val<c[temp-1])) 
      {  c[temp] =c[temp-1] ;
         temp-- ;
      }
      c[temp] = val ;
    }





    for(j=0;j<len;j++)
    printf("%d ", c[j]) ;
}
