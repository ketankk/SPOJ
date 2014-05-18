#include <iostream>

using namespace std;

int main()
{
long int n,a;
cin>>n;
long long sum=0,k=0;
for(int i=1;i<=n;i++)
{
    cin>>a;
    sum=sum+a;
    k=k+i;
}
//k=(n*(n+1))/2;
if(k==sum)
    cout<<"YES\n";
else
    cout<<"NO\n";
    return 0;
}
