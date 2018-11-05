#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *link;
};
struct node *start=NULL;
struct node *tail;

void create()
{
char c;
do
{
 struct node *a=new node;
 cout<<"enter the data";
 cin>>a->data;
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
cout<<"do you want to continue (y/n):";
cin>>c;
}
while(c!='n');
}

void display()
{
 struct node *a;
 a=start;
 while(a!=NULL)
 {
  cout<<a->data<<endl;
  a=a->link;
 }
}
void insert_end()
{ 
  struct node *b=new node; 
  struct node *ptr;
  b->link=NULL;
  cout<<"Enter data for new node inserted at the end";
  cin>>b->data;
  ptr=start;
  while(ptr->link!=NULL)
  ptr=ptr->link;
  ptr->link=b;
}
void valbefore()
{
  int v;
  struct node *c=new node;
  struct node *ptr,*preptr;
  c->link=NULL;
  cout<<"Enter item before which want to insert";
  cin>>v;
  cout<<"Enter new value to be inserted";
  cin>>c->data;
  ptr=start;
  while(ptr->data !=v)
    {   preptr=ptr;
        ptr=ptr->link;     }
    preptr->link=c;
    c->link=ptr;
}

int main()
{
 create();
 display();
 insert_end();
 display();
 valbefore();
 display();
}


