#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int k;
    int t;
    cin>>t;
    while(t--)
    {
      cin>>k;
      cout<<(k*(k+2)*(2*k+1))/8<<"\n";
    }
    return 0;
}
