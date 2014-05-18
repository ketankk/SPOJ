#include <iostream>

using namespace std;

struct node{
int data;
struct node *next;
}*head=NULL;

void add(int n)

{
    struct node *temp = new node;
    temp->data = n;
    temp->next = NULL;
    head=temp;

}
void show()

{
    struct node *temp = new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }


}


int main()
{
    cout << "Hello world!" << endl;
    int n;
    cin>>n;
    add(n);
    show();
    return 0;
}
