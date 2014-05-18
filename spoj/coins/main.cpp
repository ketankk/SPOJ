#include<stdio.h>
#include<map>
#include<iostream>

using namespace std;
long long int sum(long long int n)
{
 static map<int,int> memo;
     if(memo.count(n)>0)
    return memo[n];
    long long k;

    if(n==0) k=0;
    else
            k=max((sum(n/2)+sum(n/3)+sum(n/4)),n);
            memo[n]=k;
    return k;
}
int main()
{        long long int n;

    while((scanf("%lld ",&n))!=EOF)
    { long long int k;


k=sum(n);
cout<<k<<"\n";
}
return 0;
}
