#include <iostream>
#include<math.h>
using namespace std;


int main()
{   int n;
    cin>>n;
    int sum=0;
    int r,t=n;
    while(t--)
    {
       while(n>0)
    {
        r=n%10;
        sum=sum+(r*r);
        n=n/10;
    }
    if(sum==1)
        break;
        else n=sum;
        sum=0;
    }
    if(sum==1)
        cout<<'1';
    else
        cout<<'0';
    return 0;
}
