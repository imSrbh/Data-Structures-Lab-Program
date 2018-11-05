#include<iostream>
#include<cstdlib>
void create();
void insend();
void insbeg();
void insbef();
void insaft();
void delnode();
void delall();
void display();

 using namespace std;
  typedef struct mylist
{ int info;
  struct mylist *link;
  }node;
 
 int k=0;
 char ch;
 node *start=NULL;
int main()
{while (k!=9)
 {cout<< "\nChoose from the list\n";
 cout<< "1. Create Linked List\n2. Insert at Beginning\n3. Insert at end\n4. Insert before a value\n5. Insert after a value\n6. Delete node\n7. Delete all nodes\n8. Display elments\n9. Exit "<<"\n";
 cin>> k;
 switch (k)
  {case 1:{create();
           break;}
   case 2:{insbeg();
           break;} 
   case 3:{insend();
           break;}
   case 4:{insbef();
           break;}
   case 5:{insaft();
           break;}
   case 6:{delnode();
           break;}
   case 7:{delall();
           break;}
   case 8:{display();
           break;}
   case 9: break;
   default: cout<<"Entered choice not valid. Enter again\n";
   }
 }
}

void create()
{ do
{node *a=(node*)malloc(sizeof(node));
 node *tail;
 cout<<"Enter the data\n";
 cin>>a->info;
 a->link=NULL;
  
 if(start==NULL)
 {start=a;
  tail=a;}
 else
 {tail->link=a;
  tail=a; }
 cout<<"Want to add more data: Y or N\n";
 cin>> ch;
 
}while(ch!='n');
 }

void display()
{node *access;
 access=start;
 if(start==NULL)
  cout<<"Empty List\n";
 else
 {cout<<"Linked List is:  ";
   while(access!=NULL)
  {cout<<access->info<<"->";
   access=access->link; }
}}

void insbeg()
{node *ins=(node*)malloc(sizeof(node));
 ins->link=NULL;
 cout<<"Enter the Data\n";
 cin>>ins->info;
 ins->link=start;
 start=ins;
 }

void insend()
{node *a=(node*)malloc(sizeof(node));
 cout<<"Enter the value\n";
 cin>>a->info;
 node *acc=start;
  while(acc->link!=0)
  acc=acc->link;

 acc->link=a;
 a->link= NULL;
}

void insbef()
{int l;
 node *a=(node*)malloc(sizeof(node));
 cout<<"Enter the value\n";
 cin>>a->info;
 node *acc=start;
 node *ptr=start;
 cout<<"Enter the value before which data to be entered.\n";
 cin>>l;
 do
 {ptr=acc;
  acc=acc->link;}
 while(acc->info!=l);
 ptr->link=a;
 a->link=acc;}

void insaft()
{int l;
 node *a=(node*)malloc(sizeof(node));
 cout<<"Enter the value\n";
 cin>>a->info;
 node *acc=start;
 node *ptr=start;
 cout<<"Enter the value after which data to be entered.\n";
 cin>>l;
 do
 {ptr=acc;
  acc=acc->link;}
 while(ptr->info!=l);
 ptr->link=a;
 a->link=acc;}

void delnode()
{if(start==NULL)
  cout<<"No element to delete\n";
 else
 {
 int l;
 cout<<"Enter the value to be deleted\n";
 cin>>l;
 node *acc=start;
 node *ptr=start;
  do
 {ptr=acc;
  acc=acc->link;}
 while(acc->info!=l);
 acc=acc->link;
 ptr->link=acc;}
 }

void delall()
{if(start==NULL)
    cout<<"No elements to delete\n";
 else
 {
  node *acc=start;
 node *ptr=start;
 while(acc->link!=NULL)
 {acc=acc->link;
  free(ptr);
  ptr=acc;}
  free(acc);
  start=NULL;
 cout<<"All items deleted\n";}
}
