#include <iostream>


using namespace std;

int memo[101][101];

long long int ncr(long int n,long long int r)
{
   long long int ans;
if(n<r)
        return 0;

if(memo[n][r]!=0)
return memo[n][r];

ans=(ncr(n-1,r-1)+ncr(n-1,r))%10000007;
memo[n][r]=ans;
return ans;}
int main()
{
long long int n,r;
    cin>>n>>r;
    if(n<r)
        cout<<"-1\n";
    else if(n==r)
        cout<<"1\n";
    else
    {for(int i=0;i<101;i++)
         for(int j=0;j<101;j++)
                {memo[i][j]=0;
                memo[i][1]=i;}
        long long int k=ncr(n-1,n-r)%10000007;
    cout<<k<<"\n";}

   return 0;
}
