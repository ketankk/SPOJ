#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char b[1000002];
    int test,i,flag,check,l,m,k;
    scanf("%d\n",&test);
    while(test--)
    {
        flag=1;
        gets(b);
        l=strlen(b);
        k=l>>1;
        check=0;
        for(i=0;i<l;i++)
        {
            if(b[i]!='9')
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            b[0]='1';
            for(i=1;i<l;i++)
            b[i]='0';
            b[l]='1';
            b[l+1]='\0';
            check=1;
        }
        flag=0;
        if(check!=1)
        {
            for(i=0;i<k;i++)
            {
                if(b[i]<b[l-1-i])
                flag=-1;
                else if(b[i]>b[l-1-i])
                flag=1;
                b[l-1-i]=b[i];
            }

            if(!(l&1))
            m=k-1;
            else m=k;
            if(flag==0||flag==-1)
            {
                i=0;
                while(b[m-i]=='9')
                {
                    b[m-i]='0';
                    b[l-1-m+i]='0';
                    i++;
                }

                b[m-i]++;
                b[l-1-m+i]=b[m-i];
        }
    }
    printf("%s\n",b);
    }
    return 0;
}
