#include<stdio.h>

int main()
{
int t,i,k,rem,j;
long long int n;
char s[50];
scanf("%d",&t);

while(t--)
    {
        k=0;
        scanf("%lld",&n);
        while(n>0)
                {
                rem=n%5;
                if(rem==0)
                n=(n/5)-1;
                else
                n=(n/5);
                if(rem==0)
                 s[k]='u';
                if(rem==1)
                 s[k]='m';
                 if(rem==2)
                    s[k]='a';
                if(rem==3)
                    s[k]='n';
                if(rem==4)
                s[k]='k';

                k++;
                }

        for(j=k-1;j>=0;j--)
        printf("%c",s[j]);
        printf("\n");
        }
return 0;
}


/*#include<stdio.h>
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
            temp=(pow(5,n+1)-2)/4;
        }
        temp=(pow(5,n)-2)/4;
        a=num-temp-1;
        char str[100000];
        int k=-1;
        while(a>0)
        {
            rem=a%5;
            k=k+1;
            str[k]=rem+'0';
            a=a/5;
        }


        j=n-k-1;
       for(i=1;i<=j;i++)
            printf("m");
        for(i=k;i>=0;i--){
            if(str[i]=='0')
                printf("m");
                else if(str[i]=='1')
                printf("a");
                else if(str[i]=='2')
                printf("n");
               else  if(str[i]=='3')
                printf("k");
                else
                printf("u");

        }
        printf("\n");
    }
    return 0;
}
*/
