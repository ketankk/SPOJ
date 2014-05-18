#include <iostream>
#include<math.h>

using namespace std;

int main()
{int n;
long long int k;
cin>>n;
if(n==0)
    cout<<"0\n";
    if(n==1)
        cout<<"3\n";
    else{
k=3+pow(2,n);
cout<<k<<"\n";}
return 0;
}
