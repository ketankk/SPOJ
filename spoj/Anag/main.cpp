#include <iostream>
#include<algorithm>
#include<string.h>
#include<list>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{
    string a,b;
    cin>>a>>b;

    std::sort(a.begin(),a.end());

    std::sort(b.begin(),b.end());
    if(a==b)
        cout<<"YES\n";
    else cout<<"NO\n";

}
        return 0;
}
