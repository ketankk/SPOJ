#include <iostream>

using namespace std;

long long int gcd(long long int a,long long int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
   long long int w,h;
while(1)
{
cin>>w>>h;
if(w==0&&h==0)
        break;
  long long int t=gcd(w,h);
  t=(w*h)/(t*t);
  cout<<t<<"\n";
}
return 0;
}
