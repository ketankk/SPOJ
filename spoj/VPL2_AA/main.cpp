#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{ int cas;
    scanf("%d",&cas);
      int i=cas;
    while(cas--)
        {
int a0,a1,t,an;
cin>>a0>>a1>>t>>an;
float k=(log(a1)-log(a0))/t;
float T=(log(an)-log(a1))/k+t;
int j=i-cas;
printf("Scenario #%d: %.2f\n",j,T);
        }
    return 0;
}
