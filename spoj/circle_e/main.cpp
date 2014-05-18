#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
        {
     double r1,r2,r3;
    cin>>r1>>r2>>r3;

    double j;
   j=(r1*r2*r3)/((r1*r2+r2*r3+r3*r1)+2*(sqrt((r1*r2*r3)*(r1+r2+r3))));

printf("%.6f\n",j);
        }
   return 0;
}


