#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
#include<time.h>
using namespace std;

#include "petter-color.h"
#include "rubiks.h"

void instructions();

int main()
{
	srand(time(NULL));

	cube Rubiks;
	string s;

	bool frontView=true;

	while (1)
	{
		system("CLS");

		if (frontView)
			Rubiks.printfront();
		else
			Rubiks.printAll();

		cout<<endl<<"Type command or 'i' for instructions"<<endl<<">";
		cin>>s;

		if (s=="i" || s=="I")
		{
			instructions();
		}
		else if (toupper(s[0])=='U' || toupper(s[0])=='D' || toupper(s[0])=='L'
			|| toupper(s[0])=='R')
		{
			Rubiks.rotate(s[0]);
		}
		else if (s=="mix" || s=="MIX")
		{
			Rubiks.mix();
		}
		else if (s=="v" || s=="V")
			frontView=!frontView;
		else
			Rubiks.twist(s);

	}
	return 0;
}

void instructions()
{
	cout<<endl;
	cout<<"To rotate cube type u,d,l, or r to rotate up, down, left, or right."<<endl;
	cout<<endl;
	cout<<"To twist a row or column, write the letter or number followed"<<endl;
	cout<<"by u,d,r, or l.  ";
	cout<<"For example, to twist A up, type 'au'.  To twist 2 left"<<endl<<"type '2l'"<<endl;
	cout<<endl;
	cout<<"To randomly mix the cube type 'mix'"<<endl;
	cout<<endl;
	cout<<"To change view from front only to all six sides or vice versa, type 'v'"<<endl;
	cout<<"All six sides view is in the order back,top,left,front,right,bottom"<<endl;
	cout<<endl;
	cout<<"Press a key to continue"<<endl;
	getch();
}