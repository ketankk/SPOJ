
#include<iomanip>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<iostream>

using namespace std;
void welcome()
{

char r[200],s[5000];
strcpy(s,"\n\tWELCOME!!\n\n\t\tTO\n\n\t\t*****STUDENT'S DATA BASE MANAGEMENT SYSTEM*******\n\n\n\n\n\n\n\n\n\n");
strcpy(r,"\n\n\ta C++ PROJECT \n\tBY\n\n\t\tKETAN KUMAR KESHRI\n\n\t\t\t12 A\n\n\n");

int l=strlen(s);

cout<<"\n\n\n\t";

   for(int j=0;j<2;j++)

	for (int i=0;i<l;i++)
	{
	cout<<s[i];
	if(i==20)
	 {   cout<<"\n\n\n\n\n\n\n\t\t";}
//	delay(100);
	if(j==0)
	 {

	 cout<<"\n\t\t";
	 if(i==l-1)
	 cout<<"\n\n\n\n\n\n";
	 }
	/*if (i==l-1)
	 {
	 if(j==1)
//	 delay(2000);
}*/
	}

	for (int k=0;k<strlen(r);k++)
	{cout<<r[k];//sound(1000);nosound();delay(150);
	//if(k==strlen(r)-1)
	//delay(500);
	}

}

int menu(int first)
	{    char menu1[1000];
	int choice;
	strcpy(menu1,"\n\n\t\t\t****STUDENT'S DATA BASE SYSTEM****\n\t\t\t----------------------------------\n\t\n\n\t  1.Add Records\n\t  2.Show Records\n\t  3.Modify Records\n\t  4.Reset\n\t  5.Exit\n\n\t\t\tENTER CHOICE :");
	for(int i=0;i<strlen(menu1);i++)
	{cout<<menu1[i];
	/*if(first==0)
	delay(10);*/
	}
	cin>>choice;
	return(choice);

	}
struct s_date
{int dd,mm,yyyy;
};

class stu
{

int reg;
int stream;
float avg,marks[6];
s_date dob;
char sname[30],schoolname[80],fname[30],add[80],grade,std[4];

public:
stu()
{strcpy(std," ");    }
void calgrade()
{ avg=retavg();
if (avg<35 && avg>0)
	{grade='F';

	}
	 if (avg<50 && avg>35)
	{grade='E';

	}

if (avg<60 && avg>50)
	{grade='D';

	}

if (avg<70 && avg>60)
	{grade='C';

	}

if (avg<80 && avg>70)
	{grade='B';

	}


if (avg>80)
	{grade='A';

	}
}


float retavg()
	{
	float avg=(marks[1]+marks[2]+marks[3]+marks[4]+marks[5])/5;
	return(avg);
	}
int getreg()
{
return(reg);
}

void get();

void show();

void modify();

};

void stu::show()
{

	calgrade();
	cout<<"\n\n           The Student's Details Are: "<<endl<<endl;
	cout<<setw(27)<<"Name: "<<sname<<endl<<endl<<setw(27)<<"Reg no: "<<reg<<endl<<endl;
	cout<<setw(27)<<"Class: "<<std<<endl<<endl<<setw(27)<<"Date of Birth:"<<dob.dd<<"/"<<dob.mm<<"/"<<dob.yyyy<<endl<<endl<<setw(27)<<"Father's name :"<<fname<<endl<<setw(27)<<"Address: "<<add<<endl<<endl;
		   switch(stream)
	     {
	     case 1:

	     cout<<endl<<setw(20)<<"Eng:"<<marks[1];
	     cout<<endl<<setw(20)<<"C++/Economics:"<<marks[2];
	     cout<<endl<<setw(20)<<"Maths/Bio:"<<marks[3];
	     cout<<endl<<setw(20)<<"Chemistry:"<<marks[4];
	     cout<<endl<<setw(20)<<"Physics:"<<marks[5];
	     break;

	     case 2:
		  cout<<endl<<setw(20)<<"Eng:"<<marks[1];
	     cout<<endl<<setw(20)<<"C++/Economics:"<<     marks[2];
	     cout<<endl<<setw(20)<<"Maths:"     <<marks[3];
	     cout<<endl<<setw(20)<<"Accountancy:"     <<marks[4];
	     cout<<endl<<setw(20)<<"Bussiness Studies:"     <<marks[5];

	      break;
	     }
	     cout<<endl<<setw(20)<<"Average:"<<avg;
	     cout<<endl<<setw(20)<<"\tGrade:\t"<<grade<<endl;

}

void stu::get()                                       //long
{


	     cout<<"\n\nEnter reg no. of the student: ";
	     cin>>reg;
	     cout<<"\n\tEnter Name Of The Student :";
	     strcpy(sname,"");
	     gets(sname);
	     cout<<"\n\tEnter Class Of The Student :";
	     strcpy(std,"");
	     gets(std);

	      D:
		gotoxy(9,9);
		cprintf(" Date Of Birth:dd mm yyyy");
		gotoxy(24,9);
		cin>>dob.dd>>dob.mm>>dob.yyyy;
		if(dob.dd>31||dob.mm>12||dob.yyyy<1980)
		{gotoxy(24,12);
		cprintf("Invalid date, Enter again!!");
		sound(400);
		delay(500);
		nosound();
		gotoxy(24,12);
		cprintf("                           ");

		goto D;
		}
	     cout<<"\n\tName Of The Student's Father :";
	     strcpy(fname,"");
	     gets(fname);
	     cout<<"\n\tAddress Of The Student :";
	     strcpy(add,"");
	     gets(add);
	     cout<<"\n\tEnter Stream-code of the student (1.Science/2.Commerce) :";
	     A:
	     cin>>stream;
	     if ((stream<1)||(stream>2))
	     {
	     cout<<"\n\nWrong Entry, Enter Again!";

	     goto  A;
	     }
	     cout<<"\nEnter Marks In The Following Subjects:"<<endl;
	     switch(stream)
	     {
	     case 1:

	     cout<<endl<<setw(17)<<"Eng:"; cin>>marks[1];
	     cout<<endl<<setw(17)<<"C++/Economics:"; cin>>marks[2];
	     cout<<endl<<setw(17)<<"Maths/Bio:"; cin>>marks[3];
	     cout<<endl<<setw(17)<<"Chemistry:"; cin>>marks[4];
	     cout<<endl<<setw(17)<<"Physics:"; cin>>marks[5];
	     break;

	     case 2:
	     cout<<endl<<setw(19)<<"Eng:"; cin>>marks[1];
	     cout<<endl<<setw(19)<<"C++/Economics:"; cin>>marks[2];
	     cout<<endl<<setw(19)<<"Maths:"; cin>>marks[3];
	     cout<<endl<<setw(19)<<"Accountancy:"; cin>>marks[4];
	     cout<<endl<<setw(19)<<"Bussiness Studies:"; cin>>marks[5];

	      break;
	     }
	     calgrade();

}



void stu::modify()

       {           calgrade();
	cout<<"\n\n           The Student's Details Are:"<<endl<<endl;
	cout<<setw(17)<<"Name:  "<<sname<<endl<<endl<<setw(17)<<"Reg no: "<<reg<<endl;
	cout<<endl<<setw(17)<<"Class: "<<std<<endl<<endl<<setw(17)<<"Date of Birth:"<<dob.dd<<"/"<<dob.mm<<"/"<<dob.yyyy<<endl<<endl<<endl<<setw(17)<<"Father's name :"<<fname<<endl<<endl<<setw(14)<<"\tAddress:\t "<<add<<endl<<endl;

		   switch(stream)
	     {
	     case 1:

	     cout<<endl<<setw(35)<<"Eng:"<<marks[1];
	     cout<<endl<<setw(35)<<"C++/Economics:"<<marks[2];
	     cout<<endl<<setw(35)<<"Maths/Bio:"<<marks[3];
	     cout<<endl<<setw(35)<<"Chemistry:"<<marks[4];
	     cout<<endl<<setw(35)<<"Physics:"<<marks[5];
	     break;

	     case 2:
		  cout<<endl<<setw(35)<<"Eng:"<<marks[1];
	     cout<<endl<<setw(35)<<"C++/Economics:"<<     marks[2];
	     cout<<endl<<setw(35)<<"Maths:"     <<marks[3];
	     cout<<endl<<setw(35)<<"Accountancy:"     <<marks[4];
	     cout<<endl<<setw(35)<<"Bussiness Studies:"     <<marks[5];

	      break;
	     }
		cout<<endl<<setw(35)<<"Average :"<<avg;
	     cout<<endl<<setw(35)<<"Grade:\t"<<grade<<endl<<endl;
		int r;
		char  nm[30]="",cl[4]="",fnm[30]="",add2[80]="";
	     cout<<"\tWhat do you want to change? \n"<<"\t1.For Name\n\t"<<"\n\t2.For Std\n"<<"\n\t3.For Father's Name\n"<<"\n\t4.For DOB\n"<<"\n\t5.For Address\n"<<"\n\t6.For Marks\n"<<"\n\t7.For None!!\n";
		cin>>r;

	     switch(r)
		{
		case 1:
		cout<<"\n\tEnter the new Name :";
		gets(nm);
		strcpy(sname,nm);
		break;
		case 2:
		cout<<"\n\tEnter the new Std :";
		gets(cl);
		strcpy(std,cl);
		break;
		case 3:
		cout<<"\n\tEnter Father's Name :";
		gets(fnm);
		strcpy(fname,fnm);
		break;
		case 4:
	    D:
		gotoxy(15,6);
		cprintf("New Date Of Birth:dd mm yyyy");
		gotoxy(33,6);
		cin>>dob.dd>>dob.mm>>dob.yyyy;
		if(dob.dd>31||dob.mm>12)
		{cout<<"\n\t\tInvalid date, Enter again!!";
		sound(400);
		delay(500);
		nosound();
		goto D;
		}
		break;

		case 5:
		cout<<"\n\tEnter the new Address :";
		gets(add2);
		strcpy(add,add2);
		break;
		case 6:
		cout<<"\n\tWhich subject's marks do you want to change?\tPlease Enter Your Choice:\n";

		  if (stream==1)
		  {cout<<endl<<setw(35)<<"1 for Eng:";
	     cout<<endl<<setw(35)<<"2 for C++/Economics:";
	     cout<<endl<<setw(35)<<"3 for Maths/Bio:";
	     cout<<endl<<setw(35)<<"4 for Chemistry:";
	     cout<<endl<<setw(35)<<"5 for Physics:";
	     }

		else if (stream==2)
		  {
		  cout<<endl<<setw(35)<<"1 for Eng:";
	     cout<<endl<<setw(35)<<"2 for C++/Economics:";
	     cout<<endl<<setw(35)<<"3 for Maths:";
	     cout<<endl<<setw(35)<<"4 for Accountancy";
	     cout<<endl<<setw(35)<<"5 for Bussiness Studies:" ;

	     }
	       int sub;
	       cin>>sub;


	       cout<<"\n\tEnter the new marks: ";
	    cin>>marks[sub];



	    case 7:

	    cout<<"\n\t\t\tNo change done!!"; //delay
	      sound(440);
	      delay(1800);
	      nosound();
	      break;
	    }
	}




 void main()
{       int first=0;
	int n,y;
	welcome();
	do
	{

	      y=menu(first);
	      first++;
	      switch(y)
	      {
	      case 1:

		int no=0;
		stu a;
		ofstream filin;
		filin.open("student2.dat",ios::app|ios::binary);
		cout<<"\n\n\tHow many details? : ";
		cin>>n;
		for( int i=0;i<n;i++)
		{
		cout<<"\n\tDetails Of the Student "<<i+1<<endl<<endl;
		  no++;
		a.get();
		filin.write((char*)&a,sizeof(a));
		}
		filin.close();

		break;

		case 2:
		L:

		gotoxy(10,10);
		cprintf("Press A to view the details through Admission No.");
		gotoxy(20,12);
		cprintf("OR");
		gotoxy(10,14);
		cprintf("Press any other key to view all the student's details one by one:");
		char b;
		b=getch();
		if((b=='A')||(b=='a'))
		{
		long pos;
		char found='f';
		fstream filview("student2.dat",ios::in|ios::out|ios::binary);
		int reg4;
		cout<<"\n\n\t Enter Admission no. of the Student :  ";
		cin>>reg4;
		while(!filview.eof())
	{       pos=filview.tellg();
		filview.read( (char*)&a,sizeof(stu) );
		int b=a.getreg();
		if (b==reg4)
		{
		found='t';
		a.show();
		getch();
		}

	}        	 if(found=='f')
		   {
			cout<<"\n\n\tStudent with this admission no does not exit!!\n\n\t";
			getch();
			goto L;
		    }

	     break;	}



	     //end of this if "A/a"  loop


		  else
		  {

		ifstream filout("student2.dat",ios::in|ios::binary);
		filout.read((char*)&a, sizeof(a)) ;

		while(!filout.eof())
		{
		a.show();
		getch();
		filout.read ( (char*)& a,sizeof(a) );

		}
		filout.close();
		getch();
		break;
		       }
		case 3:

		int admno;
		long pos;
		char found='f';
		S:
		fstream filmod("student2.dat",ios::in|ios::out|ios::binary);

		cout<<"\n\n Enter Admission no. of the Student whose Records are to be modified:  ";
		cin>>admno;
		while(!filmod.eof() )
	{       pos=filmod.tellg();
		filmod.read( (char*)&a,sizeof(a) );
		int b=a.getreg();
		if (b==admno)
		  { a.modify();
		    filmod.seekg(pos);
		    filmod.write( (char*)&a, sizeof(a) );
		    found ='t';

		    cout<<"\n\n\t\t\tFile Modified!!!!" ;
		    getch();

		    break;
		   }
	}
		if(found=='f')
		    cout<<"\t\tSORRY!\n\t Record Of the Student with This Admission No \n\t\tDoes Not Exit\n";
		    getch();

		    cout<<"\n\n      Press R to re-enter Admission No.\n\n   OR Press  any other KEY to abort Modification.\n\n\t\t\t:" ;
		    char tp;
		    tp=getch();
		       if(tp=='R')
		       goto S;
		    else {break;


		    filmod.close();     }



		break;

		case 4:ifstream fi;
		fi.open("student2.dat",ios::trunc);
		fi.close();
		cout<<"        File Reset!!!!" ;
		getch();
		break;

		case 5:
		{                        //gotoxy

		cout<<"\n\tExisting Program!!!";
		sound(400);
		delay(300);
		nosound();
		break;
		}
		break;
		default :
		cout<<"\n\nEnter From 1 to 5 only ! ";
		getch();
		}


       }while(y!=5);


 }
