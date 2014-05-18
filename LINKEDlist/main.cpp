#include <iostream>

using namespace std;

struct NODE{
int data;
struct NODE *next;

}*HEAD=NULL;
void add(int n)
{

    struct NODE *temp = new NODE;
    temp->data = n;
    temp->next = HEAD;
    HEAD=temp;

}

void show()
{
    struct NODE *temp;
        temp=HEAD;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;

    }
}


void showNth(int k)
{k--;
    struct NODE *temp;
        temp=HEAD;
    while(temp->next!=NULL&&k--)
    {
        temp=temp->next;

    }if(temp!=NULL)
            cout<<temp->data<<"\n";

}




int main()
{int t=1;
    while(t--){
   cout<<"Enter element 0 for exit\n";
int n;
   cin>>n;

   add(n);
   }show();
   while(1)
   {
       int k;
       cout<<"Enter number of elemnt\n";
   cin>>k;
   if(k==0)
    break;
   showNth(k);
}


       return 0;
}
