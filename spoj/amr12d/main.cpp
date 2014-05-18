#include <iostream>
#include<string.h>

using namespace std;

int main()
{
int t;
char ch[101];
cin>>t;
while(t--)
{ int i=0,l;
int temp=0;
    cin>>ch;
     l=strlen(ch);
         while(i<l)
    {
        if(ch[i]!=ch[l-1])
            temp=1;
        else i++;
            l--;
    }
    if(temp==0)
        cout<<"YES\n";
    else cout<<"NO\n";
}

    return 0;
}
