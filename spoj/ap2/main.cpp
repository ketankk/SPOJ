#include <iostream>

using namespace std;

int main()
{
int t;

cin>>t;
while(t--)
{  long long int a,b,k,n,sum;
    cin>>a>>b>>sum;
    n=2*sum/(a+b);
    cout<<"\n"<<n<<"\n";
    k=(b-a)/(n-5);
    for(int i=-2;i<n-2;i++)
    cout<<(a+i*k)<<" ";
    cout<<"\n";


}
        return 0;
}
