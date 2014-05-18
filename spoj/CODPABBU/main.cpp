#include <iostream>
#include<stdio.h>
//#define long long int lr
using namespace std;

long long int pabbu(long long int a,long long r,long long d,long long n)
{
    if(n==1)
        return a;
    else if(n%2==0)
        return (pabbu(a,r,d,n-1)+d);
    else
        return (pabbu(a,r,d,n-1)*r);
}

int main()
{
    long long t,a,d,r,n,m;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld%lld%lld",&a,&d,&r);
    scanf("%lld%lld",&n,&m);
     long long int k=pabbu(a,r,d,n);
     cout<<k%m<<"\n";
        }
    return 0;
}
