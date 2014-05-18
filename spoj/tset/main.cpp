#include <iostream>

using namespace std;

int main()
{
    int a,b,n=10;
while(n--)
{
    cin>>a>>b;
    if(a<10&&b<10)
    {
    if(a==b)
        cout<<"1";
else
    cout<<"0";
    }
    else break;
}
        return 0;
}
