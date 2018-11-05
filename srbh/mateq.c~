#include<stdio.h>
int main()
{
int a[50][50],b[50][50];
int i,j,row1,column1,row2,column2;
int flag=1;

printf("Enter the order of matrix A\n");
scanf("%d%d",&row1,&column1);

printf("\nEnter the order of matrix B\n");
scanf("%d%d",&row2,&column2);


printf("\nEnter the element of matrix A\n");

for(i=0;i<row1;i++)
{

for(j=0;j<column1;j++)
{ 
scanf("%d",&a[i][j]);
}

}  

printf("\nEnter the element of matrix B\n");

for(i=0;i<row2;i++)
{

for(j=0;j<column2;j++)
{ 
scanf("%d",&b[i][j]);
}

}  



if(row1==row2  && column1==column2)
{
printf("\nMatrices can be compared\n");
for(i=0;i<row1;i++)
{
for(j=0;j<column2;j++)

{

if(a[i][j]!=b[i][j])
{
flag=0;
 break;
             }
       }
    }
}

else
{
     printf("\nMatrices CAN not be compared\n");
        exit(1);
}
 if (flag==1)
printf("\nTwo matrices are equal\n");
else
printf("\nTwo matrices are not equal\n");

return 0;
}
















