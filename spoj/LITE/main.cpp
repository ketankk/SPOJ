#include<stdio.h>
int main()
{
int n,q;
scanf("%d%d",&n,&q);
int  l[n];

    while(q--)
    { int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int count=0;
        if(a==0)
        {
            for(int i=b;i<=c;i++)
                if(l[i]==0) l[i]++;
                else l[i]--;
        }
        if(a==1)
        {
            for(int j=b;j<=c;j++)
                {
                    if(l[j]==1)
                    count++;
                }

                        printf("%d\n",count);

        }
    }
    return 0;
}
