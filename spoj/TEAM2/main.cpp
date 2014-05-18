#include <iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{int a,b,c,d,t=1;
while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){

int arr[5],n=4;
arr[0]=a,arr[1]=b,arr[2]=c,arr[3]=d;
sort(arr,arr+4);
long int k=max(max(arr[0]+arr[3],arr[1]+arr[2]),max(arr[0]+arr[2],arr[1]+arr[3]));
printf("Case %d: %ld\n",t++,k);

}  return 0;
}
