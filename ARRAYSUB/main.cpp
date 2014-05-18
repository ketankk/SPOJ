#include <iostream>
#include<math.h>

using namespace std;

int getmid(int ss,int se)
{
    return ss+(se-ss)/2;
}



int getSumUtil(int *st,int ss,int se,int qs,int qe,int index)

{
   if(qs<=ss&&qe>=se)
        return st[index];

   if(se<qs||ss>qe)
    return 0;

   int mid =getmid(ss,se);
   return max(getSumUtil(st,ss,mid,qs,qe,2*index+1),getSumUtil(st,mid+1,se,qs,qe,2*index+2));
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
    st[si] = max(constructSTUtil(arr,ss,mid,st,si*2+1),constructSTUtil(arr,mid+1,se,st,si*2+2));
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
int n,k;
cin>>n;
int a[n+2];


for(int i=0;i<n;i++)
    cin>>a[i];
    int *st = constructST(a,n);

cin>>k;

for(int j=0;j<=n-k;j++)
   cout<<getsum(st,n,j,j+k-1)<<" ";
  cout<<"\n";



    return 0;
}
