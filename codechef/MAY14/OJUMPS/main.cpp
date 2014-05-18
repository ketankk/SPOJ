#include <iostream>

using namespace std;

int main()
{
long long int a;
cin>>a;
a=a%6;
if(a==1||a==3||a==0)
    cout<<"yes\n";
else cout<<"no\n";

    return 0;
}
