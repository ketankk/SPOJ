#include <stdio.h>
#include<algorithm>

using namespace std;

int main()
{
unsigned long long int n,i,sum;
while(1)
{
    scanf("%llu",&n);
  if(n==0)
    break;
  else {unsigned long long int a[n+2],b[n+2];
    for(i=0;i<n;i++)
    scanf("%llu",&a[i]);

    for(i=0;i<n;i++)
    scanf("%llu",&b[i]);
    sort(a,a+n);
    sort(b,b+n);
    sum=0;
for(i=0;i<n;i++)
{
    sum=sum+a[i]*b[n-i-1];
}
printf("%llu\n",sum);}

}
        return 0;
}
