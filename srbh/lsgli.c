#include <stdio.h>

int main()
{
  int a[100],n,i,large,small;

  printf("Enter the value of n\n");
  scanf("%d",&n);


  for(i=0;i<n;i++)
      scanf("%d",&a[i]);

  large=a[0];
  for(i=1;i<n;i++)
{
      if(large<a[i])
           large=a[i];
}
  printf("Largest n: %d\n",large);
 
  small=a[0];
  for(i=1;i<n;i++)
{
      if(small>a[i])
           small=a[i];
}
  printf("Smallest n: %d\n'",small);

  return 0;
}

