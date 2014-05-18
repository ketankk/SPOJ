#include <iostream>
#include<math.h>

using namespace std;

int main()
{  int t,sum=0;
int m1,m2,n1,n2,m,n;
   cin>>t;
   while(t--)
   {
     cin>>m1>>n1>>m2>>n2;
     if(m1>m2)
        m=m1-m2;
     else m=m2-m1;
     if(n1>n2)
        n=n1-n2;
     else n=n2-n1;
     sum=sum+ m*n;
     cout<<sum<<endl;
   }cout<<sum;
    return 0;
}
