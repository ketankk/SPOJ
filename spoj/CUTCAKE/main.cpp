//http://en.wikipedia.org/wiki/Lazy_caterer's_sequence
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long n;
    cin>>n;
   float  k=(sqrt(8*n-7)-1.0)/2.0;
cout<<ceil(k)<<"\n";
}

        return 0;
}
