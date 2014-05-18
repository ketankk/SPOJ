#include <windows.h>
#include <gl\gl.h>
#include <gl\glut.h>

void init(void);
void display(void);


int main(int argc, char *argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(250,250);
glutInitWindowPosition(100,200);
glutCreateWindow("My First Glut/OpenGL Program");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

void init(void)
{
glClearColor(0.0f ,0.0f ,0.0f ,0.0f);
glColor3f(0.0f,0.0f,1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0f,(GLfloat)250/(GLfloat)250,0.1f,100.0f);
}

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_TRIANGLES);
glVertex3f( 0.0f, 1.0f, -10.0f);
glVertex3f(-1.0f,-1.0f, -10.0f);
glVertex3f( 1.0f,-1.0f, -10.0f);
glEnd();
glutSwapBuffers();
}
