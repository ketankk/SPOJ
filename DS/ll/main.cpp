#include <iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;

int main()
{
    struct node
    {
        int num;
        struct node *ptr;

    };

  typedef struct node NODE;
  NODE *head,*first,*temp;
  int count=0;
  char choice;

   first=NULL;
   do
   {
       head=(NODE*)malloc(sizeof(NODE));
       printf("ENTER\n");
       scanf("%d",&head->num);
       if(first!=NULL)
       {
           temp->ptr=head;
           temp=head;
       }
       else
        first=temp=head;
        fflush(stdin);
        printf("y/n\n");

       scanf("%c",&choice);

   }
   while((choice=='y')||(choice=='Y'));
   temp->ptr=NULL;
   temp=first;
   while(temp!=NULL)
   {
       printf("%d\n",temp->num);
       count++;
       temp=temp->ptr;
   }
    return 0;
}
