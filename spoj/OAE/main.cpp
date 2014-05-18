#include <iostream>
#include<math.h>

using namespace std;

int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else return n*fact(n-1);
}
int main()
{
int n,i,sum=0;;
cin>>n;
for(i=0;i<=n;i++)
{
    sum=sum+(fact(n)/((fact(n-i))*fact(i)))*pow(9,n-i);
}
cout<<sum;
return 0;
}
