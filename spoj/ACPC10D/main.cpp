#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int a[n+5][5],cost[n+5][5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                cost[i][j]=0;
            }
        }
        cost[0][0]=a[0][0];
        cost[0][1]=a[0][1];
        cost[0][2]=a[0][2]+a[0][1];

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                //cin>>a[i][j];
                if(j==0)
                {
                    cost[i][j]=a[i][j]+min(cost[i-1][j],cost[i-1][j+1]);

                }
                if(j==1)
                {
                    cost[i][j]=a[i][j]+min(min(min(cost[i-1][j],cost[i-1][j+1]),cost[i-1][j-1]),cost[i][j-1]);
                }
                else
                {
                    cost[i][j]=a[i][j]+min(min(cost[i-1][j],cost[i-1][j-1]),cost[i][j-1]);
                }

            }
        }
        cout<<cost[n-1][1]<<"\n";


cin>>n;

    }
   // cout << "Hello world!" << endl;
    return 0;
}
