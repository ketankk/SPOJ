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
int t;
scanf("%d",&t);
while(t--)
{ long long int a,b,k,j;
    scanf("%lld%lld",&a,&b);
j=a-b;
if(j<0)
    j=-j;
if(a<0)
    a=-a;
if(b<0)
    b=-b;
    k=gcd(a,b);

    k=j/k;

printf("%lld\n",k);
}
    return 0;
}
