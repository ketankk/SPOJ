#include <iostream>

using namespace std;

int rec(int n)
{

    if(n==1)
        return 1;
    else return rec(n-1)+1;
}
int main()
{
int n;
cin>>n;
cout<<rec(n);
    return 0;
}
