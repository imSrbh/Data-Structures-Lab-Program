#include <stdio.h>

int main()
{
int n,ans;
printf("Enter the number\n");
scanf("%d",&n);

long int fact (int n)
{
if(n=0)
return 1;
else
return (n*fact(n-1));

}
ans=fact(n) ;
printf("%d",ans);
}
