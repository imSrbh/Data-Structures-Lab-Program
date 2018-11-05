#include<cstdio>
using namespace std;
int main()
{
int n,i,j,b,c;
{ 
    printf("Enter size of array\n");
    scanf("%d", &n);
    int a[n-1];   
    printf("Enter elements into array\n");
    for (i=0;i<n-1;i++)    
        scanf("%d",&a[i]);
    	b=a[0];
    for (i=1;i<n-1;i++)
        b=b^a[i];
    for (i=2,c=1;i<=n;i++)
        c=c^i;
    c=c^b;  
    printf("Missing element is %d\n",c);
}
}



























