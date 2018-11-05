#include<cstdio>
using namespace std;
int main()
{
  int a[50],n,i,b,s;

  printf("Enter the size:");
  scanf("%d",&n);
  printf("Enter elements:");
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);

  b=a[0];
  for(i=1;i<n;i++){
      if(b<a[i])
           b=a[i];
  }
  printf("Largest element: %d\n",b);
 
  s=a[0];
  for(i=1;i<n;i++){
      if(s>a[i])
           s=a[i];
  }
  printf("Smallest element: %d\n",s);

  return 0;
}
