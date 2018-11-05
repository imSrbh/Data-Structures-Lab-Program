/*STACK PUSH(), POP(), PEEK(), TRAVERS() AND (FULL OR EMPTY CHECK) IMPLEMENTATION USING ARRAYS*/
#include <stdio.h>
#define MAX 5
int top, status;
 
/*PUSH FUNCTION*/
void push (int stack[], int item)
{   if (top == (MAX-1))
	status = 0;
    else
    {   status = 1;
	++top;
	stack [top] = item;
    }
}
 
/*POP FUNCTION*/
int pop (int stack[])
{  
    int ret;
    if (top == -1)
    {   ret = 0;
	status = 0;
    }
    else
    {   status = 1;
	ret = stack [top];
	--top;
    }
return ret;
}
 
/*PEEK FUNCTION*/
int peek (int stack[])
{  
    int ret;
    if (top == -1)
    {   ret = 0;
	status = 0;
    }
    else
    {   status = 1;
	ret = stack [top];
    }
return ret;
}

/*FUNCTION TO DISPLAY STACK*/
void display (int stack[])
{   int i;
    printf ("\n The Stack is: ");
    if (top == -1)
	printf ("empty");
    else
    {   for (i=top; i>=0; --i)
	   printf ("\n--------\n|%3d   |\n--------",stack[i]);
    }
    printf ("\n");
}
 
/*MAIN PROGRAM*/
void main()
{  
    int stack [MAX], item;
    int ch;
  //  clrscr ();
    top = -1;
 
    do
    {  do
       {   printf ("\n\n-----------------------------------------------------------------------\n\n  MAIN MENU");
	   printf ("\n 1.PUSH in the Stack.");
	   printf ("\n 2.POP from the Stack.");
 	   printf ("\n 3.PEEK from the Stack.");
	   printf ("\n 4.Travers Stack.");
	   printf ("\n 5.Check Stack is Full.");
	   printf ("\n 6.Check Stack is Empty.");
	   printf ("\n 7.Exit.");
	   printf ("\n Enter Your Choice / Selection: ");
	   scanf  ("%d", &ch);
	   if (ch<1 || ch>7)
	       printf ("-----------------------------------------------------------------------\n\n  Invalid Choice, Please try again.");
	}while (ch<1 || ch>7);
       switch (ch)
       {
	case 1:
		printf ("-----------------------------------------------------------------------\n\n  Enter the Element to be pushed : ");
		scanf  ("%d", &item);
		printf (" %d", item);
		push (stack, item);
		if (status)
		{   printf ("\n After Pushing.");
		    display (stack);
		    if (top == (MAX-1))
			printf ("-----------------------------------------------------------------------\n\n  The Stack is Full");
		}
		else
		    printf ("-----------------------------------------------------------------------\n\n  Stack overflow on Push");
		break;
       	case 2:
		item = pop (stack);
		if (status)
		{    printf ("-----------------------------------------------------------------------\n\n  The Popped item is %d. \n After Popping: ",item );
		     display (stack);
		}
		else
		     printf ("-----------------------------------------------------------------------\n\n  Stack underflow on Pop");
		break;
  	case 3:
		item = peek (stack);
		if (status)
		{    printf ("-----------------------------------------------------------------------\n\n  The Peek item is %d . ",item );
		     display (stack);
		}
		else
		     printf ("-----------------------------------------------------------------------\n\n  Stack underflow on Peek");
		break;
	case 4:
		display (stack);
		break;
	case 5 :
 		if (top == (MAX-1))
			printf ("-----------------------------------------------------------------------\n\n  The Stack is Full");
		else
			printf ("-----------------------------------------------------------------------\n\n  The Stack is Not Full, Only %d Items Pushed \n\n\n",top+1);
		break;
	case 6 :
 		if (top == -1)
			printf ("-----------------------------------------------------------------------\n\n  The Stack is Empty");
		else
			printf ("-----------------------------------------------------------------------\n\n The Stack is Not Empty, Only %d Items Pushed \n\n\n",top+1);
		break;
       default:
		printf ("\n\n\n-------------------- END OF EXECUTION -------------------------\n\n\n\n");
       }
    }while (ch != 7);
//getch();
}
