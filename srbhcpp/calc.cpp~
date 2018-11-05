#include<iostream>

using namespace std;

int pow,top,ans ;

long int exp(long int n,int pow)
{
	if(pow==1)
	return n ;
	else
	return n*exp(n,pow-1) ;
} 


int main()
{ 
	int n;
	top=-1 ;
	cout<<"Enter the number: " ;
	cin>> n ;
	cout<<"Enter the power : " ;
	cin>>pow ;
	ans=exp(n,pow)	;
	cout<<"Answer using recursion is : " ;
	cout<<ans <<"\n";
return 0 ;
}
