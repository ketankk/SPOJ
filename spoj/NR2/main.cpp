#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
long long a,temp1=0,temp2=1,i,k;
for(i=0;i<n;i++)

{
    scanf("%lld",&a);
    temp1=temp1|a;
    temp2=temp2&a;
}
printf("%lld\n",temp1);
        return 0;
}
