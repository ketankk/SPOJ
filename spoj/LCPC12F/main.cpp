#include <stdio.h>

int main()
{
int n,i,j,t,x,a[100002];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&x,&n);
int count=0;
for( i=0;i<n;i++)
        scanf("%d",&a[i]);
for( i=0;i<n;i++)
{
    for( j=i+1;j<n;j++)
{
    if(a[i]+a[j]==x)
    count++;
}
}
printf("%d\n",count);
}
return 0;
}
