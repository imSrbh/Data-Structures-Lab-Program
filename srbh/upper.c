#include<stdio.h>
#include<string.h>
void main()
{  char sent[100] ;
   gets(sent) ;
   int i ;
   int len = strlen(sent) ;
   for(i=0 ;i<len;i++) 
   {  if(isupper(sent[i]))
        sent[i]=tolower(sent[i]) ;
      else if(islower(sent[i]))
        sent[i]=toupper(sent[i]) ;
   } 
   printf("%s",sent) ;
}
