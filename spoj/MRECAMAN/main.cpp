#include <iostream>

using namespace std;
int recman(int n)
{
    bool arr[1000]={0};
    arr[0]=0;
    if(n==0)
        return 0;
    else{
            int k=recman(n-1)-n;
            if(recman(n-1)-n<=0||arr[recman(n-1)-n]==1)
            k=recman(n-1)+n;
             arr[k]=1;
             return k;
         }

}

int main()
{  int n,y;
cin>>y;
while(y--)
{
cin>>n;
cout<<recman(n)<<"\n";
}    return 0;
}
