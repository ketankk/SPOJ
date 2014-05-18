#include <iostream>

using namespace std;

int main()
{char ch[1003];
//while(1)

cin>>ch;
if(ch[0]=='*')
cout<<"";
else{
char temp=ch[0];
int i=0,c=0;
while(ch[i++]!='\0')
{
    if(ch[i]==' ')
    if((ch[i+1]!=temp)&&(ch[i+1]!=temp+32))
           c=1;
           if(c==1) break;

}
if(c==1)
    cout<<"N\n";
else cout<<"Y\n";}

    return 0;
}
