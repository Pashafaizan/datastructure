#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int);
int pop();
void peek(void);
void traverse(void);
int isfull();
int isempty();
 int top=-1;
 #define CAPACITY 5   //pre processor
 int stack[CAPACITY];
void main(void)
{
    int ch;
    int item;
    while(1)
    {
        printf("1. Push\n\n");
      printf("2.Pop\n\n");
      printf("3.Peek\n\n");
      printf("4.Traverse\n\n");
     printf("5.Exit\n\n");
     printf("Enter the choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Enter element in stack:");
            scanf("%d",&item);
            push(item);
            break;
        case 2: item = pop();
           if (item==0)
            {
            printf("stack is underflow\n");
            }
             else
              {
              printf("popped item : %d \n",item);
              }
              break;
        case 3: peek();
              break;
        case 4:traverse();
              break;
        case 5:exit(0);
        default: printf("invalid value\n\n");
    }
    }
}
void push(int ele)
{
  if(isfull())
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
stack[top] = ele;
   printf("\n %d inserted element \n",ele);
    }

}
int pop()
{
    if(isempty())
    {
        return 0;
}
else
{
  return stack[top--];
}

}
void peek()
{
    if(isempty())
    {
        printf("\n stack is overflow:\n");
    }
    else
    {
        printf("\n peek element is %d :\n ",stack[top]);
    }
}
void traverse()
{
    if(isempty())
    {
        printf("\n stack is empty \n");
    }
    else
    {
        int i;
        printf("\ stack element is :\n ");
        for(i=0; i<=top; i++)
        {
            printf("%d \n",stack[i]);
        }
    }

}
int isfull()
{
 if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
   if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
