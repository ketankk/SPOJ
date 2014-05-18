#include <iostream>
#include<math.h>
using namespace std;

int main()
{ long long int t;
cin>>t;
while(t--)
    {
    long long int n;
cin>>n;
long long int k;
if(fmod(n,2)==0)
     k=(n/2)*(n/2);
else{
        cout<<n/2<<" "<<n/2+1;
k=(n/2)*((n/2)+1);}

cout<<k<<"\n";
}
return 0;
}
