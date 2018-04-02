#include <GL/gl.h>
#include <GL/glut.h>
//incluimos la libreria math para poder utilizar las funciones matematicas
#include <math.h>
void display(void)
{
	//Color al fondo de pantalla en blanco
	glClearColor(1,1,1,1);
	//Se aplica el color al fondo de pantalla
    glClear(GL_COLOR_BUFFER_BIT);
    // el tamanio de los puntos a crear
    glPointSize(2);
   
    // Declarar que primitiva se dibujara
    glBegin(GL_POINTS);
    //declarar las variables a utilizar en las coordenadas x,y
    float x, y;
    //Color para los puntos a dibujar azul
    glColor3f(0.0f,0.0f,1.0f);
    //Crear un ciclo que va desde -3pi hasta 3pi y va aumentando 0.01 en x 
    for (x=-3*M_PI;x<=3*M_PI; x+=0.01)
    {
		//Encontrar el valor de "y" dependiendo del valor de "x"
		//Se utiliza una identidad cos(x)/sin(x)=cot(x)
		y=(cos(x)/sin(x));
		//Se dibuja los puntos de acuerdo a las coordenadas encontradas anteriormente
		glVertex2f(x,y);
		
	}
    //se termina de dibujar la cotangente
	glEnd();
	// Se dibujan los ejes x e y
	
	//Se le da color negro a las lineas
	glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(-30,0);
    glVertex2f(30,0);
    
    glBegin(GL_LINES);
    glVertex2f(0,-30);
    glVertex2f(0,30);
    //se termina de dibujar los ejes
    glEnd();
	glFlush ();  


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -4.0, 4.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Cotangente");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
