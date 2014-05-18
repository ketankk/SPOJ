#include <iostream>
#include<math.h>
#include<stdio.h>
#define MAX 1000000002
using namespace std;

int getmid(int ss,int se)
{
    return ss+(se-ss)>>1;
}



int getSumUtil(int *st,int ss,int se,int qs,int qe,int index)

{
   if(qs<=ss&&qe>=se)
        return st[index];

   if(se<qs||ss>qe)
    return MAX;

   int mid =getmid(ss,se);
   return min(getSumUtil(st,ss,mid,qs,qe,2*index+1),getSumUtil(st,mid+1,se,qs,qe,2*index+2));
}

int getsum(int *st,int n,int qs,int qe)
{
   /* if(qs>qe||qe>n-1||qs<0)
        {cout<<"Invalid";
    return -1;}*/
    return getSumUtil(st,0,n-1,qs,qe,0);
}

int constructSTUtil(int arr[],int ss,int se,int *st,int si)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return arr[ss];
    }
    int mid=getmid(ss,se);
    st[si] = min(constructSTUtil(arr,ss,mid,st,si*2+1),constructSTUtil(arr,mid+1,se,st,si*2+2));
    return st[si];


}


int *constructST(int a[],int n)
{
    int x = (int)ceil(log2(n));
    int max_size= pow(2,x+1)-1;
    int *st = new int[max_size];

    constructSTUtil(a,0,n-1,st,0);
    return st;


}


int main()
{
    int t;
    scanf("%d",&t);
       int l=t;
    while(t--){
int n,q,k1,k2;
scanf("%d%d",&n,&q);
int a[n+2];

for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *st = constructST(a,n);

    printf("Scenario #%d:\n",l-t);
while(q--)
{cin>>k1>>k2;
  printf("%d \n",getsum(st,n,k1-1,k2-1));
}
    }

    return 0;
}


