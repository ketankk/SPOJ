#include <iostream>
#include<stdio.h>
#include<map>
using namespace std;

double pib(double n)
{
    static map<double,double> memo;
     if(memo.count(n)>0)
    return memo[n];
    if(n<4)
        return 1;
    else return memo[n]=pib(n-1)+pib(n-3.1415926535);
}

int main()
{
    while(1)
{
    long long int n;
scanf("%lld",&n);
if(n==-1)
    break;
double k=pib(n);
n=k;
printf("%lld\n",n);
}


    return 0;
}
