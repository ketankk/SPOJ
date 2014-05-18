////////////////////////////////////////////////////////////////////////////
////////////////////// Object cube side ////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

class side
{
public:
	side();
	side(int);

	void rotateRight();
	void rotateLeft();
	void returnLine(char, int&, int&, int&);
	void printLine(int);
	
	void print();

	void changeLine(char, int, int, int);

private:
	int grid[10];  // the grid the colors reside on
	int directionGrid[10];  // used to determine which direction pointing
	int direction; // the current direction the side is pointing
	void color(int); // changes the color to print


};

side::side(int color)
{
	// set the side all to one color, then set each direction a color
	for (int x=1; x<10; x++)
		grid[x]=color;

	direction=0;
}

void side::rotateRight()
{
	direction++;
	if (direction==4)
		direction=0;
}

void side::rotateLeft()
{
	direction--;
	if (direction==-1)
		direction=3;
}

void side::changeLine(char c, int x, int y, int z)
{
	// matrix to hold the grid numbers depending on what direction side is pointing
	int matrix[4][9]={{1,2,3,4,5,6,7,8,9},{7,4,1,8,5,2,9,6,3},
	{9,8,7,6,5,4,3,2,1},{3,6,9,2,5,8,1,4,7}}; 

	// changes the row/column to the new colors
	switch (c)
	{
	case '1':
		grid[matrix[direction][0]]=x;
		grid[matrix[direction][1]]=y;
		grid[matrix[direction][2]]=z;
		break;
	case '2':
		grid[matrix[direction][3]]=x;
		grid[matrix[direction][4]]=y;
		grid[matrix[direction][5]]=z;
		break;
	case '3':
		grid[matrix[direction][6]]=x;
		grid[matrix[direction][7]]=y;
		grid[matrix[direction][8]]=z;
		break;
	case 'a':case 'A':
		grid[matrix[direction][0]]=x;
		grid[matrix[direction][3]]=y;
		grid[matrix[direction][6]]=z;
		break;
	case 'b':case 'B':
		grid[matrix[direction][1]]=x;
		grid[matrix[direction][4]]=y;
		grid[matrix[direction][7]]=z;
		break;
	case 'c':case 'C':
		grid[matrix[direction][2]]=x;
		grid[matrix[direction][5]]=y;
		grid[matrix[direction][8]]=z;
		break;
	}
}

void side::returnLine(char c, int& x, int& y, int& z)
{
	// matrix to hold the grid numbers depending on what direction side is pointing
	int matrix[4][9]={{1,2,3,4,5,6,7,8,9},{7,4,1,8,5,2,9,6,3},
	{9,8,7,6,5,4,3,2,1},{3,6,9,2,5,8,1,4,7}};

	// returns the color of that row/column
	switch (c)
	{
	case '1':
		x=grid[matrix[direction][0]];
		y=grid[matrix[direction][1]];
		z=grid[matrix[direction][2]];
		break;
	case '2':
		x=grid[matrix[direction][3]];
		y=grid[matrix[direction][4]];
		z=grid[matrix[direction][5]];
		break;
	case '3':
		x=grid[matrix[direction][6]];
		y=grid[matrix[direction][7]];
		z=grid[matrix[direction][8]];
		break;
	case 'a':case 'A':
		x=grid[matrix[direction][0]];
		y=grid[matrix[direction][3]];
		z=grid[matrix[direction][6]];
		break;
	case 'b':case 'B':
		x=grid[matrix[direction][1]];
		y=grid[matrix[direction][4]];
		z=grid[matrix[direction][7]];
		break;
	case 'c':case 'C':
		x=grid[matrix[direction][2]];
		y=grid[matrix[direction][5]];
		z=grid[matrix[direction][8]];
		break;
	}
}

void side::printLine(int x)
{
	int matrix[4][9]={{1,2,3,4,5,6,7,8,9},{7,4,1,8,5,2,9,6,3},
	{9,8,7,6,5,4,3,2,1},{3,6,9,2,5,8,1,4,7}};


	for(int y=x*3; y<x*3+3; y++)
	{
		color(grid[matrix[direction][y]]);
		cout<<char(178)<<char(178)<<char(178)<<COLOR::NORMAL;
	}
}

void side::print()
{
	// matrix to hold the grid numbers depending on what direction side is pointing
	int matrix[4][9]={{1,2,3,4,5,6,7,8,9},{7,4,1,8,5,2,9,6,3},
	{9,8,7,6,5,4,3,2,1},{3,6,9,2,5,8,1,4,7}};

	cout<<"\t\t    A   B   C"<<endl<<endl;

	for (int x=0; x<2; x++)
	{
		cout<<((x==0) ? "\t\t 1 " : "\t\t   ");
		for(int y=0; y<3; y++)
		{
			color(grid[matrix[direction][y]]);
			cout<<char(178)<<char(178)<<char(178)<<" "<<COLOR::NORMAL;
		}
		cout<<endl;
	}
	cout<<endl;
	for (x=0; x<2; x++)
	{
		cout<<((x==0) ? "\t\t 2 " : "\t\t   ");
		for(int y=3; y<6; y++)
		{
			color(grid[matrix[direction][y]]);
			cout<<char(178)<<char(178)<<char(178)<<" "<<COLOR::NORMAL;
		}
		cout<<endl;
	}
	cout<<endl;
	for (x=0; x<2; x++)
	{
		cout<<((x==0) ? "\t\t 3 " : "\t\t   ");
		for(int y=6; y<9; y++)
		{
			color(grid[matrix[direction][y]]);
			cout<<char(178)<<char(178)<<char(178)<<" "<<COLOR::NORMAL;
		}
		cout<<endl;
	}
	cout<<COLOR::NORMAL<<endl<<endl;
}

void side::color(int c)
{
	switch (c)
	{
	case 1: cout<<COLOR::GREEN;
		break;
	case 2: cout<<COLOR::RED;
		break;
	case 3: cout<<COLOR::BLUE;
		break;
	case 4: cout<<COLOR::YELLOW;
		break;
	case 5: cout<<COLOR::WHITE;
		break;
	case 6: cout<<COLOR::PURPLE;
		break;
	}
}


////////////////////////////////////////////////////////////////////////////
////////////////////// Object cube /////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////


class cube
{
public:
	cube();
	void rotate(char);
	void printfront();
	void twist(string);
	void mix();
	void printAll();

private:
	vector <side> cubeVec;
};

cube::cube()
{
	// create six new sides and set the directions for each side
	side empty(0);
	side greenside(1);
	side redside(2);
	side blueside(3);
	side yellowside(4);
	side whiteside(5);
	side purpleside(6);

	// add to the vector of sides
	cubeVec.push_back(empty);
	cubeVec.push_back(greenside);
	cubeVec.push_back(redside);	
	cubeVec.push_back(blueside);	
	cubeVec.push_back(yellowside);	
	cubeVec.push_back(whiteside);
	cubeVec.push_back(purpleside);
	

}

void cube::printfront()
{
	cubeVec[1].print();
}

void cube::printAll()
{
	int x,y;
	cout<<"             A  B  C"<<endl;

	for (x=3; x>=2; x--)
	{
		for (y=0; y<3; y++)
		{
			cout<<"            ";
			cubeVec[x].printLine(y);
			cout<<endl;
			cout<<"            ";
			cubeVec[x].printLine(y);
			cout<<endl;
		}
		cout<<endl;
	}

	for (x=0; x<3; x++)
	{
		cout<<x+1<<" ";
		cubeVec[5].printLine(x);
		cout<<" ";
		cubeVec[1].printLine(x);
		cout<<" ";
		cubeVec[6].printLine(x);
		cout<<endl<<"  ";
		cubeVec[5].printLine(x);
		cout<<" ";
		cubeVec[1].printLine(x);
		cout<<" ";
		cubeVec[6].printLine(x);
		cout<<endl;
	}
	cout<<endl;

	for (x=0; x<3; x++)
	{
		cout<<"            ";
		cubeVec[4].printLine(x);
		cout<<endl;
		cout<<"            ";
		cubeVec[4].printLine(x);
		cout<<endl;
	}
	cout<<endl;
}





void cube::rotate(char c)
{
	// rotates the cube in the direction stated
	side oldcolor=cubeVec[1];
	switch (c)
	{
	case 'u':case 'U':
		cubeVec[1]=cubeVec[4];
		cubeVec[4]=cubeVec[3];
		cubeVec[3]=cubeVec[2];
		cubeVec[2]=oldcolor;

		cubeVec[5].rotateLeft();
		cubeVec[6].rotateRight();
		break;

	case 'd':case 'D':
		cubeVec[1]=cubeVec[2];
		cubeVec[2]=cubeVec[3];
		cubeVec[3]=cubeVec[4];
		cubeVec[4]=oldcolor;

		cubeVec[6].rotateLeft();
		cubeVec[5].rotateRight();
		break;

	case 'r':case 'R':
		cubeVec[1]=cubeVec[5];
		cubeVec[5]=cubeVec[3];
		cubeVec[5].rotateRight();
		cubeVec[5].rotateRight();
		cubeVec[3]=cubeVec[6];
		cubeVec[3].rotateRight();
		cubeVec[3].rotateRight();
		cubeVec[6]=oldcolor;

		cubeVec[2].rotateLeft();
		cubeVec[4].rotateRight();
		break;

	case 'l':case 'L':
		cubeVec[1]=cubeVec[6];
		cubeVec[6]=cubeVec[3];
		cubeVec[6].rotateRight();
		cubeVec[6].rotateRight();
		cubeVec[3]=cubeVec[5];
		cubeVec[3].rotateRight();
		cubeVec[3].rotateRight();
		cubeVec[5]=oldcolor;

		cubeVec[4].rotateLeft();
		cubeVec[2].rotateRight();
		break;
	}
}

void cube::twist(string s)
{
	// twists a row or column in the direction stated
	if (toupper(s[0])!='A' && toupper(s[0])!='B' && toupper(s[0])!='C' &&
		toupper(s[0])!='1' && toupper(s[0])!='2' && toupper(s[0])!='3')
	{
		return;
	}
	if ((toupper(s[0])=='A' || toupper(s[0])=='B' || toupper(s[0])=='C') &&
		toupper(s[1])!='U' && toupper(s[1])!='D')
	{
		return;
	}
	if ((toupper(s[0])=='1' || toupper(s[0])=='2' || toupper(s[0])=='3') &&
		toupper(s[1])!='R' && toupper(s[1])!='L')
	{
		return;
	}

	int x, y, z;
	int dx, dy, dz;

	cubeVec[1].returnLine(s[0],x,y,z);

	if (toupper(s[0])=='A' || toupper(s[0])=='B' || toupper(s[0])=='C')
	{
		if (toupper(s[1])=='U')
		{
			cubeVec[2].returnLine(s[0],dx,dy,dz);
			cubeVec[2].changeLine(s[0],x,y,z);
			cubeVec[3].returnLine(s[0],x,y,z);
			cubeVec[3].changeLine(s[0],dx,dy,dz);
			cubeVec[4].returnLine(s[0],dx,dy,dz);
			cubeVec[4].changeLine(s[0],x,y,z);
			cubeVec[1].changeLine(s[0],dx,dy,dz);
			if (toupper(s[0])=='A')
				cubeVec[5].rotateLeft();

			if (toupper(s[0])=='C')
				cubeVec[6].rotateRight();
		}
		else if (toupper(s[1])=='D')
		{
			cubeVec[4].returnLine(s[0],dx,dy,dz);
			cubeVec[4].changeLine(s[0],x,y,z);
			cubeVec[3].returnLine(s[0],x,y,z);
			cubeVec[3].changeLine(s[0],dx,dy,dz);
			cubeVec[2].returnLine(s[0],dx,dy,dz);
			cubeVec[2].changeLine(s[0],x,y,z);
			cubeVec[1].changeLine(s[0],dx,dy,dz);
			if (toupper(s[0])=='A')
				cubeVec[5].rotateRight();

			if (toupper(s[0])=='C')
				cubeVec[6].rotateLeft();
		}
	}
	else if (toupper(s[0])=='1' || toupper(s[0])=='2' || toupper(s[0])=='3')
	{
		if (toupper(s[1])=='R')
		{
			cubeVec[6].returnLine(s[0],dx,dy,dz);
			cubeVec[6].changeLine(s[0],x,y,z);
			if (toupper(s[0])=='1')
			{
				cubeVec[3].returnLine('3',z,y,x);
				cubeVec[3].changeLine('3',dz,dy,dx);
			}
			else if (toupper(s[0])=='3')
			{
				cubeVec[3].returnLine('1',z,y,x);
				cubeVec[3].changeLine('1',dz,dy,dx);
			}
			else
			{
				cubeVec[3].returnLine('2',z,y,x);
				cubeVec[3].changeLine('2',dz,dy,dx);
			}

			cubeVec[5].returnLine(s[0],dx,dy,dz);
			cubeVec[5].changeLine(s[0],x,y,z);
			cubeVec[1].changeLine(s[0],dx,dy,dz);
			if (toupper(s[0])=='1')
				cubeVec[2].rotateLeft();

			if (toupper(s[0])=='3')
				cubeVec[4].rotateRight();
		}
		else if (toupper(s[1])=='L')
		{
			cubeVec[5].returnLine(s[0],dx,dy,dz);
			cubeVec[5].changeLine(s[0],x,y,z);
			if (toupper(s[0])=='1')
			{
				cubeVec[3].returnLine('3',z,y,x);
				cubeVec[3].changeLine('3',dz,dy,dx);
			}
			else if (toupper(s[0])=='3')
			{
				cubeVec[3].returnLine('1',z,y,x);
				cubeVec[3].changeLine('1',dz,dy,dx);
			}
			else
			{
				cubeVec[3].returnLine('2',z,y,x);
				cubeVec[3].changeLine('2',dz,dy,dx);
			}

			cubeVec[6].returnLine(s[0],dx,dy,dz);
			cubeVec[6].changeLine(s[0],x,y,z);
			cubeVec[1].changeLine(s[0],dx,dy,dz);
			if (toupper(s[0])=='1')
				cubeVec[2].rotateRight();

			if (toupper(s[0])=='3')
				cubeVec[4].rotateLeft();
		}
	}
	
	
}

void cube::mix()
{
	// randomly mixes the cube
	for (int x=0; x<100; x++)
	{

		if (rand()%100<20)
		{
			switch(rand()%4)
			{
			case 0: rotate('u');
				break;
			case 1: rotate('d');
				break;
			case 2: rotate('r');
				break;
			case 3: rotate('l');
				break;
			}
		}
		else
		{
			switch(rand()%6)
			{
			case 0: twist("1r");
				break;
			case 1: twist("2r");
				break;
			case 2: twist("3r");
				break;
			case 3: twist("ad");
				break;
			case 4: twist("bd");
				break;
			case 5: twist("cd");
				break;
			}
		}
	}
}