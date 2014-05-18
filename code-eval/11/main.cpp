#include <iostream>
#include <fstream>
int a[300][300],p[300][300];
using namespace std;
int lol;
int family(int i,int j,int count,int n,int m)
{
     int no=0,n3=0,n4=0,n1=0,n2=0;
    if(a[i][j]==1 && p[i][j]==0)
    {
       int s=i+1,d=j+1;
        no=no+1;
        p[i][j]=count;
        if((s)<n && (j<m) && j>=0)
        {
            n1=family(i+1,j,count,n,m);
        }
        else
        {
            n1=0;
        }
        if((i<n) && (d<m) && i>=0)
        {
            n2=family(i,j+1,count,n,m);
        }
        else
        {
            n2=0;
        }
        if(i-1>=0 && j>=0 && j<m)
        {
            n3=family(i-1,j,count,n,m);
        }
        else
        {
            n3=0;
        }
        if(j-1>=0 && i>=0 && i<n)
        {
            n4=family(i,j-1,count,n,m);
        }
        else
        {
            n4=0;
        }
        return no+n1+n2+n3+n4;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n=0,m=0;
    cin>>n>>m;
    while(1)
    {
        if(n==0 && m==0)
        {
            break;
        }
        else
            {
               /* a[n][m]={0};
                p[n][m]={0};*/
                for(int u=0;u<260;u++)
                {
                    for(int w=0;w<260;w++)
                    {
                        p[u][w]=0;
                        a[u][w]=0;
                    }
                }
                int kill[100000]={0};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        cin>>a[i][j];
                    }
                }
                 int k=0,count=1;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        k=family(i,j,count,n,m);
                       if(k>0)
                       {
                           kill[count]=k;
                           count=count+1;
                       }
                    }
                }
                /*if(count==0 || count==1)
                {
                    cout<<"chu="<<count<<"\n";
                }
                else{*/
                for(int y=1;y<count;y++)
                {
                    cout<<y<<" "<<kill[y]<<"\n";
                }//}
            }
        cin>>n>>m;
    }
    return 0;
}
