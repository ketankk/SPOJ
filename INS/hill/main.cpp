#include<iostream>
#include<string.h>
using namespace std;
int main()
{ char ch,str[50],key[50];
int n,i,j,pt[3][3],count=0,keym[3][3],ct[3][3],k,hmph;
cout<<"Enter plaintext 9 characters\n";
cin>>str;
i=strlen(str);
if(strlen(str)<9)
{while(i<9)
str[i]='x';
i++;
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{pt[j][i]=str[count]-65;
count++;}
for(i=0;i<3;i++)
{cout<<"\n";
                for(j=0;j<3;j++)
{cout<<pt[i][j]<<"\t";}
}
cout<<"\n enter key (9 characters)";
cin>>key;
count=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{keym[i][j]=key[count]-65;
count++;}
for(i=0;i<3;i++)
{cout<<"\n";
for(j=0;j<3;j++)
{cout<<keym[i][j]<<"\t";}
}
hmph=0;
while(hmph<3)
{for(i=0;i<3;i++)
     {
          for(j=hmph;j <hmph+1;j++)
          {
               ct[i][j] = 0;
          for(k=0;k< 3;k++)
          {
               ct[i][j] = ct[i][j] + keym[i][k] * pt[k][j];
          }
          }
     }
hmph++; }
cout<<"\n ENCRYPTED TEXT IS   :   ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{               ct[j][i]=ct[j][i]%26+65;
              ch=(char)ct[j][i];
                cout<<ch;}
}
return 0;
}
