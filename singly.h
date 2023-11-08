#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (NODE *)malloc(sizeof(NODE))
typedef struct node
{
   int data;
   struct node *next;
}NODE;

NODE *create(NODE *head)
{
   NODE *temp,*newnode;
   int i,n;
   printf("\n enter the limit:");
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      newnode=NODEALLOC;
     printf("\n enter the value:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(head==NULL)
     {
        temp=head=newnode;
     }
     else
     {
       temp->next=newnode;
       temp=newnode;
     }
   }
     return head;
}

void display(NODE *head)
{
    NODE *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
      printf("%d\t",temp->data);
    }
}
