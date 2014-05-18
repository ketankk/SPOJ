#include<iostream>
using namespace std;
#include<process.h>
#include<algorithm>
int main()
{ long long n,m,arr[3005],count=0,suma[3005],max,i;
scanf("%llu",&n);
scanf("%llu",&m);
for( i=0;i<n;i++)
scanf("%llu",&arr[i]);
for( i=0;i<n;i++)
{
suma[i]=arr[i];
for(int j=i+1;j<n;j++)
{if(suma[i]==m)
{printf("%llu",max);
exit(0);
}
if(suma[i]+arr[j]<=m)
suma[i]=suma[i]+arr[j];
else
break;
}

}
sort(suma,suma+n);
if(suma[n-1]<=m)
printf("%llu",suma[n-1]);

//getch();
return 0;
}
