#include <iostream>

using namespace std;

int LIS(int a[],int n)
{
    int lis[n+5];
    int maxm=0,i,j;
    for(i=0;i<n;i++)
        {//cout<<a[i]<<"\n";
            lis[i]=1;
        }
    for(i=0;i<n;i++)
        {for(j=0;j<i;j++)
        if((lis[i]<lis[j]+1)&&(a[i]>=a[j]))
        lis[i]=lis[i]+1;
        }
    for(i=0;i<n;i++)
        {
            //cout<<lis[i]<<"\n";
            maxm=max(maxm,lis[i]);
        }
        return maxm;
}

int main()
{ int t;
cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n+5],b[n+5];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                //int temp;
                if((a[j]==b[j])&&(a[j+1]==b[j+1]))count++;
                if(a[j]>=a[j+1])
                {
                    int temp1=a[j],temp2=b[j];
                    a[j]=a[j+1];
                    b[j]=b[j+1];
                    a[j+1]=temp1;
                    b[j+1]=temp2;
                }
            }
        }
        /*for(int i=0;i<n;i++)cout<<a[i]<<"\t";
        cout<<"\n";
        for(int i=0;i<n;i++)cout<<b[i]<<"\t";
        cout<<"\n\n";*/
        cout<<LIS(b,n)<<"\n";
    }
     /*int a[100],n,i;
    cout << "Enter String\n";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];*/


    return 0;
}
