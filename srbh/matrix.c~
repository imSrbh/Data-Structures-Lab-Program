#include <stdio.h>
void main()
{
int a[100][100],order;
int i,j, sum=0;

scanf("%d",&order);

for(i=0;i<order;i++)
for(j=0;j<order;j++)
scanf("%d",&a[i][j]);

  for(i=0;i<order;i++)
{
	for(j=0;j<order;j++)

{
		if((i==j) || (i+j==order-1))
                 sum+=a[i][j];
}
}
printf("%d\n",sum);
}

