#include<iostream>
using namespace std;
int stk[10],top1,top2;
void push1();
void pop1();
void traversing1();
void peek1();
void push2();
void pop2();
void traversing2();
void peek2();
int main()
{
int choice1,choice2,opt=1;
top1=-1;
top2=10;
while(opt)
{
cout<<"\n1.push\n2.pop\n3.traversing\n4.peek\nEnter your choice for stack1:";
cin>>choice1;
cout<<"\nEnter your choice for stack2:";
cin>>choice2;
switch(choice1)
{
case 1:push1();
break;
case 2:pop1();
break;
case 3:traversing1();
break;
case 4:peek1();
break;
}
switch(choice2)
{
case 1:push2();
break;
case 2:pop2();
break;
case 3:traversing2();
break;
case 4:peek2();
break;
}
cout<<"\nDo you want to continue\n1.yes\n0.no\nEnter your wish:";
cin>>opt;
}
}
void push1()
{
int num1;
if(top1==top2)
{
cout<<"stack is full";
}
else
{
cout<<"Enter the value for stack1:";
cin>>num1;
top1++;
stk[top1]=num1;
}
}
void push2()
{
int num2;
if(top1==top2)
{
cout<<"stack is full";
}
else
{
cout<<"\nEnter the value for stack2:";
cin>>num2;
top2--;
stk[top2]=num2;
}
}
void pop1()
{
if(top1==-1)
{
cout<<"stack1 is empty";
}
else
{
cout<<"deleted element is:"<<stk[top1];
top1--;
}
}
void pop2()
{
if(top2==10)
{
cout<<"stack2 is empty";
}
else
{
cout<<"deleted element is:"<<stk[top2];
top2++;
}
}
void traversing1()
{
int i;
if(top1==-1)
{
cout<<"stack1 is empty";
}
else
{
for(i=0;i<=top1;i++)
{
cout<<stk[i]<<"";
}
}
}
void traversing2()
{
int i;
if(top2==10)
{
cout<<"stack2 is empty";
}
else
{
for(i=9;i>=top2;i--)
{
cout<<stk[i]<<"";
}
}
}
void peek1()
{
if(top1==-1)
{
cout<<"stack is empty";
}
else
{
cout<<stk[top1];
}
}
void peek2()
{
if(top2==10)
{
cout<<"stack is empty";
}
else
{
cout<<stk[top2];
}
}



