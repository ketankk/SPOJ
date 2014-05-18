#include <stdio.h>

int magic(int n,int d)
{
        int i,a=0;
        for(i=2;i<=n;i++)
                a=(a+d)%i;
        return a;
}

int main()
{
        int n,d;
        while(1)
            {
            scanf("%d%d",&n,&d);
            if(n==0&&d==0)
                break;
            else
            printf("%d %d %d\n",n,d,magic(n,d)+1);
            }
        return 0;
}
