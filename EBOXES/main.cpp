#include <iostream>

using namespace std;

int main()
{
int test,t,f,k,n;
cin>>test;
while(test--)
{
cin>>n>>k>>t>>f;
cout<<(f-n)/(k-1)*k+n<<"\n";
}
    return 0;
}
