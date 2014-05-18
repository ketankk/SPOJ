#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
char zeroes[9][15]={"ones","tens","hundred","thousand","thousand","lakh","lakh","crore","crore"};
char* singlechar(char a)
{ if(a=='1')
return "one";
if(a=='2')
return "two";
if(a=='3')
return "three";
if(a=='4')
return "four";
if(a=='5')
return "five";
if(a=='6')
return "six";
if(a=='7')
return "seven";
if(a=='9')
return "nine";
if(a=='8')
return "eight";
if(a=='0')
return "";
}
char* onecase(char a)
{ if(a=='1')
return "eleven";
if(a=='2')
return "twelve";
if(a=='3')
return "thirteen";
if(a=='4')
return "fourteen";
if(a=='5')
return "fifteen";
if(a=='6')
return "sixteen";
if(a=='7')
return "seventeen";
if(a=='9')
return "nineteen";
if(a=='8')
return "eighteen";
if(a=='0')
return "";
}

char* doublechar(char a)
{ if(a=='1')
return "" ;
if(a=='2')
return "twenty ";
if(a=='3')
return "thirty ";
if(a=='4')
return "fourty ";
if(a=='5')
return "fifty ";
if(a=='6')
return "sixty ";
if(a=='7')
return "seventy ";
if(a=='9')
return "ninety ";
if(a=='8')
return "eighty ";
if(a=='0')
return "";
}
int main()
{
    std::ifstream myfile("numbers.txt");
    ofstream ofile;
    ofile.open("cheque.txt");
   std::string number;

    while(!myfile.eof()) {

    int length,i,p;
    getline(myfile,number);
    length=number.size();
//char number[10];
/*for (int a=0;a<length;a++)
        {
            number[a]=number[a];
        }
        */
for( i=0;i<length-2;i++)
{p=i;
     if(strcmp(zeroes[length-i-1],zeroes[length-i-2])!=0)
ofile<< singlechar(number[i])<<" "<<zeroes[length-i-1]<<" " ;
else
{if(number[i]=='1')
ofile<<onecase(number[i++])<<" "<<zeroes[length-i-1]<<" ";
else
ofile<<doublechar(number[p])<<singlechar(number[++i])<<" "<<zeroes[length-i-1]<<" " ;
}
}
if(number[i]=='1')
ofile<<onecase(number[i+1])<<" "<<"rupees"<<"\n";
else
ofile<<doublechar(number[i])<<singlechar(number[i+1])<<" rupees\n";
  ofile << number << "\n";
}

    std::cin.get();
    return 0;
}
