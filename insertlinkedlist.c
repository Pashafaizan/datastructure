#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node* next;
};
void traverse(struct node* head)
{

int count=0;
struct node* current=head;
printf("\n traversing list \n");
while(current!=NULL)
{
    count++;
printf("%d",current->data);
current=current->next;
}
printf("\n total number of nodes is %d",count);
}
struct node* creatnode(int d)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
     temp->data=d;
     temp->next=NULL;
     return temp;

};
 int main()
 {
printf("\n creating the linked list by inserting new nodes at the begining\n ");
printf("enter 0 to stop building the list,else any integer \n ");
int k,count=1,x;
struct node* curr;
scanf("%d",&k);
struct node* head=creatnode(k);
scanf("%d",&k);

/////////////////////inserting at begining////////////////
while(k)
{
    curr=creatnode(k);
    curr->next=head;
    head=curr;
    scanf("%d",&k);
    traverse(head);
    ////////////////inserting at the end////////////////////
    printf("\n enter the integer you want to add at the end of the list \n");
    scanf("%d",&k);
    struct node* temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
}

 }
