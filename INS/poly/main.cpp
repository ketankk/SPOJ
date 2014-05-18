#include<stdio.h>
int main()
{
 int i,j,arr[25][1],sum=0,temp[25][25],l;
 	char txt[25];
 	printf("\nEnter the string : ");
 	scanf("%s",txt);
 for(i=0;i<25;i++)
 	{
  		if(txt[i]>=97 && txt[i]<122) {}
  		else
  		{
   		l=i;
  		 break;
  		}
 	}
 	for(i=0;i<l;i++)
 	{
  		txt[i]=txt[i]-'a';
 	}
 	printf("\nEnter matrix\n");
 	for(i=0;i<l-2;i++)
 	{
  		for(j=0;j<l-2;j++)
            scanf("%d",&temp[i][j]);

 	}
 	for(i=0;i<l;i++)
 	{
  		sum=0;
  		for(j=0;j<l;j++)
        sum+=temp[i][j]*(int)txt[j];

  		arr[i][0]=sum;
 	}printf("Encrypted text\n");
 	for(i=0;i<l;i++)
        printf(" %c",((arr[i][0])%26)+97);

 	return 0;
}
