#include <iostream>

using namespace std;

int cir(int n,int k)
{

    if(n==1)
        return 1;
    return ((cir(n-1,k)+k-1)%n)+1;
}

int main()
{
int n,d,k;
while(1)
{cin>>n>>d;
if(n==0&&d==0)
break;
k=cir(n,d);
cout<<n<<" "<<d<<" "<<k<<"\n";
}
    return 0;
}
