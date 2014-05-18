#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
cin>>t;
while(t--)
{
    int l,p,c;

    cin>>l>>p>>c;
    int i=0;
    int fact=l;
    while(p>fact)
    {
        fact=l*pow(c,i);
        cout<<fact<<"\n ";
        i++;
    }cout<<i<<"\n";

}
    return 0;
}
