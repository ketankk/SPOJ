#include <iostream>
#include<math.h>

using namespace std;
#define mod 10000007


long long power(long long a,long long b,int n)
{
    long long d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main()
{
    while(1)
    {  long long n,k,m;
        cin>>n>>k;
        if(n==0&&k==0)
            break;
        else
        m=(2*power((n-1),k,mod)+2*power((n-1),(n-1),mod)+power(n,k,mod)+power(n,n,mod))%mod;



            cout<<m<<"\n";

    }
    return 0;
}
