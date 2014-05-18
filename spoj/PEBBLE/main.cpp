#include <stdio.h>
#include<string.h>



int main()
{int k=1;

char a[1002];

while((scanf("%s",&a))!=EOF)
{
int count=0;
int n=strlen(a);

if(a[0]=='1')
    count++;
for(int i=0;i<n-1;i++)
    if(a[i+1]!=a[i])
        count++;
   printf("Game #%d: %d\n",k,count);
   k++;}
return 0;
}

