#include<stdio.h>
int main()
{
    int t,n;
    long long int cx=0,cy=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<3)
            break;
        int x[1000003],y[1000003];
        scanf("%d%d",&x[0],&y[0]);
                long long int area=0;


        for(long long int i=0;i<n;i++)
            {if(i<n-1)
            scanf("%d%d",&x[i+1],&y[i+1]);
                    x[n]=x[0];
                    y[n]=y[0];

            area=area+ x[i]*y[i+1]-x[i+1]*y[i];
            cx=cx+(x[i]+x[i+1])*(x[i]*y[i+1]-x[i+1]*y[i]);
            cy=cy+(y[i]+y[i+1])*(x[i]*y[i+1]-x[i+1]*y[i]);
            }

            double sx=cx/(area);
            double sy=cy/(area);
                sx=sx/3.0;
                sy=sy/3.0;

        printf("%.2f %.2f\n",sx,sy);

    }

return 0;
}

