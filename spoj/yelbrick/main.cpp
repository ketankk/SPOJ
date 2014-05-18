#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
while(1)
{  int n,a[1000];
    cin>>n;
    if(n==0)
        break;
    while(n--)
    {
        cin>>a>>b>>c;
        k=gcd(b,c);
        if(k<a)
        k=gcd(k,a);
        else k=gcd(a,k);
        arr[n]=k;

    }
}    return 0;
}
