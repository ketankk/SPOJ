#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    long long int num,temp,n,i,j,a,k,rem;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&num);
        temp=0,n=0;
        while(temp<num)
        {
            n=n+1;
            temp=pow(2,n+1)-2;
        }
        temp=pow(2,n)-2;
        a=num-temp-1;
        char str[100000];
        int k=-1;
        while(a>0)
        {
            rem=a%2;
            k=k+1;
            str[k]=rem+'0';
            a=a/2;
        }


        j=n-k-1;
       for(i=1;i<=j;i++)
            printf("5");
        for(i=k;i>=0;i--){
            if(str[i]=='0')
                printf("5");
            else
                printf("6");
        }
        printf("\n");
    }
    return 0;
}
