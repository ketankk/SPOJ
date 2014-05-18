#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{
    int n;
    long long k;
    cin>>n;
    if(n&1)
        k=(n-2)/2+1;
    else k=(n-2)/2;
    k=(k*k)%n;
    cout<<k<<"\n";
}
        return 0;
}
