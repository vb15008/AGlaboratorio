#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(1);
    
    //COLOR NEGRO
		// centro
		glColor3f(0,0,0);
		double i1, x1,y1;
		double x2,y2;
		glBegin(GL_LINES);
		for (i1=0;i1<=(2*M_PI); i1+=0.001)
		{
			x1=2*cos(i1) +0;
			y1=2*sin(i1) +0;
			x2=3*cos(i1) +0;
			y2=3*sin(i1) +0;
			glVertex2f(x1,y1); 
			glVertex2f(x2,y2);
			
		}
		glEnd();
		 //dientes
		 int nn=0, punto1=5,punto2=13,punto3 =23,punto4=31;
		 while(nn<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(punto1*M_PI/180.0),3*sin(punto1*M_PI/180.0));
			glVertex2f(3.7*cos(punto2*M_PI/180.0),3.7*sin(punto2*M_PI/180.0)); 
			glVertex2f(3.65*cos(punto3*M_PI/180.0),3.7*sin(punto3*M_PI/180.0));
			glVertex2f(3*cos(punto4*M_PI/180.0),3*sin(punto4*M_PI/180.0));
			glEnd();
			nn+=1;
			punto1+=36;
			punto2+=36;
			punto3+=36;
			punto4+=36;
		}	
	//COLOR VERDE
	// centro
		glColor3f(0,1,0);
		double i3, x3,y3;
		double x4,y4;
		glBegin(GL_LINES);
		for (i3=0;i3<=(2*M_PI); i3+=0.001)
		{
			x3=2*cos(i3) -5;
			y3=2*sin(i3) -4.9;
			x4=3*cos(i3) -5;
			y4=3*sin(i3) -4.9;
			glVertex2f(x4,y4); 
			glVertex2f(x3,y3); 
			
		}
		glEnd();
		//Dientes
		int nv=0, puntov1=5,puntov2=13,puntov3 =23,puntov4=31;
		while(nv<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(puntov1*M_PI/180.0) -5,3*sin(puntov1*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(puntov2*M_PI/180.0)-5,3.7*sin(puntov2*M_PI/180.0)-4.9); 
			glVertex2f(3.65*cos(puntov3*M_PI/180.0)-5,3.7*sin(puntov3*M_PI/180.0)-4.9);
			glVertex2f(3*cos(puntov4*M_PI/180.0)-5,3*sin(puntov4*M_PI/180.0)-4.9);
			glEnd();
			nv+=1;
			puntov1+=36;
			puntov2+=36;
			puntov3+=36;
			puntov4+=36;
		}	
			
			
			
	//COLOR GRIS
	// centro
		glColor3f(0.5,0.5,0.5);
		double i5, x5,y5;
		double x6,y6;
		glBegin(GL_LINES);
		for (i5=0;i5<=(2*M_PI); i5+=0.001)
		{
			x5=2*cos(i5) +6.2;
			y5=2*sin(i5) -3.2;
			x6=3*cos(i5) +6.2;
			y6=3*sin(i5) -3.2;
			glVertex2f(x5,y5);
			glVertex2f(x6,y6);  
			
		}
		glEnd();
		//primer diente
		int ng=0, puntog1=5,puntog2=13,puntog3 =23,puntog4=31;
		while(ng<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(puntog1*M_PI/180.0) +6.2,3*sin(puntog1*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(puntog2*M_PI/180.0)+6.2,3.7*sin(puntog2*M_PI/180.0)-3.2); 
			glVertex2f(3.65*cos(puntog3*M_PI/180.0)+6.2,3.7*sin(puntog3*M_PI/180.0)-3.2);
			glVertex2f(3*cos(puntog4*M_PI/180.0)+6.2,3*sin(puntog4*M_PI/180.0)-3.2);
			glEnd();
			ng+=1;
			puntog1+=36;
			puntog2+=36;
			puntog3+=36;
			puntog4+=36;
		}	
		
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10.0, 5.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejercicio 2");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
