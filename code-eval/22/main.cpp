#include <iostream>

using namespace std;

int main()
{ int c,n;
    int a=0,b=1;
    cin>>n;
  for(int i=0;i<n-1;i++)
  {
      c=a+b;
      a=b;
      b=c;
  }
  cout<<c;
    return 0;
}
