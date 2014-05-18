#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{long long t,x,y;
cin>>t;

while(t--)
{
    cin>>x>>y;
   double l=2*sqrt(x*x-y*y);
printf("%.3f\n",l);
}   return 0;
}
