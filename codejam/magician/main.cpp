#include <iostream>

using namespace std;

int main()
{
int t,l;
cin>>t;
l=t;
while(t--){
    int a,b;
    int p[5][5],q[5][5];
    cin>>a;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        cin>>p[i][j];
        int k,count=0;
    cin>>b;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        cin>>q[i][j];
        for(int i=0;i<4;i++)
        {for(int j=0;j<4;j++)

        {if(p[a-1][i]==q[b-1][j])
           {//cout<<p[a-1][i]<<" "<<q[b-1][j]<<"\n";
                count++;
            k=p[a-1][i];
        }
        }
        }
        if(count==1)
            cout<<"Case #"<<l-t<<": "<<k<<"\n";
        else if(count==0)
            cout<<"Case #"<<l-t<<": Volunteer cheated!\n";
else   if(count>1)          cout<<"Case #"<<l-t<<": Bad magician!\n";

}    return 0;
}
