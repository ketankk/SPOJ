#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

double fb(double n)
{
    return (4.0*(n+1)*(n+2))/(n*3.0);
}

int main()
{ int t;
    scanf("%d",&t);
    while(t--)
        {
double n;
cin>>n;
double k1=fb(n-1);
double k2=fb(n);
double g=((n-1)*(n-1)*1.0)/(1.0*n*n);
g=k1*g*1.0;
g=1.0*k2-1.0*g;
g=1.0*g+(1.0/(1.0*n*n));

  g=sqrt(1.0*g);
  printf("%.8f\n",g);
        }
  return 0;
}
