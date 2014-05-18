#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
        {
     long long int r1,r2,r3;
    cin>>r1>>r2>>r3;

double j;
   j=(r1*r2*r3)/((r1*r2+r2*r3+r3*r1)+2*(sqrt((r1*r2*r3)*(r1+r2+r3))));

cout<<setprecision(8)<<j<<"\n";
        }
   return 0;
}
