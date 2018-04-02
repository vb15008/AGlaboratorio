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
		glBegin(GL_POINTS);
		for (i1=0;i1<=(2*M_PI); i1+=0.01)
		{
			x1=2*cos(i1) +0;
			y1=2*sin(i1) +0;
			glVertex2f(x1,y1); 
			
		}
		glEnd();
		//inferior
		double i2, x2,y2,peri1=0;
		glBegin(GL_POINTS);
		for (i2=0;i2<=(2*M_PI); i2+=peri1)
		{
			
			if(i2>=((355*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((329*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}else if(i2>=((319*M_PI)/180.0)){
				peri1=(0.01);
				
			}
			else if(i2>=((293*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((283*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((257*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((247*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((221*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((211*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((185*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((175*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((149*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((139*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((113*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((103*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((77*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((67*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((41*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
			}
			else if(i2>=((31*M_PI)/180.0)){
				peri1=0.01;
				
			}
			else if(i2>=((5*M_PI)/180.0)){
				peri1=(26*M_PI)/180.0;
				
				
			}else if(i2==0){
				
				peri1=0.01;
				
			}
			
			x2=3*cos(i2) +0;
			y2=3*sin(i2) +0;
			glVertex2f(x2,y2); 
			
		}
		 glEnd();
		 //primer diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(5*M_PI/180.0),3*sin(5*M_PI/180.0));
			glVertex2f(3.7*cos(13*M_PI/180.0),3.7*sin(13*M_PI/180.0)); 
			glVertex2f(3.65*cos(23*M_PI/180.0),3.7*sin(23*M_PI/180.0));
			glVertex2f(3*cos(31*M_PI/180.0),3*sin(31*M_PI/180.0));
			glEnd();
			
		//segundo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(41*M_PI/180.0),3*sin(41*M_PI/180.0));
			glVertex2f(3.7*cos(49*M_PI/180.0),3.7*sin(49*M_PI/180.0)); 
			glVertex2f(3.7*cos(59*M_PI/180.0),3.7*sin(59*M_PI/180.0));
			glVertex2f(3*cos(67*M_PI/180.0),3*sin(67*M_PI/180.0));
			glEnd();
			
		//tercer diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(77*M_PI/180.0),3*sin(77*M_PI/180.0));
			glVertex2f(3.7*cos(85*M_PI/180.0),3.7*sin(87*M_PI/180.0)); 
			glVertex2f(3.7*cos(95*M_PI/180.0),3.7*sin(100*M_PI/180.0));
			glVertex2f(3*cos(103*M_PI/180.0),3*sin(103*M_PI/180.0));
			glEnd();
			
		//cuarto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(113*M_PI/180.0),3*sin(113*M_PI/180.0));
			glVertex2f(3.7*cos(121*M_PI/180.0),3.7*sin(121*M_PI/180.0)); 
			glVertex2f(3.7*cos(131*M_PI/180.0),3.7*sin(131*M_PI/180.0));
			glVertex2f(3*cos(139*M_PI/180.0),3*sin(139*M_PI/180.0));
			glEnd();
			
		//quinto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(149*M_PI/180.0),3*sin(149*M_PI/180.0));
			glVertex2f(3.7*cos(157*M_PI/180.0),3.7*sin(157*M_PI/180.0)); 
			glVertex2f(3.7*cos(167*M_PI/180.0),3.7*sin(167*M_PI/180.0));
			glVertex2f(3*cos(175*M_PI/180.0),3*sin(175*M_PI/180.0));
			glEnd();
			
		//sexto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(185*M_PI/180.0),3*sin(185*M_PI/180.0));
			glVertex2f(3.7*cos(193*M_PI/180.0),3.7*sin(193*M_PI/180.0)); 
			glVertex2f(3.7*cos(203*M_PI/180.0),3.7*sin(203*M_PI/180.0));
			glVertex2f(3*cos(211*M_PI/180.0),3*sin(211*M_PI/180.0));
			glEnd();
			
		//setimo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(221*M_PI/180.0),3*sin(221*M_PI/180.0));
			glVertex2f(3.7*cos(229*M_PI/180.0),3.7*sin(229*M_PI/180.0)); 
			glVertex2f(3.7*cos(239*M_PI/180.0),3.7*sin(239*M_PI/180.0));
			glVertex2f(3*cos(247*M_PI/180.0),3*sin(247*M_PI/180.0));
			glEnd();
			
		//octavo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(257*M_PI/180.0),3*sin(257*M_PI/180.0));
			glVertex2f(3.7*cos(265*M_PI/180.0),3.7*sin(265*M_PI/180.0)); 
			glVertex2f(3.7*cos(275*M_PI/180.0),3.7*sin(275*M_PI/180.0));
			glVertex2f(3*cos(283*M_PI/180.0),3*sin(283*M_PI/180.0));
			glEnd();
			
		//noveno diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(293*M_PI/180.0),3*sin(293*M_PI/180.0));
			glVertex2f(3.7*cos(301*M_PI/180.0),3.7*sin(301*M_PI/180.0)); 
			glVertex2f(3.7*cos(311*M_PI/180.0),3.7*sin(311*M_PI/180.0));
			glVertex2f(3*cos(319*M_PI/180.0),3*sin(319*M_PI/180.0));
			glEnd();
			
		//noveno diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(329*M_PI/180.0),3*sin(329*M_PI/180.0));
			glVertex2f(3.7*cos(337*M_PI/180.0),3.7*sin(337*M_PI/180.0)); 
			glVertex2f(3.7*cos(347*M_PI/180.0),3.7*sin(347*M_PI/180.0));
			glVertex2f(3*cos(355*M_PI/180.0),3*sin(355*M_PI/180.0));
			glEnd();
	
	//COLOR VERDE
	
	// centro
		glColor3f(0,1,0);
		double i3, x3,y3;
		glBegin(GL_POINTS);
		for (i3=0;i3<=(2*M_PI); i3+=0.01)
		{
			x3=2*cos(i3) -5;
			y3=2*sin(i3) -4.9;
			glVertex2f(x3,y3); 
			
		}
		glEnd();
		//inferior
		double i4, x4,y4,peri2=0;
		glBegin(GL_POINTS);
		for (i4=0;i4<=(2*M_PI); i4+=peri2)
		{
			
			if(i4>=((355*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((329*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}else if(i4>=((319*M_PI)/180.0)){
				peri2=(0.01);
				
			}
			else if(i4>=((293*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((283*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((257*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((247*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((221*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((211*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((185*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((175*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((149*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((139*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((113*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((103*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((77*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((67*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((41*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
			}
			else if(i4>=((31*M_PI)/180.0)){
				peri2=0.01;
				
			}
			else if(i4>=((5*M_PI)/180.0)){
				peri2=(26*M_PI)/180.0;
				
				
			}else if(i4==0){
				
				peri2=0.01;
				
			}
			
			x4=3*cos(i4) -5;
			y4=3*sin(i4) -4.9;
			glVertex2f(x4,y4); 
			
		}
		 glEnd();
		 //primer diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(5*M_PI/180.0) -5,3*sin(5*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(13*M_PI/180.0)-5,3.7*sin(13*M_PI/180.0)-4.9); 
			glVertex2f(3.65*cos(23*M_PI/180.0)-5,3.7*sin(23*M_PI/180.0)-4.9);
			glVertex2f(3*cos(31*M_PI/180.0)-5,3*sin(31*M_PI/180.0)-4.9);
			glEnd();
			
		//segundo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(41*M_PI/180.0)-5,3*sin(41*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(49*M_PI/180.0)-5,3.7*sin(49*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(59*M_PI/180.0)-5,3.7*sin(59*M_PI/180.0)-4.9);
			glVertex2f(3*cos(67*M_PI/180.0)-5,3*sin(67*M_PI/180.0)-4.9);
			glEnd();
			
		//tercer diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(77*M_PI/180.0)-5,3*sin(77*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(85*M_PI/180.0)-5,3.7*sin(87*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(95*M_PI/180.0)-5,3.7*sin(100*M_PI/180.0)-4.9);
			glVertex2f(3*cos(103*M_PI/180.0)-5,3*sin(103*M_PI/180.0)-4.9);
			glEnd();
			
		//cuarto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(113*M_PI/180.0)-5,3*sin(113*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(121*M_PI/180.0)-5,3.7*sin(121*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(131*M_PI/180.0)-5,3.7*sin(131*M_PI/180.0)-4.9);
			glVertex2f(3*cos(139*M_PI/180.0)-5,3*sin(139*M_PI/180.0)-4.9);
			glEnd();
			
		//quinto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(149*M_PI/180.0)-5,3*sin(149*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(157*M_PI/180.0)-5,3.7*sin(157*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(167*M_PI/180.0)-5,3.7*sin(167*M_PI/180.0)-4.9);
			glVertex2f(3*cos(175*M_PI/180.0)-5,3*sin(175*M_PI/180.0)-4.9);
			glEnd();
			
		//sexto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(185*M_PI/180.0)-5,3*sin(185*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(193*M_PI/180.0)-5,3.7*sin(193*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(203*M_PI/180.0)-5,3.7*sin(203*M_PI/180.0)-4.9);
			glVertex2f(3*cos(211*M_PI/180.0)-5,3*sin(211*M_PI/180.0)-4.9);
			glEnd();
			
		//setimo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(221*M_PI/180.0)-5,3*sin(221*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(229*M_PI/180.0)-5,3.7*sin(229*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(239*M_PI/180.0)-5,3.7*sin(239*M_PI/180.0)-4.9);
			glVertex2f(3*cos(247*M_PI/180.0)-5,3*sin(247*M_PI/180.0)-4.9);
			glEnd();
			
		//octavo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(257*M_PI/180.0)-5,3*sin(257*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(265*M_PI/180.0)-5,3.7*sin(265*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(275*M_PI/180.0)-5,3.7*sin(275*M_PI/180.0)-4.9);
			glVertex2f(3*cos(283*M_PI/180.0)-5,3*sin(283*M_PI/180.0)-4.9);
			glEnd();
			
		//noveno diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(293*M_PI/180.0)-5,3*sin(293*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(301*M_PI/180.0)-5,3.7*sin(301*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(311*M_PI/180.0)-5,3.7*sin(311*M_PI/180.0)-4.9);
			glVertex2f(3*cos(319*M_PI/180.0)-5,3*sin(319*M_PI/180.0)-4.9);
			glEnd();
			
		//noveno diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(329*M_PI/180.0)-5,3*sin(329*M_PI/180.0)-4.9);
			glVertex2f(3.7*cos(337*M_PI/180.0)-5,3.7*sin(337*M_PI/180.0)-4.9); 
			glVertex2f(3.7*cos(347*M_PI/180.0)-5,3.7*sin(347*M_PI/180.0)-4.9);
			glVertex2f(3*cos(355*M_PI/180.0)-5,3*sin(355*M_PI/180.0)-4.9);
			glEnd();
			
			
			
			
			
			
	//COLOR ROJO
	
	// centro
		glColor3f(0.5,0.5,0.5);
		double i5, x5,y5;
		glBegin(GL_POINTS);
		for (i5=0;i5<=(2*M_PI); i5+=0.01)
		{
			x5=2*cos(i5) +6.2;
			y5=2*sin(i5) -3.2;
			glVertex2f(x5,y5); 
			
		}
		glEnd();
		//inferior
		double i6, x6,y6,peri3=0;
		glBegin(GL_POINTS);
		for (i6=0;i6<=(2*M_PI); i6+=peri3)
		{
			
			if(i6>=((355*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((329*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}else if(i6>=((319*M_PI)/180.0)){
				peri3=(0.01);
				
			}
			else if(i6>=((293*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((283*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((257*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((247*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((221*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((211*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((185*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((175*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((149*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((139*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((113*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((103*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((77*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((67*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((41*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
			}
			else if(i6>=((31*M_PI)/180.0)){
				peri3=0.01;
				
			}
			else if(i6>=((5*M_PI)/180.0)){
				peri3=(26*M_PI)/180.0;
				
				
			}else if(i6==0){
				
				peri3=0.01;
				
			}
			
			x6=3*cos(i6) +6.2;
			y6=3*sin(i6) -3.2;
			glVertex2f(x6,y6); 
			
		}
		 glEnd();
		 //primer diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(5*M_PI/180.0) +6.2,3*sin(5*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(13*M_PI/180.0)+6.2,3.7*sin(13*M_PI/180.0)-3.2); 
			glVertex2f(3.65*cos(23*M_PI/180.0)+6.2,3.7*sin(23*M_PI/180.0)-3.2);
			glVertex2f(3*cos(31*M_PI/180.0)+6.2,3*sin(31*M_PI/180.0)-3.2);
			glEnd();
			
		//segundo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(41*M_PI/180.0)+6.2,3*sin(41*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(49*M_PI/180.0)+6.2,3.7*sin(49*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(59*M_PI/180.0)+6.2,3.7*sin(59*M_PI/180.0)-3.2);
			glVertex2f(3*cos(67*M_PI/180.0)+6.2,3*sin(67*M_PI/180.0)-3.2);
			glEnd();
			
		//tercer diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(77*M_PI/180.0)+6.2,3*sin(77*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(85*M_PI/180.0)+6.2,3.7*sin(87*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(95*M_PI/180.0)+6.2,3.7*sin(100*M_PI/180.0)-3.2);
			glVertex2f(3*cos(103*M_PI/180.0)+6.2,3*sin(103*M_PI/180.0)-3.2);
			glEnd();
			
		//cuarto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(113*M_PI/180.0)+6.2,3*sin(113*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(121*M_PI/180.0)+6.2,3.7*sin(121*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(131*M_PI/180.0)+6.2,3.7*sin(131*M_PI/180.0)-3.2);
			glVertex2f(3*cos(139*M_PI/180.0)+6.2,3*sin(139*M_PI/180.0)-3.2);
			glEnd();
			
		//quinto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(149*M_PI/180.0)+6.2,3*sin(149*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(157*M_PI/180.0)+6.2,3.7*sin(157*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(167*M_PI/180.0)+6.2,3.7*sin(167*M_PI/180.0)-3.2);
			glVertex2f(3*cos(175*M_PI/180.0)+6.2,3*sin(175*M_PI/180.0)-3.2);
			glEnd();
			
		//sexto diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(185*M_PI/180.0)+6.2,3*sin(185*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(193*M_PI/180.0)+6.2,3.7*sin(193*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(203*M_PI/180.0)+6.2,3.7*sin(203*M_PI/180.0)-3.2);
			glVertex2f(3*cos(211*M_PI/180.0)+6.2,3*sin(211*M_PI/180.0)-3.2);
			glEnd();
			
		//setimo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(221*M_PI/180.0)+6.2,3*sin(221*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(229*M_PI/180.0)+6.2,3.7*sin(229*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(239*M_PI/180.0)+6.2,3.7*sin(239*M_PI/180.0)-3.2);
			glVertex2f(3*cos(247*M_PI/180.0)+6.2,3*sin(247*M_PI/180.0)-3.2);
			glEnd();
			
		//octavo diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(257*M_PI/180.0)+6.2,3*sin(257*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(265*M_PI/180.0)+6.2,3.7*sin(265*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(275*M_PI/180.0)+6.2,3.7*sin(275*M_PI/180.0)-3.2);
			glVertex2f(3*cos(283*M_PI/180.0)+6.2,3*sin(283*M_PI/180.0)-3.2);
			glEnd();
			
		//noveno diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(293*M_PI/180.0)+6.2,3*sin(293*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(301*M_PI/180.0)+6.2,3.7*sin(301*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(311*M_PI/180.0)+6.2,3.7*sin(311*M_PI/180.0)-3.2);
			glVertex2f(3*cos(319*M_PI/180.0)+6.2,3*sin(319*M_PI/180.0)-3.2);
			glEnd();
			
		//noveno diente
			glBegin(GL_LINE_STRIP);
			glVertex2f(3*cos(329*M_PI/180.0)+6.2,3*sin(329*M_PI/180.0)-3.2);
			glVertex2f(3.7*cos(337*M_PI/180.0)+6.2,3.7*sin(337*M_PI/180.0)-3.2); 
			glVertex2f(3.7*cos(347*M_PI/180.0)+6.2,3.7*sin(347*M_PI/180.0)-3.2);
			glVertex2f(3*cos(355*M_PI/180.0)+6.2,3*sin(355*M_PI/180.0)-3.2);
			glEnd();
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
