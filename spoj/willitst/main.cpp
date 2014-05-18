#include <iostream>
#include<math.h>

using namespace std;

int main()
{  int i=0;
   long long int n;
   cin>>n;
   if(n==0||n==1)
    cout<<"TAK\n";
while(n>1)
  {
      if(n%2!=0)
        {i=1;
       break;}
    if(n%2==0)
    n=n/2;

}
if(i==1)
    cout<<"NIE\n";
if(i==0)
    cout<<"TAK\n";
    return 0;
}
