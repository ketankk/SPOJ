#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
long long int m,n;
while(1)
{

cin>>n>>m;
if(m==0&&n==0)
        break;
if(n==0)
  cout<<"1.000000\n";
  else
if(m<n)
cout<<"0.000000\n";

else
     {double d=(m-n+1.0)/(m+1.0);

printf("%.6f\n",d);}

}
        return 0;
}
