#include <stdio.h>
int main()
{
int days,month,week;
printf("Enter the no. of days\n");
scanf("%d",&days);
 month=days/31;
 week=days%31;
printf("%d =month\n",month);
printf("%d =week\n",week);
}
