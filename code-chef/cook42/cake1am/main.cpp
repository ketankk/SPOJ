#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{  int a,b,c,d,p,q,r,s,k;
    cin>>a>>b>>c>>d;
    cin>>p>>q>>r>>s;
    k=(c-a)*(d-b)+(r-p)*(s-q);
    if(c>p&&d>q)
        k=k-(c-p)*(d-q);
    cout<<k<<"\n";
}
        return 0;
}
