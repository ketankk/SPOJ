#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
float k,sum=0;
for(float i=1;i<=n;i++)
          sum=sum+(n/i);
printf("%.2f\n",sum);
}
return 0;

}
