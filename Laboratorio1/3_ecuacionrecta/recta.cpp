#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
	//declarar las variables a utilizar en las coordenadas x,y
	float x,y;
	//Color al fondo de pantalla en blanco
	glClearColor(1,1,1,1);
	//Se aplica el color al fondo de pantalla
    glClear(GL_COLOR_BUFFER_BIT);
    // el tamanio de los puntos a crear en la recta azul
    glPointSize(1);
    // Declarar que primitiva se dibujara
    glBegin(GL_POINTS);
    //Crear un ciclo que va desde -6 hasta 5 y va aumentando 0.001 en x
    for(x=-6;x<=5;x+=0.001){
		//Color para los puntos a dibujar azul
		glColor3f(0.0f, 0.0f, 1.0f);
		//Encontrar el valor de "y" dependiendo del valor de "x"
		y=(3*x)+7;	
		//Se dibuja los puntos de acuerdo a las coordenadas encontradas anteriormente		
	    glVertex2f(x,y);
	}
	//se termina de dibujar
	glEnd();
	// el tamanio de los puntos a crear en la recta roja
	glPointSize(6);
	// Declarar que primitiva se dibujara
	glBegin(GL_POINTS);
	//Crear un ciclo que va desde -(7/3) hasta 0.05 y va aumentando (7/15) en x
	for(x=-(7/3.0);x<=0.05;x+=(7/15.0)){
		glColor3f(1.0f, 0.0f, 0.0f);//Color para los puntos a dibujar rojo
		//Encontrar el valor de "y" dependiendo del valor de "x"
		y=(3*x)+7;
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
    glEnd();//se termina de dibujar 
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-3.5, 3.0, -2.0, 9.0, -1.0, 1.0);
    
    
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
