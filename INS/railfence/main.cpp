#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()

{
            int i,j=0,d,k=0;
            char p[50],ct[50][50];
            printf("Enter the plain text:\n");
            gets(p);
            printf("\nEnter the depth in the integer:");
            scanf("%d",&d);
            //declare null for empty array values
            for(i=0;i<50;i++)
            {
                        for(j=0;j<50;j++)
                        {
                                    ct[i][j]='\0';
                        }
            }
            k=0;
       //loop up to string lenght of the pliantext
            {
            for(i=0;i<strlen(p);i++)
            {
                        for(j=0;j<d;j++)
                        {
                                    if(k<=strlen(p))
                               ct[i][j]=p[k];
                                    k++;
                        }
                        ct[i][j]='\0';


                        }
            }

            for(i=0;i<d;i++)
            {
                        for(j=0;j<strlen(p);j++)
                        {

                                    if(ct[j][i]!='\0')
                                       {
                                           printf("%c",ct[j][i]);
                                       }
                        }

                        printf("\n");
            }
            // Read the text
            printf("\nThe encrypted text is:\n");
            for(i=0;i<d;i++)
            {
                        for(j=0;j<strlen(p);j++)
                        {
                                    if(ct[j][i]!='\0')
                                    printf("%c",ct[j][i]);
                        }
            }

            return 0;
}
