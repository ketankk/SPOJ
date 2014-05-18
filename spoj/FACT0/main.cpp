#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
//int a[100000]={0};

int pf(long long int n)
{ long int k=0;
    while (n%2 == 0)
    {
       k++;
        n = n/2;
    }
         if(k>0)
        cout<<"2^"<<k<<" ";
    for (int i = 3; i <= sqrt(n); i = i+2)
    {k=0;
        while (n%i == 0)
        {
            k++;
            n = n/i;

        }
        if(k!=0) cout<<i<<"^"<<k<<" ";

    }


    if (n > 2)
        printf ("%lld^1\n", n);
        if(n==1)
 cout<<"\n";
}

int main()
{ long long int n;

while(1)
{

cin>>n;
if(n==0)
    break;
pf(n);


}
return 0;
}
