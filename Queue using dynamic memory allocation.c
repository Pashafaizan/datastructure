#include<stdio.h>
#include<stdlib.h>

	void push();
	void pop();
	void traverse();

struct node
{
	int data;
	struct node* next;
}*rear=NULL,*front=NULL;

void main()
{
	int choice;
  printf("Select any of the following operation : \n\n");
  printf("Push element in the queue (1) \n");
  printf("Pop element form the queue (2) \n");
  printf("Display element of the queue (3) \n");
  printf("        Want to exit (4) \n");
  scanf("%d",&choice);
  switch(choice)
  {
	case 1: system("clear"); push(); break;
	case 2: system("clear");pop();break;
	case 3: system("clear");traverse();break;
	case 4: exit(1);
	default : printf("Wrong choice\n"); break;
  }
}

void push()
{
	int element,choice;
	if((front==NULL)&&(rear==NULL))
	{

	  struct node* temp;
	  temp=(struct node*)malloc(sizeof(struct node));
	  front=rear=temp;
	  printf("Enter data : "); scanf("%d",&element);
	  temp->data=element;
	  temp->next=NULL;
	}
	else
	{
	  struct node* temp;
	  temp=(struct node*)malloc(sizeof(struct node));
	  printf("Enter data : "); scanf("%d",&element);
	  temp->data=element;
	  temp->next=NULL;
	  rear->next=temp;
	  rear=temp;
	}
	printf("Do you want to enter more (1/0) : ");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1: system("clear"); push(); break;
	  case 0: system("clear"); main(); break;
	}
}

void pop()
{
	int choice;
	if((front==NULL)&&(rear==NULL))
	{
	  printf("There is no node to delete\n");
	}
	else
	{
	  struct node* temp;
	  temp=front;
	  printf("%d is deleted\n",temp->data);
	  front=front->next;
	  free(temp);
	}
	printf("Do you want to exit or not (1/0) : ");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1: exit(1); break;
	  case 0: system("clear"); main(); break;
	}
}

void traverse()
{
	int choice;
	if((front==NULL)&&(rear==NULL))
	{
	  printf("There is no node to display\n");
	}
	else
	{
	  struct node* temp;
	  temp=front;
	  while(temp!=rear)
	  {
	    printf("%d  ",temp->data);
	    temp=temp->next;
	  }
	    printf("%d  \n",temp->data);
	}
	printf("Do you want to exit or not (1/0) : ");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1: exit(1); break;
	  case 0: system("clear"); main(); break;
	}
}
