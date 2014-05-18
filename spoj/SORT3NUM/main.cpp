#include <iostream>

using namespace std;

int main()
{
long long int a,b,c,l,m,h;
cin>>a>>b>>c;
l=a;
m=b;
h=c;
if(a>b)
    {m=a;
    l=b;}
if(b>c)
    {h=b;
    m=c;}
    cout<<l<<m<<h;
    return 0;
}
