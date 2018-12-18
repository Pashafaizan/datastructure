 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 int data;
 struct node* link;
 };
 int len;
 void append();
 void addatbegin();
 void addatafter();
 int length();
 void display();
 void delete();

 struct node* root;
 void main()
 {
     int ch;
     while(1)
        {

        printf("1. Append \n\n");
   printf("2. Length\n \n" );
   printf("3. Addatbegin \n\n");
     printf("4. Display\n\n");
    printf("5. Addatafter \n\n");
    printf("6. Delete\n \n");
     printf("7. Exit \,\n");
 printf("enter the choice:");
 scanf("%d",&ch);
 switch(ch)
{
case 1: append();
    break;
case 2: len=length();
printf("length :%d \n",len);
    break;
case 3:addatbegin();
    break;
case 4:display();
    break;
 case 5:addatafter();
    break;
    case 6: delete();
    break;
case 7:exit(1);
default: printf("Invalid input\n\n");



}        }

 }
 void append()
 {
     struct node* temp;
     temp=(struct node*)malloc(sizeof(struct node));
     printf("enter the node:");
     scanf("%d",&temp->data);
     temp->link=NULL;
     if(root==NULL)
     {
         root=temp;
     }
     else
        { struct node* p;
     p=root;
     while(root!=NULL)
     {
          p=p->link;
     }
     p=temp;

     }
 }
 int length()
 {
     int count=0;
   struct node* temp;
   temp=root;
   while(temp!=NULL)
   {
     count++;
     temp=temp->link;
   }
   return count;
 }

void display()
{
    struct node* temp;
    temp=root;
   if(temp==NULL)
   {
       printf(":List is empty \n\n");

   }
   else{
   while(temp!=NULL)
   {
       printf("%d-->",temp->data);
       temp=temp->link;
   }
   printf("\n\n");
   }
}
void addatbegin()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf(" enter the data in new node which add to beginning:");
scanf("%d",&temp->data);
temp->link=NULL;
if (root==NULL)
{
    root=temp;
}
else
{
temp->link=root;
root=temp;

}
}
void addatafter()
{
struct node* temp, *p;
int loc,len,i=1;
printf("Enter the location:");
scanf("%d",&loc);
len=length();
if(loc>len)
{
    printf("invalid location :");
    printf("currently list is having %d nodes",len);
}
else
{
    p=root;
    while(i<loc)
    {
        p=p->link;
        i++;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data in the new node to insert in linked list:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=p->link;
    p->link=temp;

}

}
void delete()
{
int len=length();
    int loc;
    struct node* temp;
    printf("enter the location of node you want to delete:");
    scanf("%d",&loc);
    if(loc>len)
    {
        printf("invalid location");
    }
    else if(loc==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        struct node* p=root,*q;
        int i=1;
        while(i<loc-1)
        {
            p=p->link;
            i++;

        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}
