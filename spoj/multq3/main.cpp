#include <stdio.h>

int main()
{
long int i,n,q,a,b,c,l[100002]={0};
scanf("%ld%ld",&n,&q);
    while(q--)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        long int count=0;
        if(a==0)
        {
            for(i=b;i<=c;i++)
                l[i]++;
        }
        if(a==1)
        {
            for(i=b;i<=c;i++)
                {
                    if(l[i]%3==0)
                    count++;

                }

                        printf("%d\n",count);

        }
    }
    return 0;
}
