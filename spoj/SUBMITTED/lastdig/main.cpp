#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int t,m;
    long long int n,k;
    cin>>t;
while(t--)
{
    cin>>m>>n;
    m=m%10;
    n=(n-1)%4;
    n=n+1;
    k=pow(m,n);
    k=k%10;
cout<<k<<"\n";
}
    return 0;
}
