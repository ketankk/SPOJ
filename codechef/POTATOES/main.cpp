#include <iostream>

using namespace std;
#define SIZE 3000
int main()
{
    int a[SIZE],i,j;

    for(i=0;i<SIZE;i++) a[i]= 0;

// int sq = sqrt(SIZE);

 for(i=4;i<=SIZE;i+=2) a[i] = 1;
 for(i=3;i*i<=SIZE;i+=2){

  if(a[i]==0) {
   for(j=2*i;j<=SIZE;j+=i) a[j]=1;
  }
 }

int t;
cin>>t;
while(t--){
        int x,y;
        cin>>x>>y;
        int k=x+y,count=0;
        while(a[++k]!=0){
           count++ ;
        }
        cout<<count+1<<"\n";
}
        return 0;
}
