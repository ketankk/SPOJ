#include<iostream>
using namespace std;
int main()
{
int a,b,addition,difference,product,division,remainder;
cout<<"Enter 1st digit"<<endl;
cin>>a;
cout<<"Enter 2nd digit"<<endl;
cin>>b;
addition=a+b;
difference=a-b;
product=a*b;
division=a/b;
remainder=a%b;
cout<<"The addition is "<<addition<<endl<<endl;
cout<<"The subtraction is "<<difference<<endl<<endl;
cout<<"The Multiplication is "<<product<<endl<<endl;
cout<<"The division is "<<division<<endl<<endl;
cout<<"By dividing digit 1 by digit 2,the remainder is "<<remainder<<endl<<endl;
return 0;
}
