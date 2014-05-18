#include <iostream>
#include<string.h>

using namespace std;

int rev(int n)
{   int no=0,k;
    while(n>0)
    {
        k=n%10;
        no= no*10+k;
        n=n/10;
    }
    return no;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        char str[502],key[7];
        cin>>key;
        cin>>str;
        l=strlen(str);
        int lk=strlen(key);
        int i=0,j=0,temp=0;
        while(str[i]!='\0')
        { int m;
          if(temp==0)
            {m=key[j]-'0';
            j++;
            cout<<key[j-1]<<" "<<m<<" "<<j<<"\n";

            }

             if(temp==1)
                {
                j--;
                m=key[j]-'0';
                cout<<key[j]<<" "<<m<<" "<<j<<"\n";
                }if(j==lk)
                 temp=1;
                 else if(j==0)
                    temp==0;
                    cout<<str[i]<<" " <<m<<"\n";

          str[i]=(((str[i]-m-97+26)%26)+97);

          i++;

            }


        for(int j=0;j<l;j++)
        cout<<str[j];
        cout<<"\n";
        }

        return 0;
}
