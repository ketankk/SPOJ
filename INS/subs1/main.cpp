/*
--Substitution cipher--
---Caesar  cipher---
*/


#include <iostream>

using namespace std;

int encrypt(char str[100],int key)
{ int i=0;
char temp[100];

    while(str[i]!='\0')
    {
        temp[i]=str[i]+key%26;
        if(temp[i]>90)
            temp[i]=temp[i]-26;
        str[i]=temp[i];
        i++;
    }
    cout<<str<<"\n";
    return 0;
}

int dcrypt(char str[100],int key)
{ int i=0;
char temp[100];

    while(str[i]!='\0')
    {
        temp[i]=str[i]-key%26;
        if(temp[i]<65)
            temp[i]=temp[i]+26;
        str[i]=temp[i];
        i++;
    }
    cout<<str<<"\n";
    return 0;
}


int main()
{  char ch;
int ch2,key;
char str[100];

cout<<"\t\t--Substitution cipher--\n\t\t---Caesar  cipher---\n";
    do {

        cout<<"Enter Code to Crypt/Dcrypt in UPPERCASE only\n";
        cin>>str;
        cout<<"Enter key\n";
        cin>>key;
        cout<<"Press 1 for Encryption\npress 2 for Decryption\n";
        cin>>ch2;
        switch(ch2)
        {
        case 1:
            encrypt(str,key);
            break;
        case 2:
            dcrypt(str,key);
            break;
        default:
            break;
        }
        cout << "Enter Your choice y/n\n";
    cin>>ch;
    if(ch=='N') break;
        } while(ch!='n');


    return 0;
}

