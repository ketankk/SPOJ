#include <iostream>

using namespace std;

int main()
{
long long int d,f,b,m;
while(1)
{
cin>>d>>f>>b>>m;
if(d==0&&f==0&&b==0&&m==0)
    break;
f=(f*(f+1)/2)+1;
d=(d-f*b)-m;
if(d>0)

cout<<"Farmer Cream will have "<<m+d<<" Bsf to spend.\n";
else
    cout<<"The firm is trying to bankrupt Farmer Cream by "<<-1*d<<" Bsf.\n";

}
    return 0;
}
