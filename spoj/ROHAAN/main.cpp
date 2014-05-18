#include <iostream>

using namespace std;

int main()
{
int t,n,m;
cin>>t;
while(t--)
{  int a[60][2];
int count,m1,chk,i,j;
int x1,x2,y1,y2;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];

    while(m--)
    {
        cin>>x1>>y1>>x2>>y2;
        count=0;
        j=n;
        if(x1==x2||y1==y2)
            {
            if(x1==x2)
            {
                for(i=0;i<n;i++)
                    {
                    if(a[i][1]<=y2&&a[i][1]>=y1&&x1==a[i][0])
                      count++;
                    }
            }
            else if(y1==y2)
            {
                for(i=0;i<n;i++)
                   {
                        if(a[i][0]<=x2&&a[i][0]>=x1&&y1==a[i][1])
                    count++;}
            }

            }


            else
            {
        m1=(y2-y1)/(x2-x1);

        for(i=0;i<n;i++)
        {
            if(x1==a[i][0]&&y1==a[i][1])
                count++;
            else if(x1<a[i][0]&&y1<a[i][1]&&x2>=a[i][0]&&y2>=a[i][1]){
        chk=(a[i][1]-y1)/(a[i][0]-x1);

        if(chk==m1)
        count++;}
        }
        }
        cout<<count<<"\n";
    }

}
        return 0;
}
