#include <iostream>

using namespace std;

int main()
{
char ch[200002];
int k,t;

cin>>t;
while(t--)
{
    cin>>k;
    cin>>ch;
    int i=0;
if(k<26){
    while(ch[i]!='\0')
    {  if(ch[i]=='.')
    ch[i]=' ';
       else ch[i]=(ch[i]+k);
       if(ch[i]>122)
               ch[i]=ch[i]-26;
      else if(ch[i]>90&&ch[i]<97)
      ch[i]=ch[i]-26;

       i++;
    }
    cout<<ch<<"\n";
    }
else

    {
        i=0;
while(ch[i]!='\0')

{

         if(ch[i]=='.')
        ch[i]=' ';
       else ch[i]=(ch[i]+k-25);
       if(ch[i]>122&&ch[i]>96)
               ch[i]=ch[i]-26;
      else if(ch[i]>90&&ch[i]<97)
      ch[i]=ch[i]-26;
i++;

}i=0;
    while(ch[i]!='\0')
    {
    if(ch[i]!=' ')
    {
        if(ch[i]<91)
            ch[i]=ch[i]+32;
        else ch[i]=ch[i]-32;
    }i++;
    }
    cout<<ch<<"\n";
    }



}
    return 0;
}
