#include<stdio.h>

void main()
{ int number[50] , n  , freqency,i,j,temp,val,x ;
  printf("Enter  n : ") ;
  scanf("%d" , &n) ;
  for(i=0;i<n;i++) 
  scanf("%d" , &number[i]) ;
  for(j=1;j<n;j++)
    { temp = j ;
      val = number[j] ;
      while((temp>0)&& (val<number[temp-1])) 
      {  number[temp] =number[temp-1] ;
         temp-- ;
      }
      number[temp] = val ;
    }
    x=number[0] ;
    freqency = 1; 
    i=1;
    while(i<=n)
    { if(number[i]==x)
       {freqency++ ;
        i++;}
      else 
      { printf("number=%d freqency=%d\n",x,freqency);
        x=number[i] ;
        freqency=1 ;
        i++ ;
      }   
 //  for(j=0;j<n;j++)
 //   printf("%d ", number[j]) ;
      
}}
