
#include<stdio.h>
#include<math.h>
#include<iostream>
 using namespace std;
int main()
{
 long int t;
 long long int  ans,n;
 cin>>t;
 while(t--)
 {
  ans=0;
  cin>>n;
  if(n<3)
   printf("1\n");
  else{
  ans=ceil(log10(2*3.14159265358979323*n)/2 + n*log10(n/2.7182818284590452353));
  cout<<ans<<"\n";
  }
 }
 return 0;
}
