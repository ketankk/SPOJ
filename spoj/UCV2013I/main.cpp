#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    while(1)
{
int s,n;
scanf("%d%d",&s,&n);
if(s==0&&n==0)
    break;
double k=acos(-1);
k=sin(k/(2*n));
k=s/k ;
printf("%.2f\n",k);
}
return 0;
}
