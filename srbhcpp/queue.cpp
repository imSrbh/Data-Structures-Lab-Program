#include<iostream>
using namespace std;
#define max 20
void Enqueue(int a[]);
void Dequeue(int a[]);
void display(int a[]);
void peek(int a[]);
int front=-1,rear=-1;

int main()
{int i,n,k;
 int a[max];
 
while (k!=5)
 {cout<< "\nChoose from the list\n";
 cout<< "1. Enqueue \n2. Dequeue \n3. Display \n4. Peek\n5. Exit "<<"\n";
 cin>> k;
 switch (k)
  {case 1:{Enqueue(a);
           break;}
  case 2:{Dequeue(a);
          break;}
  case 3:{display (a);
          break;
          }
  case 4:{peek(a);
          break;}
  case 5:{k=5;}
 }
}return 0;}

void Enqueue(int a[])
{ int j;
  cout<<"Enter the Element\n";
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

void Dequeue(int a[])
{if ((front==-1)||(front>rear))
  cout<<"Queue Underflow\n";
 else
   {front=front+1;
 cout<<"Dequeued element is: "<<a[front-1]<<"\n"; 
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

