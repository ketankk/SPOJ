
#include <GL/glut.h>
#include <cstdlib>

void display ( );
void init( );
void spin();
void mouse(int btn, int status, int x, int y);
void drawPoly(int a, int b, int c, int d, int sideColor);
float angle; //angle of rotation
float cubeVertex[8][3] = {{-1.,-1.,1.},{-1.,1.,1.},{1.,1.,1.},
{1.,-1.,1.},{-1.,-1.,-1.},{-1.,1.,-1.},{1.,1.,-1.},{1.,-1.,-1.}};
float color[6][3]= {{0.,0.,1.},{0.,1.,0.},{1.,0.,0.},{0.,0.,0.},
{1.,1.,0.},{0.,1.,1.}};
//*****************************************************************
int main ( )
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Simple Demo:");
	glutDisplayFunc(display);
	glutIdleFunc(spin);
	glutMouseFunc(mouse);
	init();
	glutMainLoop();
}

void init( )
{
	glClearColor(1.,1.,1.,1.);
	glColor3f(0.,0.,1.);
	glMatrixMode(GL_PROJECTION); //set the clipping space
	glLoadIdentity();
	glOrtho(-2.,2.0,-2.,2.,-2.,2.);
	glMatrixMode(GL_MODELVIEW);
	angle = 0.;
}

void display( )
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(1,1,0.);
	glRotatef(angle,1.,1.,1.);
	glScalef(.5,.5,.5);
	//draw the cube
	drawPoly(0,3,2,1,0);
	drawPoly(2,3,7,6,1);
	drawPoly(0,4,7,3,2);
	drawPoly(1,2,6,5,3);
	drawPoly(4,5,6,7,4);
	drawPoly(0,1,5,4,5);

	/*//Second Square
	glTranslatef(0,0,0);
	glRotatef(angle,1.,1.,1.);
	glScalef(0.5,0.5,.5);
	//draw the cube
	drawPoly(0,3,2,1,0);
	drawPoly(2,3,7,6,1);
	drawPoly(0,4,7,3,2);
	drawPoly(1,2,6,5,3);
	drawPoly(4,5,6,7,4);
	drawPoly(0,1,5,4,5);
*/
	glutSwapBuffers();
	glFlush();
}

void drawPoly(int a, int b, int c, int d, int sideColor)
{
	glBegin(GL_POLYGON);
	  glColor3fv(color[sideColor]);
	  glVertex3fv(cubeVertex[a]);
	  glVertex3fv(cubeVertex[b]);
	  glVertex3fv(cubeVertex[c]);
	  glVertex3fv(cubeVertex[d]);
	glEnd();
}

void spin()
{
	angle += .5;
	glutPostRedisplay();
}

void mouse(int btn, int status, int x, int y)
{
	if(btn == GLUT_LEFT_BUTTON && status == GLUT_DOWN)
		glutIdleFunc(NULL);
	if(btn == GLUT_RIGHT_BUTTON && status == GLUT_DOWN)
		glutIdleFunc(spin);
}


