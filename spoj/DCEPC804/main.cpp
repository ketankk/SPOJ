#include <iostream>

using namespace std;

int main()
{
int t,a,b,c,k;
long int m;
cin>>t;
while(t--)

{
   cin>>a>>b>>c>>k;
   m=b*b-4*a*(c-k);
   if(m>=0)
    cout<<"Yes\n";
   else cout<<"No\n";
}
    return 0;
}
