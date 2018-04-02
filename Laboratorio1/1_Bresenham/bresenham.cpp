//VB15008 UES
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
	//declarar las variables a utilizar
	double x, y, x1, y1,dx, dy,m;
	//Estas varibles indican la pocicion donde comenzara a evaluar la ecuacion
	x=-4.5; y=-4.5; x1=4; y1=4;
	//Color al fondo de pantalla en blanco
	glClearColor(1,1,1,1);
	//Se aplica el color al fondo de pantalla
    glClear(GL_COLOR_BUFFER_BIT);
    // el tamanio de los puntos a crear
    glPointSize(6);
    //Color para la linea a dibujar azul
	glColor3f(1.0f, 0.0f, 0.0f);
	// Declarar que primitiva se dibujara
	glBegin(GL_LINES);
	//Las coordenadas para dibujar la linea
	glVertex2f(x+0.5,y+0.5);
	glVertex2f(x1,y1);
	//finaliza el dibujo de la linea
	glEnd();
	// se calcula los deplazamientos en x y en y, y tambien la pendiente
	dx= (x1-x);
	dy= (y1-y);
    m= ((2*dy) - dx);
    //Se crear un ciclo que va desde x hasta x1 y va aumentando  en x
    while(x<x1){
		//si la pendiente es menor que cero 
		if (m < 0){
			
			x=x+1;
			y=y;
			m = m + 2*dy;
		// de lo contrario
		}else{
			// x e y aumentaran en 0.5 y se calculara nuevamente la pendiente
			x = x + 0.5;
			y = y + 0.5;
			m = (m + 2*(dy-dx));
		}
		//Color para los puntos a dibujar azul
		glColor3f(0.0f, 0.0f, 1.0f);
		// Declarar que primitiva se dibujara
		glBegin(GL_POINTS);
		//Se dibuja los puntos de acuerdo a las coordenadas encontradas anteriormente
		glVertex2f(x,y);
		//se termina de dibujar
		glEnd();
   
	}
	
	// Se dibujan los ejes x e y
	
	//Se le da color negro a las lineas
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(-30,0);
    glVertex2f(30,0);
    
    glBegin(GL_LINES);
    glVertex2f(0,-30);
    glVertex2f(0,30);
    glEnd();
    
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6.0, 6.0, -6.0, 6.0, -1.0, 1.0);
    
    
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Bresenham");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
