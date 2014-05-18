#include <iostream>
#include<math.h>

using namespace std;

int main()
{
long long int t;
cin>>t;
while(t--)
{
    long long int n,k=0,i,n1;
    cin>>n;
    i=0;
    n1=n;
    while(n>1)
    {
        n/=2;
        i++;
    }
    long long int k1=pow(2,i);
    if(k1<n1)
        k1=pow(2,++i);
     cout<<k1<<" "<<i<<"\n";
}
        return 0;
}
