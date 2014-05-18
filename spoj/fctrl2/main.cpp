#include <iostream>

using namespace std;

int main()
{
int n,t,fact=1;
cin>>t;

while(t--)
      {
          cin>>n;
       for(int i=1;i<=n;i++)
        fact=fact*i;
       cout<<fact;
       fact=1;
      }

      return 0;
}
