#include <stdio.h>



int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
int n,t;
long long sum;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
sum=0;
for(int i=1;i<=n;i++)
{   int k=gcd(i,n);
    sum=sum+(i*n)/(k);
}
printf("%lld\n",sum);
}
    return 0;
}
