#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{int m,n,a[25][25]={0};
    cin>>m>>n;
    char ch;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
    {
        cin>>ch;
        if(ch=='*')
            a[i][j]=1;
    }int temp=0;
    for(int i=0;i<m;i++)
        for(int j=n-1;j>0;j++)
    {
             if(a[i][j]==1)
            {temp[i]=1; break;  }
    }
}
        return 0;
}
