#include <iostream>

using namespace std;

int main()
{
    int t=1,i=0;
    unsigned long long int a[11],b[11],m,n;
    while(t--)
    {
    cin>>m>>n;
    m=(m-n)/2;
    a[i]=m;
    b[i]=m+n;
    i++;

}
for(int i=0;i<2;i++)
cout<<b[i]<<"\n"<<a[i]<<"\n";

    return 0;
}

