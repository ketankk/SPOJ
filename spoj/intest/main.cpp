#include <iostream>
#include<stdio>

using namespace std;

int main()
{
    register int n,k,t;
int count=0;
    scanf("%d",&n);
   scanf("%d",&k);
    while(n--)
{
    scanf("%d",&t);
    if(t%k==0)
        count++;

}cout<<count;
    return 0;
}
