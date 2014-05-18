#include <iostream>

using namespace std;

int main()
{ long int a,b,c;
while(true)
{

cin>>a>>b>>c;
if(a==0&&b==0&&c==0)
    break;
if(b*b==a*c)
        cout<<"GP "<<c*c/b<<"\n";
else cout<<"AP "<<2*c-b<<"\n";}
return 0;
}
