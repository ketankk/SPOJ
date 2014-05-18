#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int n,i,sum;
    scanf("%lld",&n);
    sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }printf("%lld\n",sum);
}
        return 0;
}
