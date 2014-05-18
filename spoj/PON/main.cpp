#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{ int t;
scanf("%d",&t);
while(t--)
{   unsigned long long int i,n;
    scanf("%llu",&n);
    if(n==1||n==0)
        printf("YES\n");
    if(n==2)
        printf("YES\n");
    else{
    int temp=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            {temp=1;
        break;}
    }
    if(temp==0)
        printf("YES\n");
        else
            printf("NO\n");
    }}
    return 0;
}

