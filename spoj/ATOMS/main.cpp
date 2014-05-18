#include <iostream>

using namespace std;
#include<math.h>
int main()
{
  unsigned long long int a,c,b,p,count;
cin>>p;
while(p--)

{count=1;
    cin>>a>>b>>c;
    while(1)
    {
        if(a*pow(b,count)>c)
           break;

               count++;


    }
    cout<<count-1<<"\n";
}
        return 0;
}
