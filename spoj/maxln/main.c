#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int k=t;
    while(t--)
    {
        long long int r;
        scanf("%lld",&r);
        long long int s=4*r*r;
        printf("Case %d: %lld.25\n",k-t,s);
      }
    return 0;
}
