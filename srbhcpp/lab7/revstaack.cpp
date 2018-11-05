#include<iostream>
using namespace std;
int stk[5],top;
void push();
void pop();
void traversing();
void peek();
int main()
{
int choice,opt=1;
top=-1;
while(opt)
{
cout<<"\n1.push\n2.pop\n3.traversing\n4.peek\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:traversing();
break;
case 4:peek();
break;
}
cout<<"\nDo you want to continue\n1.yes\n0.no\nEnter your wish:";
cin>>opt;
}
}
void push()
{
int num;
if(top==4)
{
cout<<"stack is full";
}
else
{
cout<<"Enter the value:";
cin>>num;
top++;
stk[top]=num;
}
}
void pop()
{
if(top==-1)
{
cout<<"stack is empty";
}
else
{
cout<<"deleted element is:"<<stk[top];
top--;
}
}
void traversing()
{
int i;
if(top==-1)
{
cout<<"stack is empty";
}
else
{
for(i=top;i>=0;i--)
{
cout<<stk[i]<<"";
}
}
}
void peek()
{
int num;
if(top==-1)
{
cout<<"stack is empty";
}
else
{
cout<<stk[top];
}
}












