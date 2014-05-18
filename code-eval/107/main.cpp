#include <iostream>
#include<string>

using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int f=1,i=1;
    while(s[0]!=s[i])
    {
    f++;
    i++;
    }
    cout<<f;
    return 0;
}
