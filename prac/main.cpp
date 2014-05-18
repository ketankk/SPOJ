#include <iostream>

using namespace std;

int main()
{int n,k1,k2,k3;
while(1)

{
    cin>>n;
    if(n==0)
        break;
    else{
    k1=n<<3;
     k2=n<<1;
   k3=n>>2;
    }
        cout<<" "<<k1<<" "<<k2<<" "<<k3<<"\n";
}
        return 0;
}
