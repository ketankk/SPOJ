#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
int t;

cin>>t;
while(t--)
{  long double a,b,k,n,c;
    cin>>a>>b>>c;

    k=(2*c-7*b-5*a)-sqrtl(25*b*b+49*a*a+4*c*c+70*a*b-20*a*c-28*b*c);
    if(k<0)
    k=(2*c-7*b-5*a)+sqrtl(25*b*b+49*a*a+4*c*c+70*a*b-20*a*c-28*b*c);
    (long long int)k;
    k=k/12;
    n=2*c/(a+b+k);
    printf("%lld\n",n);
    //for(int i=-2;i<n-2;i++)
   // printf("%lld ",(a+i*k));

}
        return 0;
}

