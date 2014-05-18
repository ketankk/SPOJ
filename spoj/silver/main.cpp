#include <iostream>

using namespace std;

int main()
{
int n;
while(1)
{
cin>>n;
if(n==0)
    break;
int count=0;
while(n>0)
{
    n/=2;
    count++;
}
cout<<count-1<<"\n";
}
 return 0;
}
