#include <stdio.h>
int main()
{
int t;scanf("%d", &t);
while (t--)
{
    int n,i,k;
    bool ret=true;
scanf("%d",&n);
int l=0;
for (i=0;i<n;i++)
{
scanf("%d",&k);
if (i==0)
l=k;
else
{
if (k<l)
ret=false;
else
l=(k-l);
}
}
if (ret&&l==0)
printf("YES\n");
else
printf("NO\n");
}
return 0;

}
