#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
            int i,j,a3,a4,a;
            char a1[50],s1[100],a2[50],s2[100];

            printf("Enter 0 for capital or 1 for Small latters\n");

            scanf("%d",&a);

            switch(a)
            {
             case 0:
             {
                        for(i=0;i<26;i++)
                        {
                                    a1[i]=i+65;
                                    printf("%c",a1[i]);

                        }

            printf("\nEnter values for each charater,26 characters\n");

                        cin>>a2;

             printf("\nEnter the plain text,put'_'in place of space\n");
                             cin>>s1;






            a3=strlen(s1);
            printf("\nThe cipher text is: ");
            for(i=0;i<a3;i++)
                    {
                        for(j=0;j<26;j++)

                                    {       if(s1[i]=='_')
                                                   {printf(" ");i++;}

                                           else if(s1[i]==a1[j])
                                                    printf("%c",a2[j]);
                                    }
                        }

                            break;
                        }
              case 1:
              {
                        for(i=0;i<26;i++)
                        {
                                    a1[i]=i+97;
                                    printf("%c",a1[i]);

                        }

                        printf("\nEnter values for each character,26 characters\n");

                                 cin>>a2;



                         printf("\nEnter the plain text,put '_' in place of space\n");

                                    cin>>s2;

                            a4=strlen(s2);
                        printf("\nThe cipher text is:");

                        for(i=0;i<a4;i++)

                            {
                                for(j=0;j<26;j++)

                                           if(s2[i]=='_')
                                                printf(" ");
                                           else
                                               if(s2[i]==a1[j])
                                                    printf("%c",a2[j]);
                            }




              }

               }
return 0;

}
