#include <iostream>
#include<math.h>

using namespace std;

void psycho(long long int n)
{ long long int k=0,count=0,i;
    while (n%2 == 0)
    {
       k++;
        n = n/2;

    }
    if(k%2==0&&k>0)
        count++;
    else count--;
    for (i = 3; i <= sqrt(n); i = i+2)
    {k=0;
        while (n%i == 0)
        {
            k++;
            n = n/i;

        }
         if(k%2==0&&k>0)
        count++;
    else count--;

    }
    if(count>0) cout<<"Psycho Number\n";else cout<<"Ordinary Number\n";
}



int main()
{ long long int t;
cin>>t;
while(t--)
{
 long long  int n;
cin>>n;
if(n==1)
    cout<<"Ordinary Number\n";
else
psycho(n);
}
    return 0;
}
