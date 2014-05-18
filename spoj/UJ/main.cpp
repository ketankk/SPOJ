#include <iostream>
#include<math.h>
using namespace std;

int main()
{
while(1)
{
    int n,d;
    cin>>n>>d;
    if(n==0&&d==0)
        break;
    else
        {
        long long int k=pow(n,d);
    cout<<k<<"\n";
    }
}
    return 0;
}
