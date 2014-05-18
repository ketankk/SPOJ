#include<stdio.h>
#include<string.h>
int main()
{
     char str[100],temp[50][100];
    int i,j=0,k=0,l,n;
    printf("Enter the plain text:\n");
    scanf("%s",str);
    printf("Enter the no of columns: ");
    scanf("%d",&n);
    l=strlen(str);

    printf("%c ",str[0]);
    temp[0][0]=str[0];
    k=1;
    for(i=1;i<l;i++)
    {
      if(i%n==0)
      {printf("\n");j++;k=0;}
      temp[j][k++]=str[i];
      printf("%c ",str[i]);
    }
    temp[j][k]='\0';
    printf("\nCipher text is: ");
    for(i=0;i<n;i++)
    {
      for(k=0;k<j+1;k++)
        printf("%c",temp[k][i]);
    }
    return 0;
}
