#include<stdio.h>
struct node
{
    int data;
    struct node* next;

};
void traverse(struct node* head)
{
    struct node* current= head;
    int count=0;
    printf("\n traversing list \n");
    while(current!=NULL)

    {
        count++;
        printf("%d ",current -> data);
        current= current ->next;
    }
    printf("\n total number of nodes: %d\n",count);
}
struct node* creatnode(int d)
{
    struct node* temp=(struct node*)malloc (sizeof( struct node));
    temp -> data= d;
    temp -> next= NULL;
    return temp;
};
int main()
{
    printf("creating and traversing linked list:");
    struct node* head = creatnode(5);
    head -> next= creatnode(10);
    head ->next->next=creatnode(20);
      head -> next -> next ->next=creatnode(1);
      traverse(head);
      return 0;
}


