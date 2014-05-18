#include <iostream>

using namespace std;

int main()
{
float c;
while(1)
{
cin>>c;
if(c==0)
    break;
float i=2.0;
float sum=0.00;
while(c>sum)
{
    sum=sum+1/i;
    i=i+1.0;
}
cout<<i-2<<" card(s)\n";
}
   return 0;
}
