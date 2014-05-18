#include <iostream>
using namespace std;main(){int i,t,n,j,maxm,k[101][101]={0};cin>>t;while(t--){cin>>n;maxm=0;for(i=1;i<=n;i++)for(j=1;j<=i;j++){cin>>k[i][j];k[i][j]=k[i][j]+max(k[i-1][j],k[i-1][j-1]);maxm=max(maxm,k[i][j]);}cout<<maxm<<"\n";}}
