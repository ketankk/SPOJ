//python code
import math
while(True):
    s=raw_input()
    str=s.split(' ')
    n=int(str[0])
    r=int(str[1])
    if(n==0 & r==0):
        break;
    else:
        ans=(n*(pow(n,r)-1)/(n-1))%1000000007
        print (ans)

/*#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    while(1)
    {
    double i,m,n,sum=0;
    int sum1;
cin>>m>>n;
if(m==0&&n==0)
    break;
else{
for(i=1;i<=n;i++)
        sum=sum+pow(m,i);
       // sum=fmod(sum,1000000007);
        sum1=sum;

cout<<sum1<<"\n";
}}*/

return 0;

}
