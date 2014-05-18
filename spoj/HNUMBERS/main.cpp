#include <iostream>

using namespace std;
int etf(int n,int m)
{
       int i,r = m;
       for(i=2;i*i <m;i++)
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
    int t,m;
    cin>>t;
    while(t--)
    {
 cin>>n>>m;
  cout<<etf(n,m)-1<<"\n";}
    return 0;
}

