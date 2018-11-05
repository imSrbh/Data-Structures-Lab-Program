#include<iostream>
using namespace std;
int main()
{
int i,n,m,c,v;
cout<<"enter size of stack";
cin>>n;
int a[n];
cout<<"enter number of stack";
cin>>m;
cout<<"enter elements of stack";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"choose any option";
cout<<"1.push";
cout<<"2.pop";
cout<<"3.peek";
cout<<"4.travers";
cin>>c;
if(c==1)
{
if(m==n)
{
cout<<"overflow";
}
else
{
cout<<"top state";
cin>>v;
m++;
a[m-1]=v;
cout<<"stack number is";
for(i=0;i<m;i++)
cout<<a[i];
cout<<"\n";
}}
if(c==2)
{
if(m==-1)
{
cout<<"underflow";
}
else
{
m--;
cout<<"stack number is";
for(i=0;i<m;i++)
cout<<a[i];
cout<<"\n";
}}
if(c==3)
{
if(m==-1)
{
cout<<"underflow";
}
else
{
cout<<"top position is";
cout<<a[m-1];
cout<<"\n";
}}
if(c==4)
{
cout<<"finaly stack is";
for(i=0;i<m;i++)
cout<<a[i];
cout<<"\n";
}
}

 
