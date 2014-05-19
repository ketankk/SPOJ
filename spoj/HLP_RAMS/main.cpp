#include <iostream>
#include<math.h>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
       long long k,l, n,count=0;
    cin>>n;
    k=n;
    while(n>0){
        if(n&1)
            count++;
        n=n>>1;


    }
l=pow(2,count);
    cout<<k+1-l<<"  "<<l<<"\n";
}    return 0;
}
