#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
   typedef struct mylist
   {
    int info;
    struct mylist *link;
    }node;
char ch;
node *start=NULL;

void create()
{do
{
node *a=(node*)malloc(sizeof(node));
node *tail;
 
printf("\nEnter The Data:");
scanf("%d",&a->info);
a->link=NULL;
if(start==NULL)
{
start=a;
tail=a;
}
else
{
tail->link=a;
tail=a;
}
 printf("want to add more data Y or N:");
  __fpurge(stdin);
  scanf("%c",&ch);

}while(ch!='n');

}
void delete_node()
{
node *ptr;
ptr=start;
printf("\nnow the linked is:");
while(start->link!=NULL)
{
start=start->link;
free(start);
ptr=start;
}
start=NULL;
}
void display()
{
node *access;
access=start;
while(access!=NULL)
{
printf("%d->",access->info);
access=access->link;
}
}

int main()
{
create();
display();
delete_node();
display();
}
