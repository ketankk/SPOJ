#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{int t;
     long long int i,n,sum;
cin>>t;
while(t--)
{
    sum=0;
    scanf("%lld",&n);
sum=((3*n+1)*n)/2;
sum=sum%1000007;
printf("%lld \n",sum);
}
        return 0;
}
