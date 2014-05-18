#include<iostream>
#include<math.h>
#include<stdio.h>
#include<map>
#include<math.h>
using namespace std;
long long int m;
double fib(long long int n)
{   static map<int,int> memo;
     if(memo.count(n)>0)
            return memo[n];
            long long int k;
    if(n==0||n==1)
        k=n;
    else
       k=fmod((fib(n-1)+fib(n-2)),m);
        memo[n]=k;
        return k ;
}
int main()
{
int t;

scanf("%d",&t);
while(t--)
{
long long int n,k;
double res;
scanf("%lld%lld",&n,&m);
res=fib(n+2);
k=2*(res-1)-n;
cout<<k%m<<"\n";
}
return 0;
}
