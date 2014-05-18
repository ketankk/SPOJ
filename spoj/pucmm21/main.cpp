#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
long long  n,sum,k1,k2,k3;
scanf("%lld",&n);

        double k11,k22,k33,sum1;
        if(n>1000)
        {
            k11=fmod(((n*(n+1)*(2*n+1)*(3*n*n+3*n-1))/120),1000000003);
        k22=fmod(((n*(n+1)*(2*n+1))/24),1000000003);
        k33=fmod(((n*n*(n+1)*(n+1))/8),1000000003);
        sum1=fmod((k11+k22+k33),1000000003);
        long long int sum11=sum1;
        printf("%lld\n",sum11);
        }else{
        k1=((n*(n+1)*(2*n+1)*(3*n*n+3*n-1))/30);
        k2=((n*(n+1)*(2*n+1))/6);
        k3=((n*n*(n+1)*(n+1))/4);
        sum=(k1+k2+2*k3);
        sum=sum/4;
        sum=sum%1000000003;

printf("%lld\n",sum);}
    }
return 0;
}
