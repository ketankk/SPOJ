#include <iostream>
#include<algorithm>

using namespace std;
/*int lex(char str2[])
{int i=0,j=0;
    while(str2[i]!='\0')
        a[j++]=str2[i++]
        sort
}*/
int main()
{int n;
cin>>n;
char str[100];
char a[30]={0};
char str2[25];
for(int i=0;i<n;i++)
{
    cin>>str;
int c=str[0]-'a';
a[c]++;
}
int i=0,j=0;
while(a[i]!='\0')
{if(a[i++]>1)
{
    char ch='a'+i;
    str2[j++]=ch;
    cout<<str2[j-1];
}
else cout<<"PREDAJA\n";
}
sort(str2,str2+j);
cout<<str2;
cout<<"\n";

return 0;
}
