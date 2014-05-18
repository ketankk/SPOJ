#include <iostream>
#include<math.h>
using namespace std;


int fun(int n,int k)
{ int i,sum=0,j=0;
    while(k>0)
{
    i=(k%n);
    sum=sum+(pow(10,j))*i;
    k=k/2;
    j++;
}
return sum;
}
int main()
{int t,a,b,c,n;
while(t--)
{
cin>>n>>a>>b;
c=fun(n,a)^fun(n,b);
cout<<c;
}
return 0;
}
