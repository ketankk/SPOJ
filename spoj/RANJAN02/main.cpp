#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)

{
    int n;
    cin>>n;
    unsigned long long k=1;
    while(n--)
        k=k*3;
    cout<<k-1<<"\n";
}
        return 0;
}
