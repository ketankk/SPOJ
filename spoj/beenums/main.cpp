#include <iostream>

using namespace std;

int main()
{ int n,i;

while(true)
{
    cin>>n;
    if(n==-1)
    break;
    n--;
    i=1;
    int temp=0;
    while(n>=0)
    {
        if(n==0)
        {
           temp=1;
           break;
        }        n=n-6*i;

        i++;
    }
    if(temp==1)
        cout<<"Y\n";
        else
    cout<<"N\n";



}
    return 0;
}
