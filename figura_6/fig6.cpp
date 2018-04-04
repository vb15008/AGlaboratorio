#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{ 
    glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(1);
    glColor3f(0.0f, 0.0f, 0.0f);
    
// TECHO DE LA CASA
    
	   // orilla del techo
				glBegin(GL_LINE_LOOP);
				//inferiro
				glVertex3f(-0.92,0.8,1.22);
				glVertex3f(-0.15,1.7,1.22);
				glVertex3f(0.62,0.8,1.22);
				glVertex3f(0.62,0.8,0.62);
				glVertex3f(0.92,0.8,0.62);
				glVertex3f(0.92,1.4,0.0);
				glVertex3f(0.92,0.8,-0.62);
				//superior
				glVertex3f(0.92,0.85,-0.62);
				glVertex3f(0.92,1.45,0.0);
				glVertex3f(0.92,0.85,0.62);
				//union con la parte inferior
				glVertex3f(0.92,0.8,0.62);
				glVertex3f(0.92,0.85,0.62);
				//sigue en lo superior
				glVertex3f(0.62,0.85,0.62);
				glVertex3f(0.62,0.85,1.22);
				//union con la parte inferior
				glVertex3f(0.62,0.8,1.22);
				glVertex3f(0.62,0.85,1.22);
				//sigue en lo superior
				glVertex3f(-0.15,1.75,1.22);
				glVertex3f(-0.92,0.85,1.22);
				glEnd();
				
		// techo superior pquenio
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.62,0.85,0.62);
				glVertex3f(0.3,1.45,0.0);
				glVertex3f(0.92,1.45,0.0);
				glEnd();
		//techo grande
				glBegin(GL_LINE_STRIP);
				glVertex3f(-0.15,1.75,1.22);
				glVertex3f(-0.15,1.75,0.6);
				glEnd();
				glBegin(GL_LINE_STRIP);
				glVertex3f(-0.15,1.75,0.25);
				glVertex3f(-0.15,1.75,-0.6);
				glVertex3f(0.46,0.97,-0.6);
				glEnd();
				
		//lineas inferiore abajo del techo
				glBegin(GL_LINE_STRIP);
				glVertex3f(-0.92,0.8,1.22);
				glVertex3f(-0.92,0.8,1.18);
				glEnd();
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.92,0.8,-0.62);
				glVertex3f(0.87,0.8,-0.62);
				glEnd();
			
		//chimenea
				glBegin(GL_LINE_LOOP);
				glVertex3f(-0.2,1.85,0.2);
				glVertex3f(-0.4,1.85,0.2);
				glVertex3f(-0.4,1.85,0.4);
				glVertex3f(-0.2,1.85,0.4);
				glEnd();
				glBegin(GL_LINE_STRIP);
				glVertex3f(-0.15,1.75,0.6);
				glVertex3f(-0.2,1.55,0.4);
				glVertex3f(-0.2,1.85,0.4);
				glVertex3f(-0.2,1.55,0.4);
				glVertex3f(-0.2,1.55,0.2);
				glVertex3f(-0.2,1.85,0.2);
				glEnd();
				glBegin(GL_LINE_STRIP);
				glVertex3f(-0.4,1.85,0.4);
				glVertex3f(-0.4,1.55,0.4);
				glEnd();
				
			
//SEGUNDA PLANTA
				//pared arriba pquenia
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.9,0.8,0.6);
				glVertex3f(0.9,0.0,0.6); 
				glVertex3f(0.9,0.0,-0.6);
				glVertex3f(0.9,0.83,-0.6); 
				glEnd();
			
				// Ventanasinferior derecha
					//marco inferior
					glBegin(GL_LINE_LOOP);
					glVertex3f(0.9,0.2,0.3);
					glVertex3f(0.9,0.2,-0.3);  
					glVertex3f(0.9,0.8,-0.3); 
					glVertex3f(0.9,0.8,0.3);
					glEnd();
					//marco superior
					glBegin(GL_LINE_LOOP);
					glVertex3f(0.9,0.18,0.32);
					glVertex3f(0.9,0.18,-0.32);  
					glVertex3f(0.9,0.82,-0.32); 
					glVertex3f(0.9,0.82,0.32);
					glEnd();
					//union del marco inferior con las ventanas
					glBegin(GL_LINES);
					glVertex3f(0.9,0.2,-0.3);
					glVertex3f(0.88,0.2,-0.3);
					glEnd();
					
					//ventanas
					//ventana der
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.88,0.78,-0.1);
					glVertex3f(0.88,0.2,-0.1);
					glVertex3f(0.88,0.2,-0.3);  
					glVertex3f(0.88,0.78,-0.3); 
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.88,0.78,-0.12);
					glVertex3f(0.88,0.22,-0.12);
					glVertex3f(0.88,0.22,-0.28);  
					glVertex3f(0.88,0.78,-0.28); 
					glEnd();
					
					//ventana central
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.88,0.77,0.1);
					glVertex3f(0.88,0.2,0.1);
					glVertex3f(0.88,0.2,-0.1);  
					glVertex3f(0.88,0.79,-0.1); 
					glEnd();
					
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.88,0.78,0.08);
					glVertex3f(0.88,0.22,0.08);
					glVertex3f(0.88,0.22,-0.08);  
					glVertex3f(0.88,0.78,-0.08); 
					glEnd();
					
					//ventana izq
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.88,0.2,0.28);
					glVertex3f(0.88,0.2,0.1);  
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.88,0.22,0.28);
					glVertex3f(0.88,0.22,0.12);  
					glVertex3f(0.88,0.78,0.12); 
					glEnd();
					
			
				// pared abajo une la pared anterior con la pared de la ventana de la segunda planta
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.6,0.8,0.6);
				glVertex3f(0.6,0.0,0.6);
				glEnd();
			
				//pared abajo donde esta la  ventana de la segunda planta
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.6,0.8,0.6);
				glVertex3f(0.6,0.0,0.6);
				glVertex3f(0.6,0.0,1.2);
				glVertex3f(0.6,0.8,1.2);
				glEnd();
				
				//Ventana
			
					//marco inferior
					glBegin(GL_LINE_LOOP);
					glVertex3f(0.6,0.2,0.8);
					glVertex3f(0.6,0.2,1);  
					glVertex3f(0.6,0.7,1); 
					glVertex3f(0.6,0.7,0.8);
					glEnd();
					//marco superior
					glBegin(GL_LINE_LOOP);
					glVertex3f(0.6,0.18,0.78);
					glVertex3f(0.6,0.18,1.02);  
					glVertex3f(0.6,0.72,1.02); 
					glVertex3f(0.6,0.72,0.78);
					glEnd();
					//union del marco inferior con las ventanas
					glBegin(GL_LINES);
					glVertex3f(0.6,0.2,0.8);
					glVertex3f(0.58,0.2,0.8); 
					glEnd();
					//ventana
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.58,0.68,0.8);
					glVertex3f(0.58,0.2,0.8);
					glVertex3f(0.58,0.2,0.98);  
					
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.58,0.68,0.82);
					glVertex3f(0.58,0.22,0.82);
					glVertex3f(0.58,0.22,0.98);   
					
					glEnd();
				
				//pared pegada a la cochera segunda plnata
				glBegin(GL_LINE_STRIP);
				glVertex3f(-0.9,0.83,1.2);
				glVertex3f(-0.9,0.0,1.2);
				glVertex3f(0.6,0.0,1.2);
				glVertex3f(0.6,0.8,1.2);
				glEnd();

			
				//ventanas atras
					//marco inferior
					glBegin(GL_LINE_LOOP);
					glVertex3f(-0.3,0.3,1.2);
					glVertex3f(-0.6,0.3,1.2);
					glVertex3f(-0.6,0.9,1.2);
					glVertex3f(-0.3,0.9,1.2);
					glEnd();
					//marco superior
					glBegin(GL_LINE_LOOP);
					glVertex3f(-0.28,0.28,1.2);
					glVertex3f(-0.62,0.28,1.2);
					glVertex3f(-0.62,0.92,1.2);
					glVertex3f(-0.28,0.92,1.2);
					glEnd();
					//union del marco con las ventanas
					glBegin(GL_LINE_STRIP);
					glVertex3f(-0.6,0.3,1.18);
					glVertex3f(-0.6,0.3,1.2);
					glEnd();
					//ventana1
					glBegin(GL_LINE_STRIP);
					glVertex3f(-0.45,0.88,1.18);
					glVertex3f(-0.45,0.3,1.18);
					glVertex3f(-0.32,0.3,1.18);
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(-0.43,0.88,1.18);
					glVertex3f(-0.43,0.32,1.18);
					glVertex3f(-0.32,0.32,1.18);
					glEnd();
					//ventana2
					glBegin(GL_LINE_STRIP);
					glVertex3f(-0.45,0.88,1.18);
					glVertex3f(-0.45,0.3,1.18);
					glVertex3f(-0.6,0.3,1.18);
					glVertex3f(-0.6,0.89,1.18);
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(-0.47,0.88,1.18);
					glVertex3f(-0.47,0.32,1.18);
					glVertex3f(-0.58,0.32,1.18);
					glVertex3f(-0.58,0.88,1.18);
					glEnd();
			
			
			
				//ventanas delante
					//marco inferior
					glBegin(GL_LINE_LOOP);
					glVertex3f(0.0,0.3,1.2);
					glVertex3f(0.3,0.3,1.2);
					glVertex3f(0.3,0.9,1.2);
					glVertex3f(0.0,0.9,1.2);
					glEnd();
					//marco superior
					glBegin(GL_LINE_LOOP);
					glVertex3f(-0.02,0.28,1.2);
					glVertex3f(0.32,0.28,1.2);
					glVertex3f(0.32,0.92,1.2);
					glVertex3f(-0.02,0.92,1.2);
					glEnd();
					//union del marco con las ventanas
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.0,0.3,1.18);
					glVertex3f(0.0,0.3,1.2);
					glEnd();
					//ventana1
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.15,0.88,1.18);
					glVertex3f(0.15,0.3,1.18);
					glVertex3f(0.28,0.3,1.18);
					
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.17,0.88,1.18);
					glVertex3f(0.17,0.32,1.18);
					glVertex3f(0.28,0.32,1.18);
					glEnd();
					//ventana2
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.0,0.88,1.18);
					glVertex3f(0.0,0.3,1.18);
					glVertex3f(0.15,0.3,1.18);
					glVertex3f(0.15,0.88,1.18);
					glEnd();
					glBegin(GL_LINE_STRIP);
					glVertex3f(0.02,0.88,1.18);
					glVertex3f(0.02,0.32,1.18);
					glVertex3f(0.13,0.32,1.18);
					glVertex3f(0.13,0.89,1.18);
					glEnd();
				
				
    
    //PRIMERA PLANTA
		// pared abajo pquenia abajo
		glBegin(GL_LINE_LOOP);
		glVertex3f(0.9,0.0,0.6);
		glVertex3f(0.9,0.0,-0.6);  
		glVertex3f(0.9,-1.1,-0.6); 
		glVertex3f(0.9,-1.1,0.6);
		glEnd();
			 // Ventanasinferior derecha
			//marco inferior
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.9,-0.2,0.3);
			glVertex3f(0.9,-0.2,-0.3);  
			glVertex3f(0.9,-0.8,-0.3); 
			glVertex3f(0.9,-0.8,0.3);
			glEnd();
			//marco superior
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.9,-0.18,0.32);
			glVertex3f(0.9,-0.18,-0.32);  
			glVertex3f(0.9,-0.82,-0.32); 
			glVertex3f(0.9,-0.82,0.32);
			glEnd();
			//union del marco inferior con las ventanas
			glBegin(GL_LINES);
			glVertex3f(0.9,-0.8,-0.3);
			glVertex3f(0.88,-0.8,-0.3); 
			
			glEnd();
			
			//ventanas
			//ventana der
			    glBegin(GL_LINE_STRIP);
				glVertex3f(0.88,-0.22,-0.1);
				glVertex3f(0.88,-0.8,-0.1);
				glVertex3f(0.88,-0.8,-0.3);  
				glVertex3f(0.88,-0.21,-0.3); 
				glEnd();
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.88,-0.22,-0.12);
				glVertex3f(0.88,-0.76,-0.12);
				glVertex3f(0.88,-0.76,-0.28);  
				glVertex3f(0.88,-0.22,-0.28); 
				glEnd();
			
			//ventana central
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.88,-0.22,0.1);
				glVertex3f(0.88,-0.8,0.1);
				glVertex3f(0.88,-0.8,-0.1);  
				glVertex3f(0.88,-0.21,-0.1); 
				glEnd();
				
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.88,-0.22,0.08);
				glVertex3f(0.88,-0.76,0.08);
				glVertex3f(0.88,-0.76,-0.08);  
				glVertex3f(0.88,-0.21,-0.08); 
				glEnd();
		
			//ventana izq
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.88,-0.8,0.28);
				glVertex3f(0.88,-0.8,0.1);  
				glEnd();
				glBegin(GL_LINE_STRIP);
				glVertex3f(0.88,-0.78,0.28);
				glVertex3f(0.88,-0.78,0.12);  
				glVertex3f(0.88,-0.22,0.12); 
				glEnd();
			    
    
		// pared abajo une la pared anterior con la pared de la puerta
		glBegin(GL_LINE_LOOP);
		glVertex3f(0.9,0.0,0.6);
		glVertex3f(0.9,-1.1,0.6);
		glVertex3f(0.6,-1.1,0.6);
		glVertex3f(0.6,0.0,0.6);
		glEnd();
		//pared abajo donde esta la puerta
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.6,-1.1,0.69);
		glVertex3f(0.6,-1.1,0.6);
		glVertex3f(0.6,0.0,0.6);
		glVertex3f(0.6,0.0,1.2);
		glVertex3f(0.6,-1.1,1.2);
		glVertex3f(0.6,-1.1,0.98);
		glEnd();
		
			// puerta 
			//tapete parte infe
			glBegin(GL_LINE_STRIP);
			//glVertex3f(0.6,-1.1,0.7);
			glVertex3f(0.7,-1.1,0.72);
			glVertex3f(0.7,-1.1,0.98);
			glVertex3f(0.6,-1.1,0.98);
			glEnd();
			//tapete parte supe
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.6,-1.08,0.72);
			glVertex3f(0.7,-1.08,0.72);
			glVertex3f(0.7,-1.08,0.98);
			glVertex3f(0.6,-1.08,0.98);
			glEnd();
			//union del tapete
			glBegin(GL_LINES);
			glVertex3f(0.7,-1.08,0.72);
			glVertex3f(0.7,-1.1,0.72);
			glEnd();
			glBegin(GL_LINES);
			glVertex3f(0.7,-1.08,0.98);
			glVertex3f(0.7,-1.1,0.98);
			glEnd();
			glBegin(GL_LINES);
			glVertex3f(0.6,-1.08,0.98);
			glVertex3f(0.6,-1.1,0.98);
			glEnd();
			
			//canopi
			//superior
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.6,-0.1,0.7);
			glVertex3f(0.6,-0.1,1);
			glVertex3f(0.68,-0.35,1);
			glVertex3f(0.68,-0.35,0.7);
			glEnd();
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.6,-0.12,1);
			glVertex3f(0.67,-0.35,1);
			glVertex3f(0.6,-0.35,1);
			glEnd();
			//union del canopi
			glBegin(GL_LINES);
			glVertex3f(0.6,-0.12,1);
			glVertex3f(0.6,-0.1,1);
			glEnd();
			glBegin(GL_LINES);
			glVertex3f(0.67,-0.35,1);
			glVertex3f(0.68,-0.35,1);
			glEnd();
			
			//arco de la puerta
			glBegin(GL_LINE_STRIP);
			glVertex3f(0.6,-0.42,0.72);
			glVertex3f(0.6,-1.08,0.72);
			glVertex3f(0.6,-1.08,0.98);
			glVertex3f(0.6,-0.36,0.98);
			glEnd();
			//puerta
			glBegin(GL_LINE_STRIP);
			glVertex3f(0.58,-0.43,0.72);
			glVertex3f(0.58,-1.08,0.72);
			glVertex3f(0.58,-1.08,0.96);
			glEnd();
			//Adornos de la puerta
			//inferior izq
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.58,-1,0.93);
			glVertex3f(0.58,-1,0.86);
			glVertex3f(0.58,-0.7,0.86);
			glVertex3f(0.58,-0.7,0.93);
			glEnd();
			//inferior der
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.58,-1,0.82);
			glVertex3f(0.58,-1,0.75);
			glVertex3f(0.58,-0.7,0.75);
			glVertex3f(0.58,-0.7,0.82);
			glEnd();
			
			//centro
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.58,-0.63,0.89);
			glVertex3f(0.58,-0.63,0.79);
			glVertex3f(0.58,-0.67,0.79);
			glVertex3f(0.58,-0.67,0.89);
			glEnd();
			//superior izq
			glBegin(GL_LINE_STRIP);
			glVertex3f(0.58,-0.4,0.93);
			glVertex3f(0.58,-0.6,0.93);
			glVertex3f(0.58,-0.6,0.86);
			glVertex3f(0.58,-0.43,0.86);
			glEnd();
			//superior der
			glBegin(GL_LINE_STRIP);
			glVertex3f(0.58,-0.44,0.82);
			glVertex3f(0.58,-0.6,0.82);
			glVertex3f(0.58,-0.6,0.75);
			glVertex3f(0.58,-0.43,0.75);
			glEnd();
	
		//pared pegada a la cochera
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.47,-1.1,1.2);
		glVertex3f(0.6,-1.1,1.2);
		glVertex3f(0.6,0.0,1.2);
		glVertex3f(-0.9,0.0,1.2);
		glVertex3f(-0.9,-0.15,1.2);
		glEnd();
		
    //cCOCHERA	
		//pared izq
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.4,-0.2,2.2);
		glVertex3f(0.4,-1.1,2.2);
		glVertex3f(-0.9,-1.1,2.2);
		glVertex3f(-0.9,-0.23,2.2);
		glEnd();
		
		//ventana de l cochera
			//arco inferior
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.1,-0.8,2.2);
			glVertex3f(0.1,-0.3,2.2);
			glVertex3f(-0.1,-0.3,2.2);
			glVertex3f(-0.1,-0.8,2.2);
			glEnd();
			//arco superior
			glBegin(GL_LINE_LOOP);
			glVertex3f(0.12,-0.82,2.2);
			glVertex3f(0.12,-0.28,2.2);
			glVertex3f(-0.12,-0.28,2.2);
			glVertex3f(-0.12,-0.82,2.2);
			glEnd();
			//union
			glBegin(GL_LINE_STRIP);
			glVertex3f(-0.1,-0.8,2.2);  
			 glVertex3f(-0.1,-0.8,2.17); 
			glEnd();
			//ventana
			glBegin(GL_LINE_STRIP);
			glVertex3f(-0.1,-0.32,2.17);
			glVertex3f(-0.1,-0.8,2.17);
			glVertex3f(0.075,-0.8,2.17);   
			glEnd();
			glBegin(GL_LINE_STRIP);
			glVertex3f(-0.08,-0.32,2.17);
			glVertex3f(-0.08,-0.78,2.17);
			glVertex3f(0.075,-0.78,2.17);   
			glEnd();
		// TECHO
			//orrilla
			glBegin(GL_LINE_STRIP);
			glVertex3f(0.4,-0.22,2.22);
			glVertex3f(0.4,0.0,1.7);
			glVertex3f(0.4,-0.2,1.2);
			glVertex3f(0.4,-0.15,1.2);
			glVertex3f(0.4,0.05,1.7);
			glVertex3f(0.4,-0.17,2.22);
			glVertex3f(0.4,-0.22,2.22);
			glVertex3f(-0.9,-0.22,2.22);
			glVertex3f(-0.9,-0.17,2.22);
			glVertex3f(0.4,-0.17,2.22);
			glEnd();
			
			//Parte superior
			glBegin(GL_LINE_STRIP);
			glVertex3f(-0.9,-0.17,2.22);
			glVertex3f(-0.9,0.05,1.7);
			glVertex3f(-0.9,-0.15,1.2);
			glVertex3f(0.4,-0.15,1.2);
			glEnd();
			glBegin(GL_LINES);
			glVertex3f(-0.9,0.05,1.7);
			glVertex3f(0.4,0.05,1.7);
			glEnd();
		// arco de la Puerta izqui
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.4,-1.1,2.2);
		glVertex3f(0.4,-1.1,2.1);
		glVertex3f(0.4,-0.3,2.1);
		glVertex3f(0.4,-0.3,1.28);
		glVertex3f(0.4,-0.35,1.28);
		glEnd();
		// continuacion del arco
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.4,-0.2,1.2);
		glVertex3f(0.4,-0.55,1.2);
		glEnd();
		
		
		//puerta
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.4,-0.3,2.1);
		glVertex3f(0.70,-0.9,2.1);
		glVertex3f(0.7,-0.9,1.3);
		glVertex3f(0.4,-0.3,1.3);
		glEnd();
		glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluLookAt(0.3,0.2,0.3 ,0,0,0, 0,1,0.0);
   glOrtho(-2.5, 2.5, -2.5,3, 1.9, -2.5);
    
    
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Ejercicio 6");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
