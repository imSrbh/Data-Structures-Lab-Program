#include<iostream>
using namespace std;

int main()
{
	int n,stk[100],top=-1,max,i=0,k,m;
	 cout<< "Enter the number of elements\n";
	 cin>> n;
	 cout<< "Enter elements";
	 for(i=0;i<n;i++)
	 {cin>> stk[i];
	 top=i;}

	 while (k!=5)
	 {
		cout<< "Choose from the list\n";
		 cout<< "1.Push an element\t2.Pop an element\t3.Traverse elments\t4.Peek element\t5.Exit "<<"\n";
		 cin>> k;
 switch (k)
  {case 1:{cout<< "Enter the element\n";
          cin>> m;
          top++;
          stk[top]=m;
          for(i=top;i>=0;i--)
          cout<< stk[i]<<"\n";
          break;}


  case 2:{stk[top]='\0';
          top--;
          for(i=top;i>=0;i--)
          cout<< stk[i]<<"\n";
          break;}


  case 3:{cout<< "Array is:\t";
          for(i=top;i>=0;i--)
          cout<< stk[i]<<"\n";
          break;}
          


  case 4:{cout<<stk[top]<<"\n";
          break;}
  }}}
