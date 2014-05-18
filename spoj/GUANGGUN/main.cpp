#include <stdio.h>
#include<math.h>
int main()
{
unsigned long long int n;
while((scanf("%lld",&n))!=EOF)
{
        int k=n%9;
        n=n/9;
        long long m=(n*81+k*k);
        printf("%lld\n",m);

}
        return 0;
}
