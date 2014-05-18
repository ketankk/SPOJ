#include <iostream>
#include<math.h>
using namespace std;

int main()
{


 long long int t,u,d,m,n;
 cin>>t;
 while(t--)
 {
     cin>>u>>d>>m>>n;
     long long int g=(pow(u,d))%1000000007;
     cout<<g<<"\n";
 }
return 0;
}
