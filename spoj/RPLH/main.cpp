#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{int t;
cin>>t;
int x=t;
while(t--)
    {
double m,n;
cin>>m>>n;
double k=(m/(n*n));
k=k*9.806;
if(k>1)
     printf("Scenario #%d: -1\n",x-t);
else{
k=asin(k);
float p=2*acos(0.0);
k=(k*90.0)/p;
 printf("Scenario #%d: %.2f\n",x-t,k);
    }}
 return 0;
}
