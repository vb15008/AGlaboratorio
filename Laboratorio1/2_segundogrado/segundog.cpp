#include <GL/gl.h>
#include <GL/glut.h>
//incluimos la libreria math para poder utilizar las funciones matematicas
#include <math.h>
void display(void)
{ 
	//declarar las variables a utilizar
	float y,x,a,b,c,x1,x2,raiz;
	//Color al fondo de pantalla en blanco
	glClearColor(1,1,1,1);
	//Se aplica el color al fondo de pantalla
    glClear(GL_COLOR_BUFFER_BIT);
    // el tamanio de los puntos a crear
    glPointSize(2);
    // Declarar que primitiva se dibujara
    glBegin(GL_POINTS);
    //Color para los puntos a dibujar azul
    glColor3f(0.0f, 0.0f, 1.0f);
    // se da el valor a las constantes de ecuacion cuadratica
    a=2;
    b=3;
    c=-2;
    // se calcula esta constante
    raiz=((b*b)-(4*a*c));
    //se calcula las raices de la cuadratica utilizando la ecuacion cuadratica
    x1=((-b+sqrt(raiz))/(2*a));
    x2=((-b-sqrt(raiz))/(2*a));
    //Crear un ciclo que va desde X2 hasta X1 y va aumentando 0.001 en x
    for(x=x2;x<=x1;x+=0.001){
		//Encontrar el valor de "y" dependiendo del valor de "x" en la ecuacion de segundo grado
		y=2*(x*x)+(3*x)-2;
		//Se dibuja los puntos de acuerdo a las coordenadas encontradas anteriormente
		glVertex2f(x,y);
		
	}
	//se termina de dibujar    
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
    glEnd();
    glFlush ();
    
    
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 1.0, -3.3, 1.0, -1.0, 1.0);
    
    
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ecuacion de segundo grado");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
