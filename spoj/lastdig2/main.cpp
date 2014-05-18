#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    int t;
    long long int n;
    cin>>t;
while(t--)
{
char m[10001],m2;
    cin>>m>>n;
int k, l=strlen(m);
 m2=m[l-1];
 int m1=m2-'0';
  n=(n-1)%4;
    n=n+1;
    k=pow(m1,n);
    k=k%10;
cout<<k<<"\n";
}
    return 0;
}

