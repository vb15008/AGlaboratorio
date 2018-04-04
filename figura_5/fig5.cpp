#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(0.0f, 0.0f, 0.0f);
    // pared derecha superior
    
    glBegin(GL_LINE_STRIP);
    glVertex3f( -0.5, 0.5, -0.5);
    glVertex3f( -0.5,  0.5, 0.5 );
    glVertex3f(-0.5,  -0.5, 0.5 );
    glEnd();
    
    
    
    // pared superior
    glBegin(GL_LINE_LOOP);
    glVertex3f( -0.5, 0.5, -0.5);
    glVertex3f( -0.3, 0.5, -0.5);
    glVertex3f( -0.3, 0.5, 0.5);
    glVertex3f( -0.5, 0.5, 0.5);
    glEnd();
    // pared de 30 de anchura
    glBegin(GL_LINE_LOOP);
    glVertex3f( -0.3, 0.5, -0.5);
    glVertex3f( -0.3, 0.5, -0.2);
    glVertex3f(0.5,  -0.3, -0.2 );
    glVertex3f(0.5,  -0.3, -0.5 );
    glEnd();
    
    // pared inferior donde esta otro cuadro
    glBegin(GL_LINE_LOOP);
    glVertex3f( -0.3, 0.5, 0.5);
    glVertex3f( -0.3,-0.3, 0.5);
    glVertex3f(-0.3,  -0.3, -0.2 );
    glVertex3f(-0.3,  0.5, -0.2 );
    glEnd();
    glBegin(GL_LINES);
    glVertex3f( -0.3, -0.3, -0.2);
    glVertex3f(0.5,-0.3,-0.2);
    glEnd();
    
    // cuadro en  la pared inferior
    glBegin(GL_LINE_LOOP);
    glVertex3f( -0.3, 0.3, -0.05);
    glVertex3f( -0.3, 0.3, 0.35);
    glVertex3f( -0.3, -0.1, 0.35);
    glVertex3f( -0.3, -0.1, -0.05);
    glEnd();
    
    // cuadro en  la pared superior
    glBegin(GL_LINE_STRIP);
     glVertex3f( -0.5, -0.1, 0.17);
    glVertex3f( -0.5, -0.1, -0.05);
    glVertex3f( -0.5, 0.11, -0.05);
   
   
    glEnd();
    
    // union de los cuadros
    glBegin(GL_LINES);
    glVertex3f( -0.5, -0.1, -0.05);
    glVertex3f( -0.3, -0.1, -0.05);
    glEnd();
    
    // circunferencia
    double x1,z1p,z1n;
    glBegin(GL_POINTS);
    for (x1=0.0;x1<=0.5; x1+=0.0001)
    {
		z1p=(sqrt(pow(0.15,2)-pow((x1-0.25),2)))+0.25;
		z1n=-(sqrt(pow(0.15,2)-pow((x1-0.25),2)))+0.25;
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(x1,-0.3,z1p);
		glVertex3f(x1,-0.3,z1n);
		 		
	}
    glEnd();
    
    //Curva superior
    double x2,z2p,z2n;
    glBegin(GL_POINTS);
    for (x2=0.25;x2<=0.5; x2+=0.001)
    {
		z2p=(sqrt(pow(0.25,2)-pow((x2-0.25),2)))+0.25;
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(x2,-0.3,z2p);
		
		 		
	}
    glEnd();
    
    //union con la curva superior
    glBegin(GL_LINES);
    glVertex3f( -0.3, -0.3, 0.5);
    glVertex3f(0.3,-0.3,0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f( 0.5, -0.3, -0.2);
    glVertex3f(0.5,-0.3,0.3);
    glEnd();
    
    //Curva inferior
    double x3,z3p;
    glBegin(GL_POINTS);
    for (x3=0.25;x3<=0.5; x3+=0.001)
    {
		z3p=(sqrt(pow(0.25,2)-pow((x3-0.25),2)))+0.25;
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex3f(x3,-0.5,z3p);
		
		 		
	}
    glEnd();
    
     
    //union con la curva superior
    glBegin(GL_LINES);
    glVertex3f( -0.5, -0.5, 0.5);
    glVertex3f(0.3,-0.5,0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f(0.5,-0.5,0.3);
    glEnd();
    
    //union de la parte superior con la inferior
    glBegin(GL_LINES);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f(0.5,-0.3,-0.5);
    glEnd();
    
    
    glFlush ();
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluLookAt(0.3, 0.2, 0.3,0, 0, 0, 0.0,1.0,0.0);
    //gluLookAt(-0.3, -0.3, -0.2 ,-4, -5, -3.5, 0.0,1.0,0.0);
    //glOrtho(-1, 1, -0.9, 0.8, 1.0, -1.0);
  
    
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejercicio 5");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
