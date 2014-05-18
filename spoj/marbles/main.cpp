#include<stdio.h>


int main()
{
int t,n,k;
scanf("%d",&t);
while(t--)
{
double res=1.0;
scanf("%d%d",&n,&k);

n--;
k--;
if(k>n/2)
k=n-k;
for(int i=0;i<k;i++)
res=res*(double)(n-i)/(double)(i+1);

printf("%.0lf\n",res);
}return 0;
}
