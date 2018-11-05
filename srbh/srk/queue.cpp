#include<iostream>
using namespace std;
#define max 20
void push(int a[]);
void pop(int a[]);
void display(int a[]);
void peek(int a[]);
int front=-1,rear=-1;

int main()
{int i,n,k;
 int a[max];
 
while (k!=5)
 {cout<< "\nChoose from the list\n";
 cout<< "1. Push an element\n2. Pop an element\n3. Display elments\n4. Peek element\n5. Exit "<<"\n";
 cin>> k;
 switch (k)
  {case 1:{push(a);
           break;}
  case 2:{pop(a);
          break;}
  case 3:{display (a);
          break;
          }
  case 4:{peek(a);
          break;}
  case 5:{k=5;}
 }
}return 0;}

void push(int a[])
{ int j;
  cout<<"Enter the value\n";
  cin>>j;
  if(rear==max-1)
     cout<<"QUEUE is full\n";
  if((front==-1)&&(rear==-1))
     {front=0;rear=0;
      a[rear]=j;}
  else
    {rear=rear+1;
      a[rear]=j;
     }
 }

void pop(int a[])
{if ((front==-1)||(front>rear))
  cout<<"Queue Underflow\n";
 else
   {front=front+1;
 cout<<"Popped element is: "<<a[front-1]<<"\n"; 
}}

void display(int a[])
{int i;
 if(front==-1)
   cout<<"Queue Empty\n";
 else
 {cout<<"Queue is:\n";
  for(i=front;i<=rear;i++)
  cout<<a[i]<<"\t";}
}

void peek(int a[])
{if(front==-1)
 cout<<"Queue is Empty\n";
 else
 cout<<a[front]<<"\n";
}
