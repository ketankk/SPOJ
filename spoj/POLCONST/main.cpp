#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{ int k,n;
    cin>>n;
    k=n;
    while(k%2==0)
        k=k/2;
    if(k%65537==0)
        k=k/65537;
    if(k%257==0)
        k=k/257;
    if(k%17==0)
        k=k/17;
    if(k%5==0)
        k=k/5;
    if(k%3==0)
        k=k/3;
    if(k==1)
        cout<<"Yes\n";
    else cout<<"No\n";

}

        return 0;
}
