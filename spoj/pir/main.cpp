#include <iostream>
#include<math.h>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
int t;
    cin>>t;
    while(t--)

{
double u,v,w,U,V,W;
cin>>u>>v>>w>>W>>V>>U;

double u1 = v*v+w*w-U*U;
double v1 = w*w+u*u-V*V;
double w1 = u*u+v*v-W*W;


double vm=(sqrt(4.0*u*u*v*v*w*w - u*u*u1*u1- v*v*v1*v1-w*w*w1*w1+u1*v1*w1))/12.0;
printf("%.4f\n",vm);
}

    return 0;
}

