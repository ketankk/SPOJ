#include <stdio.h>
#include<math.h>
#define M 1298074214633706835075030044377087;
int main()
{int t;
scanf("%d",&t);
while(t--)
{
long long int n,a[55];
scanf("%d",&n);
a[0]=1;
int i=1;
while(i<52)
{a[i]=fmod((pow(2,i)),M));
a[i]=a[i-1]+a[i];
a[i]=(a[i],M);
i++;
}
printf("%lld\n",a[n]);
}
return 0;
}
