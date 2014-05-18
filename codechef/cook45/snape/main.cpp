#include <iostream>
#include<math.h>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
        int b,bs;
    cin>>b>>bs;
    cout<<sqrtf(bs*bs-b*b)<<" "<<sqrtf(bs*bs+b*b)<<"\n";



}    return 0;
}
