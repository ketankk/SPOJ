#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    int sum=0;
 while(n>0)
    {
        r=n%10;
        sum=sum+(r*r);
        n=n/10;
    }cout<<sum<<" ";    return 0;
}
