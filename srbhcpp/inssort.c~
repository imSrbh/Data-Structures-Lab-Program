#include <stdio.h>
 int main()
{
int n,a[100],i,j,temp;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d elements\n",n);
for (i=0;i<n;i++) {
 scanf("%d", &a[i]);
  }
 for (i=1;i<= n - 1;i++) {
  j=i;
  while(j>0&&a[j]<a[j-1])
{
      temp=a[j];
      a[j]=a[j-1];
      a[j-1]=temp;
 	j--;
    }
  }
  printf("Sorted element:\n");
  for (i=0;i<=n-1;i++) {
    printf("%d\n", a[i]);
  }
 
  return 0;
}





