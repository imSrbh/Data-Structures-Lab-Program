#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *header, *ptr, *temp;
void insert_front();
void insert_end();
void insert_any();
void display();

void main()
{
	int choice;
	int cont = 1;
	header = (struct node *) malloc(sizeof(struct node));
	header->data = NULL;
	header->link = NULL;

	while(cont == 1)
	{
		printf("\n1. Insert at front");
		printf("\n2. Insert at end");
		printf("\n3. Insert at any position");
		printf("\n4. Display linked list");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				insert_front();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				insert_any();
				break;
			case 4:
				display();
				break;
		}
printf("\n\nDo you want to continue? (y/n): ");
scanf("%d", &cont);
}
}
void insert_front()
{
	int data_value;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);

	temp = (struct node *) malloc(sizeof(struct node));

	temp->data = data_value;
	temp->link = header->link;
	header->link = temp;
}
void insert_end()
{
	int data_value;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);

	temp = (struct node *) malloc(sizeof(struct node));
	ptr = header;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	temp->data = data_value;
	temp->link = ptr->link;
	ptr->link = temp;
}
void insert_any()
{
	int data_value, key;

	printf("\nEnter data of the node: ");
	scanf("%d", &data_value);
	printf("\nEnter data of the node after which new node is to be inserted: ");
	scanf("%d", &key);

	temp = (struct node *) malloc(sizeof(struct node));
	ptr = header;
	while(ptr->link != NULL && ptr->data != key)
	{
		ptr = ptr->link;
	}
	if(ptr->data == key)
	{
		temp->data = data_value;
		temp->link = ptr->link;
		ptr->link = temp;
	}
	else
	{
		printf("\nValue %d not found\n",key);
	}
}
void display()
{
	printf("\nContents of the linked list are: \n");
	ptr = header;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
		printf("%d ", ptr->data);
	}
}
