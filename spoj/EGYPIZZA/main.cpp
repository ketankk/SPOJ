#include <iostream>

using namespace std;

int main()
{ int n,i;
char a[5];
cin>>n;
float sum=0.0,a1,a2;
int b12=0,b14=0,b34=0;
for(i=0;i<n;i++)
    {
        cin>>a;
        a1=a[0]-'0';
        a2=a[2]-'0';
        if(a1==1&&a2==2)
             b12++;
        if(a1==1&&a2==4)
            b14++;
        if(a1==3&&a2==4)
                b34++;

    }
   int k=b14-(2*(b12%2)+b34);
    sum=b12/2+b34+b12%2;
    if(k>0)
        {if(k%4==0)
        sum=sum+k/4;
        else sum=sum+k/4+1;
        cout<<sum+1<<"\n";}
    else

    cout <<sum+1<<endl;
    return 0;
}
