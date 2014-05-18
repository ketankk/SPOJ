#include <iostream>

using namespace std;
int gcd(int a ,int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{ int a,b,c,d,p,q,t;
//cin>>t;
//while(t--){
cin>>a>>b>>c>>d;
p=a+c;
q=b+d;
int k=gcd(p,q);
p=p/k;
q=q/k;
while(p/q)
    cout <<p<<"/"<<q<<"\n";
//}
    return 0;
}
