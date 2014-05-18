#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,a,d,count;
        scanf("%lld%lld%lld%lld",&n,&m,&a,&d);
        count=m-n+1;
        for(int i=n;i<=m;i++)
        {
            if(i%(a)==0||i%(a+d)==0||i%(a+2*d)==0||i%(a+3*d)==0||i%(a+4*d)==0)
                count--;
        }cout<<count<<"\n";
    }
    return 0;
}
