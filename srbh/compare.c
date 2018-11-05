#include<stdio.h>
#include<string.h>
int main()		
{ 

char str1[100],str2[100];

printf("\nENTER STRING 1\n");
gets(str1);

printf("\nENTER STRING 2\n");
gets(str2);

if (strcmp(str1,str2)==0)

     printf("\nENTERED STRING ARE EQUAL.\n");

else 

    printf("\nENTERED STRING ARE not EQUAL.\n");


return 0;

}
