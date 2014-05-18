#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int n,sum;
    while(true)
    {
    scanf("%d",&n);
    sum=0;
      if(n==0)
        break;
    for(int i=1;i<=n;i++)
    sum=sum+pow(i,2);
    printf("%d\n",sum);
    }
    return 0;
}
