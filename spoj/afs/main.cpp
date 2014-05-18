#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

long long int f(long int n)
{
    double sum=0;
    for(long int i=1;i<n;i++)
        {if(fmod(n,i)==0)
        sum=sum+i;}
    return sum;
}
long long int a(long int n)
{
    if(n==0||n==1)
        return 0;
    else return (a(n-1)+f(n));

    }
int main()
{ int t;
    scanf("%d",&t);
    while(t--)
    {
    long int n;
    scanf("%lld",&n);
    long long int k=a(n);
    printf("%lld\n",k);
    }
    return 0;
}
