#include <iostream>
#include<malloc.h>
using namespace std;

struct node
{
    int n;
    node *next;
}*start,*temp;
int main()
{ int t=5,k;
    cout << "Enter no." << endl;
    while(t--){
    temp= (struct node*)malloc(sizeof(struct node));
    start=NULL;
    cin>>k;
    temp->n=k;
    temp->next=start;
    start=temp;
    } temp=start;

    while(temp!=NULL)
    {
        cout<<temp->n;
        temp=temp->next;
    }
    return 0;
}
