#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h> //incluimos la libreria math para poder utilizar las funciones matematicas
void display(void)
{
	//Color al fondo de pantalla en blanco
	glClearColor(1,1,1,1);
	//Se aplica el color al fondo de pantalla
    glClear(GL_COLOR_BUFFER_BIT);
    // el tamanio de los puntos a crear
    glPointSize(3);
    //declarar las variables a utilizar en las coordenadas x,y,
    //la variables cons es una constante que se incluye en la ecuacion de furier
    //la variable senos y au sirven para aumentar el tamanio de la ecuacion de furier
    float  cons,senos,x, y,au;
    //la varible k es una constante utilizada para dar la altura a la onda cuadrada de furier, donde la altura es 2k=altura.
    // en esta onda la altura sera de 2k=2(1)=2
    int k=1;
    //Esta variable multiplica a todos los senos, se utilizara en la ecuacion luego
    cons=((4*k)/(M_PI));
    // Declarar que primitiva se dibujara
    glBegin(GL_POINTS);
    //Color para los puntos a dibujar azul
    glColor3f(0.0f,0.0f,1.0f);
    ////Crear un ciclo que va desde -3pi hasta 5pi y va aumentando 0.001 en x 
    for (x=-3*M_PI;x<=5*M_PI; x+=0.001)
    {   
		//la damos el valor inicial a la variable seno
	    senos=sin(x);
	    //en este for le sumamos los valores que nosotros le indiquemos a la varible senos 
	    // sumandole el seno anterior el intervalo seria de 1 hasta 499
	    // entre mas senos se le agregen mas cuadrada es la onda
		for(au=3.0;au<=499.0; au+=2.0){
			//la sumamos los valores al seno
			senos+=((1/au)*sin(au*x));
		
			}
		//Se utiliza la ecuacion de furier
		y=k+(cons)*(senos);
		//Se dibuja los puntos de acuerdo a las coordenadas encontradas anteriormente
		glVertex2f(x,y); 
		
	}
	//se termina de dibujar la onda cuadrada
	glEnd();
	// Se dibujan los ejes x e y
	
	//Se le da color negro a las lineas
	glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_LINES);
	glVertex2f(-20.0f,0.0f);
	glVertex2f(20.0f,0.0f);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0f,-20.0f);
	glVertex2f(0.0f,20.0f);
	glEnd();
	glFlush ();  

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 17, -1.0, 6.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Furier");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
