#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    while(1)
{
int n,a[10002];
scanf("%d",&n);
long int sum=0,count=0;
if(n==-1)
    break;
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
long int avg=sum%n;
if(avg!=0)
    printf("-1\n");
else
    {
        avg=sum/n;

        for(int i=0;i<n;i++)

    {
             if(a[i]<avg)
            count=count+(avg-a[i]);
    }
printf("%d\n",count);
}
}

return 0;
}
