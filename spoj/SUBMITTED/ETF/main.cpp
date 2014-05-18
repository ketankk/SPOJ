#include <iostream>

using namespace std;
int etf(long long int n)
{
    long long int i,r = n;
       for(i=2;i*i <= n;i++)
       {
         if (n % i == 0)
            r-= r/i;
         while (n % i == 0)
         n /= i;
       }
       if (n > 1) r -= r/n;
       return r;
}

int main()
{
    long long int n;
    int t;
    cin>>t;
    while(t--)
    {
 cin>>n;
  cout<<etf(n)<<"\n";}
    return 0;
}
