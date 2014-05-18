#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
 char str[50],ch[50],z[50];
 int e,x,i;

 cout<<"Enter the string:\n";
 gets(str);

 x=strlen(str);
 for(i=0;i<x;i++)
 {
   if(str[i]!=' ')
   {
     e=str[i]+3-97;
     ch[i]=(e%26)+97;
   }
   else if(str[i]==' ')
   {
     ch[i]=' ';
   }
 }
  ch[i]='\0';
 cout<<"Encrypted text:  ";
 puts(ch);

 //decryption

  for(i=0;i<x;i++)
 {
   if(ch[i]!=' ')
   {
     e=ch[i]-3-97;
    { if(e<0)
     z[i]=((26+e)%26)+97;
     else
     z[i]=(e%26)+97;}
   }
   else if(ch[i]==' ')
   {
     z[i]=' ';
   }

 }
 z[i]='\0';
 cout<<"Decrypted text:  ";
 puts(z);

 return 0;
 }
