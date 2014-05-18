#include <stdio.h>
int happy(int n)
{  int sum=0;
    while(n>0)
    {
    int k=n%10;
    n=n/10;
    sum=sum+k*k;
    }
    return sum;
}

int main()
{
    int n,count=0,hit=1;
    int a[1000]={0};
    scanf("%d",&n);
    while(1)
    {
        int temp;
        temp=happy(n);
        if(a[temp]==0)
        {
            n=temp;
            a[temp]=1;
            count++;
        }
        else{
            hit=0;
            break;}
        if(n==1)
            break;
    }
    if(hit)
        printf("%d\n",count);
    else
        printf("-1\n");
    return 0;
}
