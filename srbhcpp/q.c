#include<stdio.h>
#include<stdlib.h>
 
#define MAX 20
 
int queue_a[MAX];
int front = -1;
int rear = -1;
int element;
 
void insert(int element);
int delete();
int isEmpty();
int isFull();
int peek();
void display();
void main()
{
        int option;
        while(1)
        {
printf("\n1. insert");
printf("\n2. Delete");
printf("\n3. Display");
printf("\n4. Peek");
printf("\nEnter your option:\t");
scanf("%d", &option);
 switch(option)
 {
case 1: printf("\nEnter Element to be Inserted:\t");
 scanf("%d", &element);
  insert(element);
 break;
   case 2: element = delete();
printf("\nDeleted Element From Queue:\t%d", element);
 break;
 case 3: display();
break;
case 4: printf("\nPeek:\t%d", peek());
break;
 case 5: exit(1);
                }
        }
        printf("\n");
}
 void insert(int element)
{
        if(isFull())
        {
	printf("\nQueue Overflow\n");
                return;
        }
        else if(front==-1)
        {
                front=0;
        }
        rear =rear+1;
        queue_a[rear] = element;
}
 int delete()
{
        int item;
        if(isEmpty())
        {
                printf("\nQueue Underflow\n");
                return 1;
        }
        else
        {
                item = queue_a[front];
                front = front+1;  
                return item;
        }
}
 int isEmpty()
{
        if(front==-1||front==rear+1)
                return 1;
        else
                return 0;
}
 
int isFull()
{
        if(rear==MAX-1)
                return 1;
        else
                return 0;
}
 int peek()
{
        if(isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        else
        {
                return queue_a[front];
        }
}
 void display()
{
        int count;
        printf("\nQueue:\n");
        for(count = front;count<=rear;count++)
        {
                printf("%d\t",queue_a[count]);
        }
}
