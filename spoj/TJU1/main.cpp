#include <iostream>
#include<math.h>

using namespace std;


long long int pf(long long int n)
{ long long int i,k=0,fact=1;;
    while (n%2 == 0)
    {
       k++;
        n = n/2;
    }
         if(k>0)
fact=fact*(k+1);
for (i = 3; i <= sqrt(n); i = i+2)
    {k=0;
        while (n%i == 0)
        {
            k++;
            n = n/i;

        }
        if(k>0) fact=fact*(k+1);

    }


    if (n > 2)
        fact=fact*2;
        return fact;
}
int main()
{long long int a,b,i,sum=0;
while(1)
{
cin>>a>>b;
if(a==0&&b==0)
    break;
for(i=a;i<=b;i++)
sum=sum+pf(i);
cout<<sum<<"\n";
}
return 0;
}
