#include <iostream>

using namespace std;

int main()
{
int t,n,res;
cin>>t;
while(t--)
{
    cin>>n;
    res=0;
    while(n)
    {
        if(n==2)
        {
            res=res+2;
            break;
        }
        if(n%2==0)
            n=n/2;
        else
            n=n/2+1;
        res++;
    }
    cout<<res<<"\n";
}
        return 0;
}
