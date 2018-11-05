#include<iostream>
using namespace std;
struct node
{
 int data;
 node *link;
};
node *start=NULL;

void create()
{
 char ch;
 do
 {
    
 node *a=new node;
   cout<<"enter the data:";
   cin>>a->data;
   a->link=NULL;
   if(start==NULL)
   {
    start=a;
    
   }
   else
   {
    a->link=start;
    start=a;
   }
   cout<<"do u want to continue?(y/n):";
   cin>>ch;
 }while(ch!='n');

}
void display()
{
 node *a;
 a=start;
 while(a!=NULL)
 {
  cout<<a->data<<endl;
  a=a->link; 
 } 
}
int main()
{
 create();
 display();
}
