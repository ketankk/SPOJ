#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{ int t;
scanf("%d",&t);
while(t--)
    {
    double a,b,c,d;
cin>>a>>b>>c>>d;
  double s=(a+b+c+d)/2;

  s=sqrt((s-a)*(s-b)*(s-c)*(s-d));
  printf("%.2f\n",s);
}
    return 0;
}
