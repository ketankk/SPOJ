#include<stdio.h>
typedef long long k64;
k64 merge(int a[],int p,int q,int r)
{
     int i,n1=q-p+1,n2=r-q;
     int L[n1],R[n2];
     for(i=0;i<n1;i++)
             L[i]=a[p+i];
     for(i=0;i<n2;i++)
             R[i]=a[q+i+1];
     int j=0,k=0;
     i=p;
     k64 inversion=0;
     while((j<n1)||(k<n2))
     {
                          if((j<n1)&&(k<n2))
                          {
                                            if(L[j]<=R[k])
                                                          a[i++]=L[j++];
                                            else
                                            {
                                                          a[i++]=R[k++];
                                                          inversion+=(n1-j);
                                            }
                          }
                          else if(j<n1)
                               a[i++]=L[j++];
                          else
                              a[i++]=R[k++];
     }
     return inversion;
}
k64 merge_sort(int a[],int p,int r)
{
    k64 inv=0;
     if(p<r)
     {
             int q=(p+r)/2;
             inv+=merge_sort(a,p,q);
             inv+=merge_sort(a,q+1,r);
             inv+=merge(a,p,q,r);
     }
     return inv;
}
int main()
{
    int t,n,a[200001],i,j;
    k64 ans;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              for(i=0;i<n;i++)
                              scanf("%d",&a[i]);
              ans=merge_sort(a,0,n-1);
              printf("%lld\n",ans);
    }
    return 0;
}
