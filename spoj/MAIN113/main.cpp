#include <iostream>
#include<math.h>

using namespace std;

int main()
{int n,t;
cin>>t;
while(t--)
{
cin>>n;
long long int k=pow(3,n);
if(n%3==0)
        cout<<(k-6)<<"\n";
        else cout<<k<<"\n";
}
return 0;
}
