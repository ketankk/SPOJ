#include <iostream>
#include<math.h>
using namespace std;
    long int f0,f1,k;

long long seq(long long n)
{
    if(n==0)
    return f0;
    if(n==1)
        return f1;
        else
        return pow((seq(n-1)*seq(n-2)),k);
}

int main()
{
int t;
cin>>t;
while(t--)

{
    long long n;
    cin>>f0>>f1>>n>>k;
    cout<<seq(n)<<"\n";
}
        return 0;
}
