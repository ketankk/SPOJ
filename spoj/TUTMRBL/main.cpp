#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int pf(long long int n)
{ long int k=0,fact=1,b=n;
    cout<<n<<" = ";
    while (n%2 == 0)
    {
       k++;
        n = n/2;
    } fact=fact*(k+1);
         while(k--)
        cout<<"2 * ";
    for (int i = 3; i<=sqrt(n); i = i+2)
    {k=0;
        while (n%i == 0)
        {
            k++;
            n = n/i;

        }int y;
        fact=fact*(k+1);
        while(k--) {cout<<i;
        if(n>2)
        cout<<" * ";
        else break;}


    }


    if (n > 2)
        printf (" * %lld\n", n);
 printf("With %d marbles, %d different rectangles can be constructed.\n",b,fact);
}

int main()
{while(1)
{int n;
    cin>>n;
    if(n==0)
        break;
    pf(n);
}    return 0;
}
