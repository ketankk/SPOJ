#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
long long int n,sum=0,i;
cin>>n;
for(i=1;i<=n;i++)
        sum=sum+(n*n*(n+1)*(n+1))/4;

cout<<sum<<"\n";
    }
return 0;
}
