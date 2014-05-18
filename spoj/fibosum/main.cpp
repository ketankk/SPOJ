#include<iostream>
#include <stdio.h>
#include<map>
using namespace std;

long long int fib(long long int n)
{
    static map<int,int> memo;
    // if(memo.count(n)>0)
    //return memo[n];
    if(n==1||n==0)
        return memo[n]=n;
    else {
            if(n%2==0)
            return memo[n]=(2*fib((n-1)/2)+fib(n/2))*fib(n/2);
            else return memo[n]=fib((n-1)/2)*fib((n-1)/2)+fib(n/2)*fib(n/2);}
}
int main()
{int t;
scanf("%d",&t);
while(t--){
long long int n,m;
long long int sum=0;
scanf("%lld%lld",&m,&n);
cout<<fib(m)<<" "<<fib(n);
sum=(1000000007+fib(n+2)-fib(m+1))%1000000007;
printf(" %lld\n",sum);}
    return 0;
}
/*unsigned long long fib_fn(int n)
{
	unsigned long long int fib[2][2]={{1,1},{1,0}}, ans[2][2]={{1,0},{0,1}}, temp[2][2]={{0,0},{0,0}};
	while(n)
	{
		if(n&1)
		{
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					temp[i][j]=0;
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					for(k=0;k<2;k++)
						temp[i][j]=(temp[i][j]+ans[i][k]*fib[k][j])%MOD;
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					ans[i][j]=temp[i][j];
		}
		for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					temp[i][j]=0;
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				for(k=0;k<2;k++)
					temp[i][j]=(temp[i][j]+fib[i][k]*fib[k][j])%MOD;
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
				fib[i][j]=temp[i][j];
		n>>1;

	}
	return (ans[0][1])%MOD;
}
*/
