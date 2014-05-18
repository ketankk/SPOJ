#include <iostream>

using namespace std;
int goodgirl(int n,int k)
  {

      if (n==1)
       return 1;
       else
   return ((goodgirl(n-1,k))+k)%n;
  }

int main()
{   int n,k;
    cout << "Hello world!" << endl;
    cin>>n;
    int r=goodgirl(n,2);
    cout<<r<<"\n";
    return 0;
}
