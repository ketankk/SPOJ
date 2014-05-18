#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;i*i<=n;i++)
        sum=sum+(n/i-i+1);
    cout<<sum<<"\n";
    return 0;
}
