#include <iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
float n;
scanf("%f",&n);
double p=((n-1)/n)+(1/(n*(n+1)));
cout<<setprecision(8);
printf("%.8f\n",p);
}
    return 0;
}
