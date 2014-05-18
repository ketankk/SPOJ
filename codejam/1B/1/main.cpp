#include <iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char str[n+5][102];
    int str1[n+5][102];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];

    }
    for(int j=0;j<n;j++)
    {
        int count =1;

        for(int i=0,k=0;i<strlen(str[j])&&k<2;i++)
        {
            if(str[j][i+1]==str[j][i])count++;
            else{str1[j][k]=count;
                count=1;
            k++;}
        }

    }
   /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<str1[i][j]<<"\t";
        }
        cout<<"\n";
    }*/
    int mid,result=0;
    int a[n+5];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
                a[j]=str1[j][i];
               // cout<<a[j]<<"\t";
        }
        //cout<<"\n";
        sort(a,a+n);
        mid=a[(n-1)/2];
        cout<<mid<<"\n";
        for(int j=0;j<n;j++)
        {
                result+=abs(a[j]-mid);//=str1[i][j];
        }
    }
    cout<<result<<"\n";





   /*  for(int i=0;i<n;i++)
    {
        cout<<str[i]<<"\n";
    }*/
    //cout<<str[1][2];

    //cin>>str;

}    return 0;
}
