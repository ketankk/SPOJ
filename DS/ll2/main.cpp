#include <iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;
 struct Node
 {
 int data;
 struct Node *next;
 }*first,*head,*temp;

 void push(int n)
 {
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = n;
    if(first!=NULL)
    {
        temp->next = head;
        temp = head;
    }
    else {

        first = temp = head;
        fflush(stdin);
    }
    temp->next=NULL;
 }
 void show()
 {temp=first;
while(temp!=NULL)
{
  cout<<temp->data;
  temp=temp->next;
}
 }

int main()
{
 first = NULL;
push(5);
show();


        return 0;
}
