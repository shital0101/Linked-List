/*Implement a list library (singlylist.h) for a singly linked list of integer with the operations create, display. Write a menu driven program to call these operations*/
#include"singly.h"
int main()
{
   NODE *head=NULL;
   int ch;
   do
   {
     printf("\n1-create \n2-display:");
     printf("\n enter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:head=create(head);
               break;
       case 2:display(head);
               break;
       default :printf("\n invalid choice:");
     }
   }while(ch<3);
}
