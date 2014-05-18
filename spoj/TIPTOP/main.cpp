#include <iostream>
#include<math.h>

using namespace std;

int main()
{int t;
cin>>t;
int p=t;
while(t--)
{
     long long n,k;
    cin>>n;
    k=sqrt(n);

if(k*k==n)
    cout<<"Case "<<p-t<<": Yes\n";
else cout<<"Case "<<p-t<<": No\n";
}
    return 0;
}
