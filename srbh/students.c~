#include<stdio.h>

struct student
{
char name[20];
int rollno;
int age;
}s[20];
int main()
{
int i,n;
printf("\nEnter the number of the student\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter the roll no.\n");
scanf("%d",&s[i].rollno);

printf("\nEnter the name for roll no.%d\n :",s[i].rollno);
scanf("%s",s[i].name);

printf("\nEnter the age for roll no.%d\n :",s[i].rollno);
scanf("%d",&s[i].age);
}
printf("\nthe structured list of the studentS\n");
for (i=0;i<n;i++)
{
printf("Roll no.: %d\tName: %s\tAge: %d\n",s[i].rollno,s[i].name,s[i].age);
}
}
