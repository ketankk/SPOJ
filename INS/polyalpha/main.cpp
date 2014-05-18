
#include<stdio.h>
#include<string.h>


char pt[40]={'\0'},key[40]={'\0'},ct[40]={'\0'},pta[40]={'\0'},k[40]={'\0'};
int i,j;      // global values

int main()
{
            printf("\nEnter the Plain text:\n");
            gets(pt);

            printf("\nEnter the key:\n");
            gets(k);


            printf("The convergen matrix\n");
            printf("\n   ");
            for(j=97;j<=122;j++)
            {
                        printf(" %c",j);
            }

            printf("\n--------------------------------------------------------\n");
            for(i=97;i<=122;i++)
            {
                        printf("%c |",i);
                        for(j=97;j<=122;j++)
                        {

                                    if(((i+j))>219)
                                    {

                                                printf(" %c",((i+j)-155));
                                    }
                                    else
                                    {
                                                printf(" %c",((i+j)-129));
                                    }
                        }
                        printf("\n");
            }
            // for keyword
            j=0;
            for(i=0;i<strlen(pt);i++)
            {
                        key[i]=k[j];
                        if(j==(strlen(k)-1))
                        {
                                    j=0;
                        }
                        else
                        {
                                    j++;
                        }
            }
            for(i=0;i<(strlen(pt)-1);i++);
            k[i]='\0';
            printf("\nThe encrypted text is:\n");
            // encryption
            for(i=0;i<strlen(pt);i++)
            {
                        if(97<=(int)pt[i] && (int)pt[i]<=122)
                        {

                                    if(((int)pt[i]+(int)key[i])>219)
                                    {
                                                ct[i]=(int)pt[i]+(int)key[i]-123;
                                    }
                                    else
                                    {
                                                ct[i]=(int)pt[i]+(int)key[i]-97;
                                    }
                                    printf("%c",(ct[i]-32));
                        }
                        else
                        {
                                    ct[i]=pt[i];
                                    printf("%c",pt[i]);
                        }
            }
            // decryption
            printf("\n\nDecrypted text is:\n");
            for(i=0;i<strlen(ct);i++)
            {
                        if(97<=(int)ct[i] && (int)ct[i]<=122)
                        {

                                    if(((int)ct[i]-(int)key[i])<0)
                                    {
                                                pta[i]=((int)ct[i]-(int)key[i])+123;
                                    }
                                    else
                                    {
                                                pta[i]=(int)ct[i]-(int)key[i]+97;
                                    }
                                    printf("%c",pta[i]);
                        }
                        else
                        {
                                    pta[i]=ct[i];
                                    printf("%c",pta[i]);
                        }
            }
            return 0;
}
