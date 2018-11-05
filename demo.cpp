#include<iostream>
#include<stack>
using namespace std ;

int main()
{
stack<int> S ;
S.push(5) ;
S.push(6) ;
int num ;
while(!S.empty())
{ 
	num = S.top() ;
	cout<<num<< " " ;
	S.pop() ;
}

return 0 ;
}
