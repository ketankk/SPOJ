#include <iostream>
#include<fstream>

using namespace std;

int main()
{
ifstream myfile("a.txt");
    ofstream ofile;
    ofile.open("b.txt");

    while(!myfile.eof()) {
   std::string number;

    int length,i,p;
    getline(myfile,number);
    cout<<number;
    ofile<<number;
    }
    return 0;
}
