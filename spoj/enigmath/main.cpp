#include <iostream>
#include<stdio.h>

using namespace std;

int hcf(long long int a,long long int b)
{    if(b==0)
       return a;
    else
       return hcf(b,a%b);
}

int main()
{  int t;
   cin>>t;
   while(t--)
   {
       unsigned long long int a,b;
       scanf("%llu%llu",&a,&b);
       long int k=hcf(a,b);
       a=a/k;
       b=b/k;
       printf("%llu %llu\n",b,a);

   }
    return 0;
}
