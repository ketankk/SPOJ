#include <iostream>
#include <string.h>
#include <stdio.h>
#include<conio.h>
using namespace std;
int main()
{
char s[50],A[30],B[30];
int a=0,b=0;
cout <<"\nEnter plaintext: ";
gets(s);
int len=strlen(s),j=0;
for(int i=0;i<len;i++)
    {

        if(isspace(s[i]))
            {
                j=i;
            for(;j<len-1;j++)
                s[j] = s[j+1];
                if(i!=j)
                {
                    s[j] = '\0';
                        len--;
                }
            }
    }int n;
    cout<<"\nEnter Key ";
    cin>>n;
int x=strlen(s);
for(int i=0;i<x;i++)
{
                if(i%n==0)
                    A[a++]=s[i];

                else
                    B[b++]=s[i];

}

                A[a]='\0';
                B[b]='\0';
       strcat(A,B);
       cout<<"\nEncrypted text:\t";
       puts(A);

getch();
return 0;
}



