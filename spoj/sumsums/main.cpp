#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
unsigned long long int t,i,n;
unsigned long long int a[5000],sum=0,k=0;
scanf("%llu%llu",&n,&t);
for(i=0;i<n;i++)
    {
    scanf("%llu",&a[i]);
       sum=(sum+a[i])%98765431;
}
while(t--)
   {
       for(i=0;i<n;i++)
    {
    a[i]=(sum-a[i])%98765431;
    k=k+a[i];

    }
sum=k;
k=0;
}
    for(i=0;i<n;i++)
    printf("%llu\n",a[i]);
    return 0;
}
