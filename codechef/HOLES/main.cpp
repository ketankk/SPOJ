#include <iostream>

using namespace std;

int holes(char ch)
{
    if(ch=='B')
        return 2;
    if((ch=='A')||(ch=='D')||(ch=='O')||(ch=='P')||(ch=='Q')||(ch=='R'))
        return 1;
    else return 0;
}
int main()
{ int t;

cin>>t;
while(t--)
{
    char ch[202];
    int sum=0,i=0;

    cin>>ch;
while(ch[i]!='\0')
{
 sum=sum+holes(ch[i]);
 i++;
}
cout<<sum<<"\n";
}return 0;
}
