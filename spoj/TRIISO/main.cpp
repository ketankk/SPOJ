#include <stdio.h>
#include<math.h>

int check(int n)
{
    int k=sqrt(n);
    if(k*k==n&&k%2==0)
        return 1;
    else return 0;
}
int main()
{int t,i;
scanf("%d",&t);
while(t--)
{
int n,temp=0;
scanf("%d",&n);
for(i=1;i<sqrt(n);i++)
{
   int k=check(n-i*i);
    if(k==1)
    {temp=1;
       break;}
}
if(temp==1)
printf("YES\n");
else printf("NO\n");
}
    return 0;
}
