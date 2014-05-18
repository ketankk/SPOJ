#include <stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int k=t;
    while(t--)
    {   long long int m,n;

        scanf("%lld %lld",&m,&n);
          int count=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                {if(i*j<=n&&i*j>=m)
                count++;
                }

        }
printf("Case %d: %d\n",k-t,2*count);

    }
    return 0;
}
