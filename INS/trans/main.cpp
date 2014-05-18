/*
Transposition
*/

#include <iostream>

using namespace std;
int encrypt(char str[100])
{   char temp[10][10];



    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    {
        if(str[i+j]!='\0')
        temp[i][j]=str[j+i];

    }  int i=0,j=0;
    for(i=0;i<5;i++)
    for(j=0;temp[i][j]!='\0';j++)
    cout<<temp[i][j];
    return 0;
}
int main()
{  char ch;
int ch2;
char str[100];

cout<<"\t\t--Transposition cipher--\n\t\t---Without KEY---\n";
    do {

        cout<<"Enter Code to Crypt/Dcrypt in UPPERCASE only\n";
        cin>>str;

        cout<<"Press 1 for Encryption\npress 2 for Decryption\n";
        cin>>ch2;
        switch(ch2)
        {
        case 1:
            encrypt(str);
            break;
        case 2:
            //dcrypt(str);
            break;
        default:
            break;
        }
        cout << "Enter Your choice y/n\n";
    cin>>ch;
    if(ch=='N') break;
        } while(ch!='n');}
