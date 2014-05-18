#include <stdio.h>
int main()
{int t,n;
scanf("%d",&t);
while(t--)
{scanf("%d",&n);
float k=(n*(n+1));
float j=(n*n+n+1);
k=k/(2*j);
printf("%.5f\n",k);
    }return 0;
}

