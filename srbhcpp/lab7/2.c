#include <stdio.h>
#define SIZE 10
int array[SIZE];

void display()
{
    int i;
    if (n == 0)
    {
        printf("Heap is empty \n");
        return;
    }
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}
void insert(int num, int location)
{
    int parentnode;
    while (location > 0)
    {
        parentnode =(location - 1)/2;
        if (num <= array[parentnode])
        {
            array[location] = num;
            return;
        }
        array[location] = array[parentnode];
        location = parentnode;
    }
    array[0] = num;

    n++;
}
void minimum()
{
    int startIndex = n/2;

    if (startIndex == 0)
        return array[startIndex];

    int Minimum = array[startIndex];

    int count= startIndex+1;
    for( count = startIndex+1; count < n; count++)
        if(array[count] < Minimum)
            Minimum = array[count];
    printf("Minimum element : %d \n", Minimum);
}
void maximum()
{
    printf("Maximum element : %d \n", array[0]);
}

int main()
{
    int choice, num;
    n = 0;
    while(1)
    {
        printf("1.Insert the element \n");
        printf("2.Maximum in heap \n");
        printf("3.Minimum in heap \n");
        //printf("4.Display all elements \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter the element to be inserted to the list : ");
            scanf("%d", &num);
            insert(num, n);
            n = n + 1;
            break;
        case 2:
            maximum();
            break;
        case 3:
            minimum();
            break;
        case 4:
            exit(0);
            }
    }
    return 0;
}
