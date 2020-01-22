#include<cstdio>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLint traffic_regulator=1;
GLint traffic_regulator1=0;

GLfloat p=0,q=0,r=1;
GLfloat a=1,b=0,c=0;

GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat speed1 = .05f;
GLfloat speed2 = .03f;

void display();
void Road1();
void Road2();
void Signal();
void signal1();
void car1();
void car2();
void car3();
void bus1();
void bus2();
void remon();
void bus3();
void Building1();
void Building2();
void upperquad();
void firstquard();
void fourthquard();


void handleKeypress(unsigned char key, int x, int y) {

    if(key=='z' || key=='Z')
	{

    traffic_regulator1=0;
    a=1;
	b=0;
	c=0;

	}

	if(key=='x' || key=='X'){
    traffic_regulator1=0;
	a=0;
	b=1;
	c=0;
	}

    if(key=='c' || key=='C'){
    traffic_regulator1=1;
	a=0;
	b=0;
	c=1;
    }


glutPostRedisplay();


	}



///+X TO -X
void update1(int value) {


    if(position1 < -1.8)
      position1 = 1.0f;
      position1 -=speed1;

	glutPostRedisplay();

}
///-X TO +X

void update2(int value) {


    if(position2 > 1.8)
      position2 = -1.0f;
      position2 +=speed1;

	glutPostRedisplay();

}
///-Y TO +Y

void update3(int value) {

    if(position3 > 1.4)
      position3 = -1.0f;
      position3 +=speed2;

	glutPostRedisplay();

}

///+Y TO -Y
void update4(int value) {

    if(position4 <- 2.1)
      position4 = 0.2f;
      position4 -=speed2;

	glutPostRedisplay();

}



void myMouse(int button,int state,int x,int y)
{
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
	traffic_regulator=0;
	p=1;
	q=0;
	r=0;
	}

	if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
	traffic_regulator=0;
	p=0;
	q=1;
	r=0;
	}
	if(button==GLUT_RIGHT_BUTTON && state==GLUT_UP)
	{

	traffic_regulator=1;
	p=0;
	q=0;
	r=1;
	}
	glutPostRedisplay();

}

void mydisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);

display();

}

void display() {



     if(traffic_regulator)
    {
      glutTimerFunc(100,update1,0);
     glutTimerFunc(100,update2,0);
    }

     if(traffic_regulator1)
    {

        glutTimerFunc(100,update3,0);
        glutTimerFunc(100,update4,0);
    }

     glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


    remon();
    upperquad();
    Road1();
    Road2();
    car1();
    car2();
    bus1();
    bus2();
    bus3();

    Building2();
    Building1();
    firstquard();
    fourthquard();
    //upperquad();
    Signal();
    signal1();


   glFlush();
}

void Road1()
{
    ///ROAD
///
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-1.0,-0.5);
    glVertex2f(1.0,-0.5);
    glVertex2f(1.0,0.3);
    glVertex2f(-1.0,0.3);
    glEnd();


///MIDDLE
///FOR -X

     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.48,-0.12);
    glVertex2f(-0.48,-0.08);
    glVertex2f(-0.54,-0.08);
    glVertex2f(-0.54,-0.12);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.57,-0.12);
    glVertex2f(-0.57,-0.08);
    glVertex2f(-0.63,-0.08);
    glVertex2f(-0.63,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.66,-0.12);
    glVertex2f(-0.66,-0.08);
    glVertex2f(-0.72,-0.08);
    glVertex2f(-0.72,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.75,-0.12);
    glVertex2f(-0.75,-0.08);
    glVertex2f(-0.81,-0.08);
    glVertex2f(-0.81,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.84,-0.12);
    glVertex2f(-0.84,-0.08);
    glVertex2f(-0.9,-0.08);
    glVertex2f(-0.9,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.93,-0.12);
    glVertex2f(-0.93,-0.08);
    glVertex2f(-0.99,-0.08);
    glVertex2f(-0.99,-0.12);
    glEnd();

///MIDDLE
///FOR +X

     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(0.48,-0.12);
    glVertex2f(0.48,-0.08);
    glVertex2f(0.54,-0.08);
    glVertex2f(0.54,-0.12);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(0.57,-0.12);
    glVertex2f(0.57,-0.08);
    glVertex2f(0.63,-0.08);
    glVertex2f(0.63,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(0.66,-0.12);
    glVertex2f(0.66,-0.08);
    glVertex2f(0.72,-0.08);
    glVertex2f(0.72,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(0.75,-0.12);
    glVertex2f(0.75,-0.08);
    glVertex2f(0.81,-0.08);
    glVertex2f(0.81,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(0.84,-0.12);
    glVertex2f(0.84,-0.08);
    glVertex2f(.9,-0.08);
    glVertex2f(0.9,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(0.93,-0.12);
    glVertex2f(0.93,-0.08);
    glVertex2f(0.99,-0.08);
    glVertex2f(0.99,-0.12);
    glEnd();
///ZEBRA CROSSING
///FOR -X

   glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,0.24);
    glVertex2f(-0.45,0.24);
    glVertex2f(-0.45,0.19);
    glVertex2f(-0.36,0.19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,0.16);
    glVertex2f(-0.45,0.16);
    glVertex2f(-0.45,0.1);
    glVertex2f(-0.36,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,0.05);
    glVertex2f(-0.45,0.05);
    glVertex2f(-0.45,-0.01);
    glVertex2f(-0.36,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,-0.05);
    glVertex2f(-0.45,-0.05);
    glVertex2f(-0.45,-0.11);
    glVertex2f(-0.36,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,-0.15);
    glVertex2f(-0.45,-0.15);
    glVertex2f(-0.45,-0.21);
    glVertex2f(-0.36,-0.21);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,-0.25);
    glVertex2f(-0.45,-0.25);
    glVertex2f(-0.45,-0.31);
    glVertex2f(-0.36,-0.31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.36,-0.35);
    glVertex2f(-0.45,-0.35);
    glVertex2f(-0.45,-0.41);
    glVertex2f(-0.36,-0.41);
    glEnd();



///ZEBRA CROSSING
///FOR +X

   glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,0.24);
    glVertex2f(0.45,0.24);
    glVertex2f(0.45,0.19);
    glVertex2f(0.36,0.19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,0.16);
    glVertex2f(0.45,0.16);
    glVertex2f(0.45,0.1);
    glVertex2f(0.36,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,0.05);
    glVertex2f(0.45,0.05);
    glVertex2f(0.45,-0.01);
    glVertex2f(0.36,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,-0.05);
    glVertex2f(0.45,-0.05);
    glVertex2f(0.45,-0.11);
    glVertex2f(0.36,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,-0.15);
    glVertex2f(0.45,-0.15);
    glVertex2f(0.45,-0.21);
    glVertex2f(0.36,-0.21);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,-0.25);
    glVertex2f(0.45,-0.25);
    glVertex2f(0.45,-0.31);
    glVertex2f(0.36,-0.31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.36,-0.35);
    glVertex2f(0.45,-0.35);
    glVertex2f(0.45,-0.41);
    glVertex2f(0.36,-0.41);
    glEnd();


///FOOT PATH
///FOR -X

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(-0.32,0.3);
    glVertex2f(-1.0,0.3);
    glVertex2f(-1.0,0.25);
    glVertex2f(-0.32,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(-0.32,-0.5);
    glVertex2f(-1.0,-0.5);
    glVertex2f(-1.0,-0.45);
    glVertex2f(-0.32,-0.45);
    glEnd();

///FOOT PATH
///FOR +X

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(0.32,0.3);
    glVertex2f(1.0,0.3);
    glVertex2f(1.0,0.25);
    glVertex2f(0.32,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(0.32,-0.5);
    glVertex2f(1.0,-0.5);
    glVertex2f(1.0,-0.45);
    glVertex2f(0.32,-0.45);
    glEnd();

}
///
///ROAD2
///
void Road2()

{

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.35,-1.0);
    glVertex2f(0.35,-1.0);
    glVertex2f(0.35,0.753);
    glVertex2f(-0.35,0.753);
    glEnd();

/////road divider

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, 0.49f);
     glVertex2f(-0.01f, 0.43f);
     glVertex2f(0.01f, 0.43f);
    glVertex2f(0.01f, 0.49f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, 0.58f);
     glVertex2f(-0.01f, 0.52f);
     glVertex2f(0.01f, 0.52f);
    glVertex2f(0.01f, 0.58f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, 0.67f);
     glVertex2f(-0.01f, 0.61f);
     glVertex2f(0.01f, 0.61f);
    glVertex2f(0.01f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, 0.76f);
     glVertex2f(-0.01f, 0.70f);
     glVertex2f(0.01f, 0.70f);
    glVertex2f(0.01f, 0.76f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.69f);
     glVertex2f(-0.01f, -0.63f);
     glVertex2f(0.01f, -0.63f);
    glVertex2f(0.01f, -0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.78f);
     glVertex2f(-0.01f, -0.72f);
     glVertex2f(0.01f, -0.72f);
    glVertex2f(0.01f, -0.78f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.87f);
     glVertex2f(-0.01f, -0.81f);
     glVertex2f(0.01f, -0.81f);
    glVertex2f(0.01f, -0.87f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.96f);
     glVertex2f(-0.01f, -0.90f);
     glVertex2f(0.01f, -0.90f);
    glVertex2f(0.01f, -0.96f);
    glEnd();

    //road zebra crossing


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.28f, 0.40f);
     glVertex2f(-0.28f, 0.31f);
     glVertex2f(-0.25f, 0.31f);
    glVertex2f(-0.25f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.23f, 0.40f);
     glVertex2f(-0.23f, 0.31f);
     glVertex2f(-0.20f, 0.31f);
    glVertex2f(-0.20f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.18f, 0.40f);
     glVertex2f(-0.18f, 0.31f);
     glVertex2f(-0.15f, 0.31f);
    glVertex2f(-0.15f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.13f, 0.40f);
     glVertex2f(-0.13f, 0.31f);
     glVertex2f(-0.10f, 0.31f);
    glVertex2f(-0.10f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.08f, 0.40f);
     glVertex2f(-0.08f, 0.31f);
     glVertex2f(-0.05f, 0.31f);
    glVertex2f(-0.05f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.03f, 0.40f);
     glVertex2f(-0.03f, 0.31f);
     glVertex2f(-0.00f, 0.31f);
    glVertex2f(-0.00f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.02f, 0.40f);
     glVertex2f(0.02f, 0.31f);
     glVertex2f(0.05f, 0.31f);
    glVertex2f(0.05f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.07f, 0.40f);
     glVertex2f(0.07f, 0.31f);
     glVertex2f(0.10f, 0.31f);
    glVertex2f(0.10f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.12f, 0.40f);
     glVertex2f(0.12f, 0.31f);
     glVertex2f(0.15f, 0.31f);
    glVertex2f(0.15f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.17f, 0.40f);
     glVertex2f(0.17f, 0.31f);
     glVertex2f(0.20f, 0.31f);
    glVertex2f(0.20f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.22f, 0.40f);
     glVertex2f(0.22f, 0.31f);
     glVertex2f(0.25f, 0.31f);
    glVertex2f(0.25f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.27f, 0.40f);
     glVertex2f(0.27f, 0.31f);
     glVertex2f(0.30f, 0.31f);
    glVertex2f(0.30f, 0.40f);
    glEnd();

    //zebra down

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.28f, -0.60f);
     glVertex2f(-0.28f, -0.51f);
     glVertex2f(-0.25f, -0.51f);
    glVertex2f(-0.25f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.23f, -0.60f);
     glVertex2f(-0.23f, -0.51f);
     glVertex2f(-0.20f, -0.51f);
    glVertex2f(-0.20f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.18f, -0.60f);
     glVertex2f(-0.18f, -0.51f);
     glVertex2f(-0.15f, -0.51f);
    glVertex2f(-0.15f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.13f, -0.60f);
     glVertex2f(-0.13f, -0.51f);
     glVertex2f(-0.10f, -0.51f);
    glVertex2f(-0.10f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.08f, -0.60f);
     glVertex2f(-0.08f, -0.51f);
     glVertex2f(-0.05f, -0.51f);
    glVertex2f(-0.05f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.03f, -0.60f);
     glVertex2f(-0.03f, -0.51f);
     glVertex2f(-0.00f, -0.51f);
    glVertex2f(-0.00f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.02f, -0.60f);
     glVertex2f(0.02f, -0.51f);
     glVertex2f(0.05f, -0.51f);
    glVertex2f(0.05f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.07f, -0.60f);
     glVertex2f(0.07f, -0.51f);
     glVertex2f(0.10f, -0.51f);
    glVertex2f(0.10f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.12f, -0.60f);
     glVertex2f(0.12f, -0.51f);
     glVertex2f(0.15f, -0.51f);
    glVertex2f(0.15f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.17f, -0.60f);
     glVertex2f(0.17f, -0.51f);
     glVertex2f(0.20f, -0.51f);
    glVertex2f(0.20f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.60f);
     glVertex2f(0.22f, -0.51f);
     glVertex2f(0.25f, -0.51f);
    glVertex2f(0.25f, -0.60f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.27f, -0.60f);
     glVertex2f(0.27f, -0.51f);
     glVertex2f(0.30f, -0.51f);
    glVertex2f(0.30f, -0.60f);
    glEnd();

    //footpath

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(0.32f, 0.30f);
     glVertex2f(0.35f, 0.30f);
     glVertex2f(0.35f, 0.753f);
    glVertex2f(0.32f, 0.753f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(-0.35f, 0.30f);
     glVertex2f(-0.32f, 0.30f);
     glVertex2f(-0.32f, 0.753f);
    glVertex2f(-0.35f, 0.753f);
    glEnd();

    //footpath down

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(0.32f, -0.50f);
     glVertex2f(0.35f, -0.50f);
     glVertex2f(0.35f, -1.0f);
    glVertex2f(0.32f, -1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(-0.35f, -0.50f);
     glVertex2f(-0.32f, -0.50f);
     glVertex2f(-0.32f, -1.0f);
    glVertex2f(-0.35f, -1.0f);
    glEnd();
}

////SIGNAL
///FOR +X,+Y
///
void Signal()
{

     glColor3ub(0,0,0);
     ///Satnd
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();

///Signal

    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    ///RED

    glBegin(GL_QUADS);
    glColor3f(p,0,0);
    glVertex2f(-0.51f, 0.14f);
    glVertex2f(-0.498f, 0.14f);
    glVertex2f(-0.498f, 0.18f);
    glVertex2f(-0.51f, 0.18f);
    glEnd();

    ///YELLOW

    glBegin(GL_QUADS);
    glColor3f(q,q,0);
    glVertex2f(-0.487f, 0.14f);
    glVertex2f(-0.474f, 0.14f);
    glVertex2f(-0.474f, 0.18f);
    glVertex2f(-0.487f, 0.18f);
    glEnd();

    ///GREEN

    glBegin(GL_QUADS);
    glColor3f(0,r,0);
    glVertex2f(-0.465f, 0.14f);
    glVertex2f(-0.452f, 0.14f);
    glVertex2f(-0.452f, 0.18f);
    glVertex2f(-0.465f, 0.18f);
    glEnd();


    ////SIGNAL
///FOR +X,-Y
///
    ///Satnd
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.35f, -0.495f);
    glVertex2f(0.35f, -0.51f);
    glVertex2f(0.55f, -0.6f);
    glVertex2f(0.55f, -0.57f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.54f, -0.59f);
    glVertex2f(0.55f, -0.59f);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.54f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.54f, -0.34f);
    glVertex2f(0.525f, -0.34f);
    glVertex2f(0.525f, -0.35f);
    glVertex2f(0.54f, -0.35f);
    glEnd();

///Signal

    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(0.525f, -0.3f);
    glVertex2f(0.435f, -0.3f);
    glVertex2f(0.435f, -0.38f);
    glVertex2f(0.525f, -0.38f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(0.515f, -0.31f);
    glVertex2f(0.445f, -0.31f);
    glVertex2f(0.445f, -0.37f);
    glVertex2f(0.515f, -0.37f);
    glEnd();

    ///RED

    glBegin(GL_QUADS);
    glColor3f(p,0.0f,0.0f);
    glVertex2f(0.51f, -0.32f);
    glVertex2f(0.498f, -0.32f);
    glVertex2f(0.498f, -0.36f);
    glVertex2f(0.51f, -0.36f);
    glEnd();

    ///YELLOW

    glBegin(GL_QUADS);
    glColor3f(q,q,0.0);
    glVertex2f(0.487f, -0.32f);
    glVertex2f(0.474f, -0.32f);
    glVertex2f(0.474f, -0.36f);
    glVertex2f(0.487f, -0.36f);
    glEnd();

    ///GREEN
    glBegin(GL_QUADS);
    glColor3f(0.0,r,0.0);
    glVertex2f(0.465f, -0.32f);
    glVertex2f(0.452f, -0.32f);
    glVertex2f(0.452f, -0.36f);
    glVertex2f(0.465f, -0.36f);
    glEnd();

}
///Signal
///FOR -X,-Y


void signal1(){

  ///Stand
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    //glColor3ub(0,0,0);
    glVertex2f(-0.35f, -0.5f);
    glVertex2f(-0.355f, -0.5f);
    glVertex2f(-0.4f, -0.7f);
    glVertex2f(-0.39f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(0,0,0);
    glVertex2f(-0.39f, -0.69f);
    glVertex2f(-0.39f, -0.7f);
    glVertex2f(-0.17f, -0.7f);
    glVertex2f(-0.17f, -0.69f);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(0,0,0);
    glVertex2f(-0.25f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.255f, -0.67f);
    glVertex2f(-0.255f, -0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.272f, -0.67f);
    glVertex2f(-0.238f, -0.67f);
    glVertex2f(-0.238f, -0.555f);
    glVertex2f(-0.272f, -0.555f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.268f, -0.565f);
    glVertex2f(-0.242f, -0.565f);
    glVertex2f(-0.242f, -0.665f);
    glVertex2f(-0.268f, -0.665f);
    glEnd();

    ///RED

    glBegin(GL_QUADS);
    glColor3f(a,0.0f,0.0f);
    glVertex2f(-0.265f, -0.656f);
    glVertex2f(-0.245f, -0.656f);
    glVertex2f(-0.245f, -0.638f);
    glVertex2f(-0.265f, -0.638f);
    glEnd();


   ///YELLOW

    glBegin(GL_QUADS);
    glColor3f(b,b,0.0f);
    glVertex2f(-0.265f, -0.628f);
    glVertex2f(-0.245f, -0.628f);
    glVertex2f(-0.245f, -0.605f);
    glVertex2f(-0.265f, -0.605f);
    glEnd();

    ///GREEN

    glBegin(GL_QUADS);
    glColor3f(0.0f,c,0.0f);
    glVertex2f(-0.265f, -0.575f);
    glVertex2f(-0.245f, -0.575f);
    glVertex2f(-0.245f, -0.597f);
    glVertex2f(-0.265f, -0.597f);
    glEnd();

    ///Signal
    ///FOR X,Y
    ///Stand
glTranslatef(0.0f,-0.2f,0.0f);

glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    //glColor3ub(0,0,0);
    glVertex2f(0.35f, 0.5f);
    glVertex2f(0.355f, 0.5f);
    glVertex2f(0.4f, 0.7f);
    glVertex2f(0.39f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(0,0,0);
    glVertex2f(0.39f, 0.69f);
    glVertex2f(0.39f,0.7f);
    glVertex2f(0.17f, 0.7f);
    glVertex2f(0.17f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(0,0,0);
    glVertex2f(0.25f, 0.69f);
    glVertex2f(0.25f, 0.67f);
    glVertex2f(0.255f, 0.67f);
    glVertex2f(0.255f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(0.272f, 0.67f);
    glVertex2f(0.238f, 0.67f);
    glVertex2f(0.238f, 0.555f);
    glVertex2f(0.272f, 0.555f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(0.268f, 0.565f);
    glVertex2f(0.242f, 0.565f);
    glVertex2f(0.242f, 0.665f);
    glVertex2f(0.268f, 0.665f);
    glEnd();

    ///RED

    glBegin(GL_QUADS);
    glColor3f(a,0.0f,0.0f);
    glVertex2f(0.265f, 0.665);
    glVertex2f(0.245f, 0.665f);
    glVertex2f(0.245f, 0.638f);
    glVertex2f(0.265f, 0.638f);
    glEnd();


   ///YELLOW

    glBegin(GL_QUADS);
    glColor3f(b,b,0.0f);
    glVertex2f(0.265f, 0.63f);
    glVertex2f(0.245f, 0.63f);
    glVertex2f(0.245f, 0.605f);
    glVertex2f(0.265f, 0.605f);
    glEnd();

    ///GREEN

    glBegin(GL_QUADS);
    glColor3f(0.0f,c,0.0f);
    glVertex2f(0.265f, 0.57f);
    glVertex2f(0.245f, 0.57f);
    glVertex2f(0.245f, 0.595f);
    glVertex2f(0.265f, 0.595f);
    glEnd();

    glLoadIdentity();

}

///RED CAR
///-X TO +X
///
void car1()
{
    glTranslatef(0.3f,0.0f,0.0f);
       glPushMatrix();
    glTranslated(position2,0.0f,0.0f);
      glBegin(GL_POLYGON);
      glColor3f(1.0f,0.0f,0.0f);
      glVertex2f(-0.98f,0.055f);
      glVertex2f(-0.97f,0.04f);
      glVertex2f(-0.75f,0.04f);
      glVertex2f(-0.75f,0.07f);
      glVertex2f(-0.74f,0.07f);
      glVertex2f(-0.76f,0.1f);
      glVertex2f(-0.98f,0.1f);
      glEnd();


    glBegin(GL_POLYGON);
      glColor3f(1.0f,0.0f,0.0f);
      glVertex2f(-0.8f,0.1f);
      glVertex2f(-0.84f,0.17f);
      glVertex2f(-0.915f,0.17f);
      glVertex2f(-0.96f,0.1f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3f(1.0f,1.0f,1.0f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glEnd();


      glBegin(GL_LINES);
      glColor3f(0.0f,0.0f,0.0f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.9f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.845f, 0.15f);
      glVertex2f(-0.845f, 0.1f);

      glEnd();

int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslatef(0.12f,0.0f,0.0f);
	glScalef(1.0f,1.0f,0);

		glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

      glLoadIdentity();



}


///BUS
///+X TO -X

void bus1()
{


     glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
    glTranslatef(0.7,-0.4,0.0);
    glScalef(0.5f,0.6,0.0);
    glBegin(GL_POLYGON);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f( 0.0f,  0.1f);
      glVertex2f( 0.5f,  0.1f);
      glVertex2f( 0.5f,  0.4f);
      glVertex2f( 0.1f,  0.4f);
      glVertex2f( 0.0f,  0.25f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(51,153,255);
      glVertex2f( 0.0f,   0.25f);
      glVertex2f( 0.1f,   0.25f);
      glVertex2f( 0.1f,   0.4f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.11f,  0.35f);
      glVertex2f( 0.11f,  0.2f);
      glVertex2f( 0.18f,   0.2f);
      glVertex2f( 0.18f,   0.35f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.185f,  0.35f);
      glVertex2f( 0.185f,  0.15f);
      glVertex2f( 0.25f,  0.15f);
      glVertex2f( 0.25f,  0.35f);
      glEnd();



      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.26f,  0.35f);
      glVertex2f( 0.26f,  0.25f);
      glVertex2f( 0.33f,  0.25f);
      glVertex2f( 0.33f,  0.35f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.335f,  0.35f);
      glVertex2f( 0.335f,  0.25f);
      glVertex2f( 0.41f,  0.25f);
      glVertex2f( 0.41f,  0.35f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.415f,  0.35f);
      glVertex2f( 0.415f,  0.25f);
      glVertex2f( 0.48f,  0.25f);
      glVertex2f( 0.48f,  0.35f);
      glEnd();



      glColor3f(.0f, .0f, .0f);

    int i;

	GLfloat x=.1f; GLfloat y=0.1f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat w=.4f; GLfloat z=0.1f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(w, z); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            w + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    z + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glPopMatrix();

	glLoadIdentity();
}

///CAR
///+X TO -X

void car2()
{
      glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
      glRotatef(180,0.0,1.0,0.0);
      glTranslatef(.3f,-0.4f,0.0f);
      glBegin(GL_POLYGON);
      glColor3f(0.0f,0.0f,1.0f);
      glVertex2f(-0.98f,0.055f);
      glVertex2f(-0.97f,0.04f);
      glVertex2f(-0.75f,0.04f);
      glVertex2f(-0.75f,0.07f);
      glVertex2f(-0.74f,0.07f);
      glVertex2f(-0.76f,0.1f);
      glVertex2f(-0.98f,0.1f);
      glEnd();


    glBegin(GL_POLYGON);
      glColor3f(0.0f,0.0f,1.0f);
      glVertex2f(-0.8f,0.1f);
      glVertex2f(-0.84f,0.17f);
      glVertex2f(-0.915f,0.17f);
      glVertex2f(-0.96f,0.1f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3f(1.0f,1.0f,1.0f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glEnd();


      glBegin(GL_LINES);
      glColor3f(0.0f,0.0f,0.0f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.9f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.845f, 0.15f);
      glVertex2f(-0.845f, 0.1f);

      glEnd();

int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslatef(0.12f,0.0f,0.0f);
	glScalef(1.0f,1.0f,0);

		glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

      glLoadIdentity();

}

///+Y TO -Y
///

void bus2(){

      glPushMatrix();
    glTranslated(0.0f,position4,0.0f);
    glBegin(GL_QUADS);
      glColor3ub(255,204,229);
      glVertex2f( 0.2f,  0.7f);
      glVertex2f( 0.2f,  0.5f);
      glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.1f,  0.7f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(153,0,76);
      glVertex2f(0.1f,0.5f);
      glVertex2f(0.1f,0.4f);
      glVertex2f(0.15f,0.38f);
      glVertex2f(0.2f,0.4f);
      glVertex2f(0.2f,0.5f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.1f,  0.44f);
      glVertex2f( 0.2f,  0.44f);
      glVertex2f( 0.2f,  0.5f);
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(153,0,76);
      glVertex2f( 0.2f,  0.44f);
      glVertex2f( 0.2f,  0.5f);
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(153,0,76);
       glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.1f,  0.44f);
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(153,0,76);
       glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.2f,  0.5f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.13f,  0.56f);
      glVertex2f( 0.13f,  0.53f);
      glVertex2f( 0.17f,  0.53f);
      glVertex2f( 0.17f,  0.56f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.13f,  0.66f);
      glVertex2f( 0.13f,  0.63f);
      glVertex2f( 0.17f,  0.63f);
      glVertex2f( 0.17f,  0.66f);
      glEnd();

       glBegin(GL_LINES);
      glColor3ub(0,0,0);
       glVertex2f( 0.13f,  0.66f);
      glVertex2f( 0.13f,  0.63f);
      glVertex2f( 0.17f,  0.63f);
      glVertex2f( 0.17f,  0.66f);
      glVertex2f( 0.13f,  0.63f);
      glVertex2f( 0.17f,  0.63f);
      glVertex2f( 0.17f,  0.66f);
      glVertex2f( 0.13f,  0.66f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f( 0.13f,  0.56f);
      glVertex2f( 0.13f,  0.53f);
      glVertex2f( 0.17f,  0.53f);
      glVertex2f( 0.17f,  0.56f);
      glVertex2f( 0.13f,  0.53f);
      glVertex2f( 0.17f,  0.53f);
      glVertex2f( 0.17f,  0.56f);
      glVertex2f( 0.13f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.11f,  0.42f);
      glVertex2f( 0.11f,  0.41f);
      glVertex2f( 0.12f,  0.41f);
      glVertex2f( 0.12f,  0.42f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.18f,  0.42f);
      glVertex2f( 0.18f,  0.41f);
      glVertex2f( 0.19f,  0.41f);
      glVertex2f( 0.19f,  0.42f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(0,0,0);
      glVertex2f( 0.1f,  0.49f);
      glVertex2f( 0.09f,  0.48f);
      glVertex2f( 0.1f,  0.47f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(0,0,0);
      glVertex2f( 0.2f,  0.47f);
      glVertex2f( 0.21f,  0.48f);
      glVertex2f( 0.2f,  0.49f);
      glEnd();

      glPopMatrix();

	glLoadIdentity();

}

/// BUS -Y TO +Y
////
void bus3()
{
         glPushMatrix();
    glTranslated(0.0f,position3,0.0f);
     glRotatef(180,1.0,0.0,0.0);
      glTranslatef(-.35f,0.15f,0.0f);
    glBegin(GL_QUADS);
      glColor3ub(70,130,180);
      glVertex2f( 0.2f,  0.7f);
      glVertex2f( 0.2f,  0.5f);
      glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.1f,  0.7f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,128,128);
      glVertex2f(0.1f,0.5f);
      glVertex2f(0.1f,0.4f);
      glVertex2f(0.15f,0.38f);
      glVertex2f(0.2f,0.4f);
      glVertex2f(0.2f,0.5f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.1f,  0.44f);
      glVertex2f( 0.2f,  0.44f);
      glVertex2f( 0.2f,  0.5f);
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(153,0,76);
      glVertex2f( 0.2f,  0.44f);
      glVertex2f( 0.2f,  0.5f);
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(153,0,76);
       glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.1f,  0.44f);
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(153,0,76);
       glVertex2f( 0.1f,  0.5f);
      glVertex2f( 0.2f,  0.5f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.13f,  0.56f);
      glVertex2f( 0.13f,  0.53f);
      glVertex2f( 0.17f,  0.53f);
      glVertex2f( 0.17f,  0.56f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.13f,  0.66f);
      glVertex2f( 0.13f,  0.63f);
      glVertex2f( 0.17f,  0.63f);
      glVertex2f( 0.17f,  0.66f);
      glEnd();

       glBegin(GL_LINES);
      glColor3ub(0,0,0);
       glVertex2f( 0.13f,  0.66f);
      glVertex2f( 0.13f,  0.63f);
      glVertex2f( 0.17f,  0.63f);
      glVertex2f( 0.17f,  0.66f);
      glVertex2f( 0.13f,  0.63f);
      glVertex2f( 0.17f,  0.63f);
      glVertex2f( 0.17f,  0.66f);
      glVertex2f( 0.13f,  0.66f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f( 0.13f,  0.56f);
      glVertex2f( 0.13f,  0.53f);
      glVertex2f( 0.17f,  0.53f);
      glVertex2f( 0.17f,  0.56f);
      glVertex2f( 0.13f,  0.53f);
      glVertex2f( 0.17f,  0.53f);
      glVertex2f( 0.17f,  0.56f);
      glVertex2f( 0.13f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.11f,  0.42f);
      glVertex2f( 0.11f,  0.41f);
      glVertex2f( 0.12f,  0.41f);
      glVertex2f( 0.12f,  0.42f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.18f,  0.42f);
      glVertex2f( 0.18f,  0.41f);
      glVertex2f( 0.19f,  0.41f);
      glVertex2f( 0.19f,  0.42f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(0,0,0);
      glVertex2f( 0.1f,  0.49f);
      glVertex2f( 0.09f,  0.48f);
      glVertex2f( 0.1f,  0.47f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(0,0,0);
      glVertex2f( 0.2f,  0.47f);
      glVertex2f( 0.21f,  0.48f);
      glVertex2f( 0.2f,  0.49f);
      glEnd();

      glPopMatrix();

	glLoadIdentity();

}



void remon(){


 glBegin(GL_QUADS);
    glColor3ub(0,102,0);
    glVertex2f(-0.35f, 0.3f);
    glVertex2f(-.35f, 1.0f);
    glVertex2f(- 1.0f,1.0f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();

    glBegin(GL_QUADS);
       glColor3ub(0,102,0);
    glVertex2f(0.35f, 0.3f);
    glVertex2f( 1.0f,0.3f);
    glVertex2f( 1.0f,1.0f);
    glVertex2f(0.35f, 1.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,102,0);
    glVertex2f(0.35f, -0.5f);
    glVertex2f(0.35f,-1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.5f);
    glEnd();


    glBegin(GL_QUADS);
  glColor3ub(0,102,0);
    glVertex2f(-0.35f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-0.35f, -1.0f);
    glEnd();



      //SKY

      glBegin(GL_QUADS);
    glColor3ub(153,255,255);
    glVertex2f(1.0f, 0.75f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.75f);
    glEnd();


    //CLOUD



    glBegin(GL_POLYGON);//Cloud
      glColor3f(1.0f, 1.0f, 1.0f);
    //glVertex2f(0.75f, 0.6f);
     glVertex2f(0.25f, 0.9f);
     glVertex2f(0.28f, 0.95f);
     glVertex2f(0.286f, 0.99f);
     glVertex2f(0.29f, 0.99f);
    glVertex2f(0.35f, 0.98f);
    glVertex2f(0.39f, 0.93f);
    glVertex2f(0.41f, 0.97f);
    glVertex2f(0.45f, 0.97f);
    glVertex2f(0.48f, 0.96f);
    glVertex2f(0.51f, 0.93f);
    glVertex2f(0.55f, 0.93f);
    glVertex2f(0.57f, 0.95f);
    glVertex2f(0.56f, 0.95f);
    glVertex2f(0.61f, 0.85f);
    glEnd();




    glBegin(GL_POLYGON);//Cloud
      glColor3f(1.0f, 1.0f, 1.0f);
    //glVertex2f(0.75f, 0.6f);
     glVertex2f(-0.4f, 0.9f);
     glVertex2f(-0.43f, 0.95f);
     glVertex2f(-0.436f, 0.99f);
     glVertex2f(-0.44f, 0.99f);
    glVertex2f(-0.5f, 0.98f);
    glVertex2f(-0.54f, 0.93f);
    glVertex2f(-0.56f, 0.97f);
    glVertex2f(-0.6f, 0.97f);
    glVertex2f(-0.63f, 0.96f);
    glVertex2f(-0.66f, 0.93f);
    glVertex2f(-0.7f, 0.93f);
    glVertex2f(-0.72f, 0.95f);
    glVertex2f(-0.71f, 0.95f);
    glVertex2f(-0.75f, 0.85f);

 glEnd();


    glBegin(GL_POLYGON);//Cloud
      glColor3f(1.0f, 1.0f, 1.0f);
    //glVertex2f(0.75f, 0.6f);
     glVertex2f(0.25f, 0.9f);
     glVertex2f(0.28f, 0.95f);
     glVertex2f(0.286f, 0.99f);
     glVertex2f(0.29f, 0.99f);
    glVertex2f(0.35f, 0.98f);
    glVertex2f(0.39f, 0.93f);
    glVertex2f(0.41f, 0.97f);
    glVertex2f(0.45f, 0.97f);
    glVertex2f(0.48f, 0.96f);
    glVertex2f(0.51f, 0.93f);
    glVertex2f(0.55f, 0.93f);
    glVertex2f(0.57f, 0.95f);
    glVertex2f(0.56f, 0.95f);
    glVertex2f(0.61f, 0.85f);
    glEnd();




    glBegin(GL_POLYGON);//Cloud
      glColor3f(1.0f, 1.0f, 1.0f);
    //glVertex2f(0.75f, 0.6f);
     glVertex2f(-0.4f, 0.9f);
     glVertex2f(-0.43f, 0.95f);
     glVertex2f(-0.436f, 0.99f);
     glVertex2f(-0.44f, 0.99f);
    glVertex2f(-0.5f, 0.98f);
    glVertex2f(-0.54f, 0.93f);
    glVertex2f(-0.56f, 0.97f);
    glVertex2f(-0.6f, 0.97f);
    glVertex2f(-0.63f, 0.96f);
    glVertex2f(-0.66f, 0.93f);
    glVertex2f(-0.7f, 0.93f);
    glVertex2f(-0.72f, 0.95f);
    glVertex2f(-0.71f, 0.95f);
    glVertex2f(-0.75f, 0.85f);

 glEnd();

    //Water

glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f(1.0f, 0.7f);
    glVertex2f(1.0f, 0.75f);
    glVertex2f(-1.0f, 0.75f);
    glVertex2f(-1.0f, 0.7f);
    glEnd();

    //under the flyover

   glBegin(GL_QUADS);
    glColor3ub(64,64,64);
    glVertex2f(1.0f, 0.65f);
    glVertex2f(1.0f, 0.68f);
    glVertex2f(-1.0f, 0.68f);
    glVertex2f(-1.0f, 0.65f);
    glEnd();



    //flyover

     glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 0.65f);
    glVertex2f(0.68f, 0.85f);
    glVertex2f(0.65f, 0.8f);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, 0.8f);
    glVertex2f(0.64f, 0.65f);
    glVertex2f(1.0f, 0.6f);
    glEnd();


 glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(0.66f, 0.81f);
    glVertex2f(0.67f, 0.83f);
    glVertex2f(-1.0f, 0.83f);
    glVertex2f(-1.0f, 0.81f);
    glEnd();








    //piller


    glBegin(GL_QUADS);
    glColor3ub(238,232,170);
    glVertex2f(0.545f, 0.67f);
    glVertex2f(0.565f, 0.67f);
    glVertex2f(0.57f, 0.77f);
    glVertex2f(0.55f, 0.77f);
    glEnd();


 glBegin(GL_QUADS);
    glColor3ub(238,232,170);
    glVertex2f(0.375f, 0.67f);
    glVertex2f(0.395f, 0.67f);
    glVertex2f(0.4f, 0.77f);
    glVertex2f(0.38f, 0.77f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(238,232,170);
    glVertex2f(-0.4f, 0.67f);
    glVertex2f(-0.38f, 0.67f);
    glVertex2f(-0.38f, 0.77f);
    glVertex2f(-0.4f, 0.77f);
    glEnd();


glBegin(GL_QUADS);
    glColor3ub(238,232,170);
    glVertex2f(-0.588f, 0.67f);
    glVertex2f(-0.568f, 0.67f);
    glVertex2f(-0.57f, 0.77f);
    glVertex2f(-0.59f, 0.77f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(238,232,170);
    glVertex2f(-0.759f, 0.67f);
    glVertex2f(-0.739f, 0.67f);
    glVertex2f(-0.74f, 0.77f);
    glVertex2f(-0.76f, 0.77f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(238,232,170);
    glVertex2f(-0.947f, 0.67f);
    glVertex2f(-0.927f, 0.67f);
    glVertex2f(-0.93f, 0.77f);
    glVertex2f(-0.95f, 0.77f);
    glEnd();

//piller er matha


    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0.55f, 0.77f);
    glVertex2f(0.57f, 0.77f);
    glVertex2f(0.58f, 0.78f);
    glVertex2f(0.583f, 0.81f);
    glVertex2f(0.56f, 0.81f);
    glVertex2f(0.56f, 0.805f);
   glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(0.55f, 0.77f);
    glVertex2f(0.57f, 0.79f);
    glVertex2f(0.57f, 0.81f);
    glVertex2f(0.535f, 0.81f);
    glVertex2f(0.535f, 0.79f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(0.38f, 0.77f);
    glVertex2f(0.4f, 0.77f);
    glVertex2f(0.41f, 0.785f);
    glVertex2f(0.41f, 0.81f);
    glVertex2f(0.39f, 0.81f);
     glVertex2f(0.4f, 0.79f);
    glEnd();


    glTranslatef(-.17f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(0.55f, 0.77f);
    glVertex2f(0.57f, 0.79f);
    glVertex2f(0.57f, 0.81f);
    glVertex2f(0.535f, 0.81f);
    glVertex2f(0.535f, 0.79f);
    glEnd();
    glLoadIdentity();


 glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(-0.4f, 0.77f);
    glVertex2f(-0.38f, 0.77f);
    glVertex2f(-0.37f, 0.785f);
    glVertex2f(-0.37f, 0.81f);
      glVertex2f(-0.41f, 0.81f);
    glVertex2f(-0.41f, 0.785f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(-0.59f, 0.77f);
    glVertex2f(-0.57f, 0.77f);
    glVertex2f(-0.555f, 0.785f);
    glVertex2f(-0.555f, 0.81f);
      glVertex2f(-0.605f, 0.81f);
    glVertex2f(-0.605f, 0.785f);

    glEnd();


 glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(-0.76f, 0.77f);
    glVertex2f(-0.74f, 0.77f);
    glVertex2f(-0.725f, 0.785f);
    glVertex2f(-0.725f, 0.81f);
      glVertex2f(-0.775f, 0.81f);
    glVertex2f(-0.775f, 0.785f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(32,32,32);
    glVertex2f(-0.95f, 0.77f);
    glVertex2f(-0.93f, 0.77f);
    glVertex2f(-0.91f, 0.785f);
    glVertex2f(-0.91f, 0.81f);
      glVertex2f(-0.97f, 0.81f);
    glVertex2f(-0.97f, 0.785f);

    glEnd();


///rastar paser tree

 glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.565f, -0.7f);
    glVertex2f(-0.529f, -0.7f);
    glVertex2f(-0.545f, -0.59f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.567f, -0.72f);
     glVertex2f(-0.527f, -0.72f);
    glVertex2f(-0.529f,-0.7f);
    glVertex2f(-0.565f,- 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.55f,- 0.793f);
      glVertex2f(-0.54f,-0.793f);
    glVertex2f(-0.54f, -0.72f);
     glVertex2f(-0.55f, -0.72f);

    glEnd();


     glTranslatef(0.15f,0.0f,0.0f);
     glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.565f, -0.7f);
    glVertex2f(-0.529f, -0.7f);
    glVertex2f(-0.545f, -0.59f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.567f, -0.72f);
     glVertex2f(-0.527f, -0.72f);
    glVertex2f(-0.529f,-0.7f);
    glVertex2f(-0.565f,- 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.55f,- 0.793f);
      glVertex2f(-0.54f,-0.793f);
    glVertex2f(-0.54f, -0.72f);
     glVertex2f(-0.55f, -0.72f);

    glEnd();

    glLoadIdentity();

}
///
////BUILDING RED
////
   void Building1()
   {

//2nd bari
   glBegin(GL_QUADS);
    glColor3ub(204,0,0);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();


    //2nd barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();

    glTranslatef(-.015f,-0.02f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala


    glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();


     glTranslatef(-.05f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line


    glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();

   }
  ///
  ///BUILDING BLUE

void Building2()
{

//third quadrant 1st bari



    glBegin(GL_QUADS);
    glColor3ub(0,0,102);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-0.78f, -0.22f);
    glVertex2f(-0.98f,-0.22f);
    glVertex2f(-1.0f, -0.25f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.78f, -0.79f);
    glVertex2f(-0.78f,-0.22f);
    glVertex2f(-0.8f, -0.25f);
    glEnd();
//Rasta 1st barir

 glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2f(-0.785f, -0.793f);
    glVertex2f(-0.798f, -0.797f);
    glVertex2f(-0.35f,-0.81f);
    glVertex2f(-0.35f, -0.83f);
    glEnd();
    //1st barir floor


     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.387f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.524f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.661f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.362f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.504f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.645f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


    //1st barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();


 glTranslatef(-.0f,-0.13f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();

glTranslatef(-.0f,-0.27f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();


 glTranslatef(-.0f,-0.41f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();




//1st bari r right side er janala

glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

 glTranslatef(-.05f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.1f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.15f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

//tree

     glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();


}



void upperquad(){

///2nd quartant er TREE

    glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(-0.45f, 0.6f);
    glVertex2f(-0.48f, 0.55f);
    glVertex2f(-0.42f, 0.55f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(-0.42f, 0.55f);
     glVertex2f(-0.48f, 0.55f);
    glVertex2f(-0.49f, 0.52f);
    glVertex2f(-0.41f, 0.52f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(-0.44f, 0.52f);
     glVertex2f(-0.46f, 0.52f);
     glVertex2f(-0.46f, 0.42f);
    glVertex2f(-0.44f, 0.42f);
    glEnd();





///2nd tree



 glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(-0.55f, 0.62f);
    glVertex2f(-0.57f, 0.57f);
    glVertex2f(-0.53f, 0.57f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(-0.53f, 0.57f);
    glVertex2f(-0.57f, 0.57f);
    glVertex2f(-0.58f, 0.54f);
    glVertex2f(-0.52f, 0.54f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(-0.54f, 0.54f);
     glVertex2f(-0.56f, 0.54f);
     glVertex2f(-0.56f, 0.44f);
    glVertex2f(-0.54f, 0.44f);
    glEnd();




///2nd quartant er house

    glTranslatef(0.0f,-0.1f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,140,0);
    glVertex2f(-0.383f, 0.80f);
    glVertex2f(-0.4f, 0.75f);
    glVertex2f(-0.4f, 0.69f);
    glVertex2f(-0.371f, 0.69f);
    glVertex2f(-0.371f, 0.75f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(-0.4f, 0.75f);
    glVertex2f(-0.383f, 0.805f);
    glVertex2f(-0.371f, 0.75f);
    glVertex2f(-0.366f, 0.751f);
    glVertex2f(-0.384f, 0.8f);
    glVertex2f(-0.405f, 0.751f);


    glEnd();

    ///1st house er janala

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.38f, 0.76f);
    glVertex2f(-0.384f, 0.76f);
    glVertex2f(-0.384f, 0.74f);
    glVertex2f(-0.38f, 0.74f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.388f, 0.76f);
    glVertex2f(-0.393f, 0.76f);
    glVertex2f(-0.393f, 0.74f);
    glVertex2f(-0.388f, 0.74f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.375f, 0.73f);
    glVertex2f(-0.38f, 0.73f);
    glVertex2f(-0.38f, 0.71f);
    glVertex2f(-0.375f, 0.71f);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.386f, 0.72f);
    glVertex2f(-0.39f, 0.72f);
    glVertex2f(-0.39f, 0.7f);
    glVertex2f(-0.386f, 0.7f);
    glEnd();
    glLoadIdentity();


///SCHOOL


     glBegin(GL_QUADS);
    glColor3ub(192,192,192);
  glVertex2f(-0.95f, 0.57f);
    glVertex2f(-0.95f, 0.4f);
     glVertex2f(-0.85f, 0.45f);
  glVertex2f(-0.85f, 0.61f);
    glEnd();


  glBegin(GL_QUADS);
    glColor3ub(192,192,0);

    glVertex2f(-0.97f, 0.585f);
    glVertex2f(-0.95f, 0.57f);
    glVertex2f(-0.85f, 0.61f);
    glVertex2f(-0.865f, 0.62f);

    glEnd();


  glBegin(GL_QUADS);
    glColor3ub(192,0,0);

    glVertex2f(-0.95f, 0.57f);
    glVertex2f(-0.97f, 0.585f);
    glVertex2f(-0.97f, 0.42f);
    glVertex2f(-0.95f, 0.4f);


    glEnd();


///School  er floor



     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, 0.5275f);
    glVertex2f(-0.85f, 0.57f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, 0.485f);
    glVertex2f(-0.85f, 0.53f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, 0.4425f);
    glVertex2f(-0.85f, 0.49f);
    glEnd();



/// 2nd SCHOOL


     glBegin(GL_QUADS);
    glColor3ub(192,192,192);
  glVertex2f(-0.78f, 0.653f);
    glVertex2f(-0.78f, 0.48f);
     glVertex2f(-0.68f, 0.48f);
  glVertex2f(-0.68f, 0.653f);
    glEnd();


  glBegin(GL_QUADS);
    glColor3ub(192,192,0);
  glVertex2f(-0.78f, 0.653f);
    glVertex2f(-0.68f, 0.653f);
     glVertex2f(-0.67f, 0.663f);
  glVertex2f(-0.77f, 0.663f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(192,0,0);
  glVertex2f(-0.67f, 0.663f);
    glVertex2f(-0.68f, 0.653f);
     glVertex2f(-0.68f, 0.48f);
  glVertex2f(-0.67f, 0.49f);
    glEnd();





    /// 2nd School  er floor



     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, 0.567f);
    glVertex2f(-0.68f, 0.567f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, 0.524f);
    glVertex2f(-0.68f, 0.524f);
    glEnd();

 glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, 0.61f);
    glVertex2f(-0.68f, 0.61f);
    glEnd();


 ///1st school er janala


 glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

 glTranslatef(-.033f,-0.015f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

glLoadIdentity();





glTranslatef(-.066f,-0.030f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

glLoadIdentity();


///3rd floor

glTranslatef(0.0f,-0.045f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

 glTranslatef(-.033f,-0.015f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

//glLoadIdentity();

glTranslatef(-.030f,-0.010f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

glLoadIdentity();




///2nd floor

glTranslatef(0.0f,-0.085f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

 glTranslatef(-.033f,-0.015f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

//glLoadIdentity();

glTranslatef(-.030f,-0.010f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

glLoadIdentity();



///1st floor

glTranslatef(0.0f,-0.12f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

 glTranslatef(-.033f,-0.015f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

//glLoadIdentity();

glTranslatef(-.030f,-0.015f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.86f, 0.578f);
    glVertex2f(-0.86f, 0.595f);
    glVertex2f(-0.87f,0.591f);
    glVertex2f(-0.87f, 0.576f);
    glEnd();

glLoadIdentity();


///2nd school er janala

    glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();

    glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.06f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
    glLoadIdentity();



    ///3nd flooor er janala

    glTranslatef(0.0f,-0.05f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();

    glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
   // glLoadIdentity();

     glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
    glLoadIdentity();


 ///2nd flooor er janala

    glTranslatef(0.0f,-0.09f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();

    glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
   // glLoadIdentity();

     glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
    glLoadIdentity();




///3rd flooor er janala

    glTranslatef(0.0f,-0.13f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();

    glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
   // glLoadIdentity();

     glTranslatef(-0.03f,0.0f,0.0f);

     glBegin(GL_QUADS);
    glColor3ub(224,0,224);
    glVertex2f(-0.7f, 0.626f);
    glVertex2f(-0.7f, 0.644f);
    glVertex2f(-0.69f,0.644f);
    glVertex2f(-0.69f, 0.626f);
    glEnd();
    glLoadIdentity();

      ///1st school er rasta


    glBegin(GL_QUADS);
    glColor3ub(160,160,160);

    glVertex2f(-0.92f, 0.42f);
    glVertex2f(-0.78f, 0.4f);
    glVertex2f(-0.79f, 0.42f);
    glVertex2f(-0.88f, 0.44f);


    glEnd();


    ///2nd school er rasta


     glBegin(GL_QUADS);
    glColor3ub(160,160,160);

    glVertex2f(-0.74f, 0.48f);
    glVertex2f(-0.78f, 0.4f);
    glVertex2f(-0.79f, 0.42f);
    glVertex2f(-0.71f, 0.48f);


    glEnd();


    ///School er rasta

     glBegin(GL_QUADS);
    glColor3ub(160,160,160);

    glVertex2f(-0.79f, 0.41f);
    glVertex2f(-1.0f, 0.30f);
    glVertex2f(-0.95f, 0.30f);
    glVertex2f(-0.78f, 0.4f);


    glEnd();





}

void firstquard()
{
    int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

    glTranslatef(2.2f,0.85f,0.0f);
    glScalef(1.5f,1.8f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252,212,64);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glLoadIdentity();


///1st quartant er TREE



    glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(0.45f, 0.65f);
    glVertex2f(0.48f, 0.55f);
    glVertex2f(0.42f, 0.55f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(0.42f, 0.55f);
     glVertex2f(0.48f, 0.55f);
    glVertex2f(0.49f, 0.52f);
    glVertex2f(0.41f, 0.52f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(0.443f, 0.52f);
     glVertex2f(0.457f, 0.52f);
     glVertex2f(0.457f, 0.42f);
    glVertex2f(0.443f, 0.42f);
    glEnd();





///2nd tree



 glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(0.55f, 0.62f);
    glVertex2f(0.57f, 0.57f);
    glVertex2f(0.53f, 0.57f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(0.53f, 0.57f);
    glVertex2f(0.57f, 0.57f);
    glVertex2f(0.58f, 0.54f);
    glVertex2f(0.52f, 0.54f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(0.544f, 0.54f);
     glVertex2f(0.556f, 0.54f);
     glVertex2f(0.556f, 0.44f);
    glVertex2f(0.544f, 0.44f);
    glEnd();

///3rd tree

glTranslatef(0.4,0.0,0.0);


 glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(0.55f, 0.62f);
    glVertex2f(0.57f, 0.57f);
    glVertex2f(0.53f, 0.57f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(0.53f, 0.57f);
    glVertex2f(0.57f, 0.57f);
    glVertex2f(0.58f, 0.54f);
    glVertex2f(0.52f, 0.54f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(0.544f, 0.54f);
     glVertex2f(0.556f, 0.54f);
     glVertex2f(0.556f, 0.44f);
    glVertex2f(0.544f, 0.44f);
    glEnd();

glLoadIdentity();

///Bench


glBegin(GL_QUADS);
    glColor3ub(204,0,0);

    glVertex2f(0.875f, 0.48f);
    glVertex2f(0.71f, 0.48f);
    glVertex2f(0.695f, 0.45f);
    glVertex2f(0.86f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.84f, 0.45f);
    glVertex2f(0.83f, 0.45f);
    glVertex2f(0.83f, 0.41f);
    glVertex2f(0.84f, 0.41f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.73f, 0.45f);
    glVertex2f(0.73f, 0.41f);
    glVertex2f(0.72f, 0.41f);
    glVertex2f(0.72f, 0.45f);

    glEnd();




    ///2nd bench

    glTranslatef(-0.08,0.1,0.0);


glBegin(GL_QUADS);
    glColor3ub(204,0,0);

    glVertex2f(0.875f, 0.48f);
    glVertex2f(0.71f, 0.48f);
    glVertex2f(0.695f, 0.45f);
    glVertex2f(0.86f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.84f, 0.45f);
    glVertex2f(0.83f, 0.45f);
    glVertex2f(0.83f, 0.41f);
    glVertex2f(0.84f, 0.41f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.73f, 0.45f);
    glVertex2f(0.73f, 0.41f);
    glVertex2f(0.72f, 0.41f);
    glVertex2f(0.72f, 0.45f);

    glEnd();

glLoadIdentity();



}

void fourthquard()
{
    ///4th quartant er TREE


glTranslatef(0.0,-1.2,0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(0.45f, 0.65f);
    glVertex2f(0.48f, 0.55f);
    glVertex2f(0.42f, 0.55f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(0.42f, 0.55f);
     glVertex2f(0.48f, 0.55f);
    glVertex2f(0.49f, 0.52f);
    glVertex2f(0.41f, 0.52f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(0.443f, 0.52f);
     glVertex2f(0.457f, 0.52f);
     glVertex2f(0.457f, 0.42f);
    glVertex2f(0.443f, 0.42f);
    glEnd();





///2nd tree



 glBegin(GL_TRIANGLES);
    glColor3ub(76,153,0);
    glVertex2f(0.55f, 0.62f);
    glVertex2f(0.57f, 0.57f);
    glVertex2f(0.53f, 0.57f);

    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(76,153,0);
    glVertex2f(0.53f, 0.57f);
    glVertex2f(0.57f, 0.57f);
    glVertex2f(0.58f, 0.54f);
    glVertex2f(0.52f, 0.54f);
    glEnd();




 glBegin(GL_QUADS);
    glColor3ub(140,80,20);
    glVertex2f(0.544f, 0.54f);
     glVertex2f(0.556f, 0.54f);
     glVertex2f(0.556f, 0.44f);
    glVertex2f(0.544f, 0.44f);
    glEnd();

///Bench


glBegin(GL_QUADS);
    glColor3ub(204,0,0);

    glVertex2f(0.875f, 0.48f);
    glVertex2f(0.71f, 0.48f);
    glVertex2f(0.695f, 0.45f);
    glVertex2f(0.86f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.84f, 0.45f);
    glVertex2f(0.83f, 0.45f);
    glVertex2f(0.83f, 0.41f);
    glVertex2f(0.84f, 0.41f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.73f, 0.45f);
    glVertex2f(0.73f, 0.41f);
    glVertex2f(0.72f, 0.41f);
    glVertex2f(0.72f, 0.45f);

    glEnd();




    ///2nd bench

    glTranslatef(-0.08,0.1,0.0);


glBegin(GL_QUADS);
    glColor3ub(204,0,0);

    glVertex2f(0.875f, 0.48f);
    glVertex2f(0.71f, 0.48f);
    glVertex2f(0.695f, 0.45f);
    glVertex2f(0.86f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.84f, 0.45f);
    glVertex2f(0.83f, 0.45f);
    glVertex2f(0.83f, 0.41f);
    glVertex2f(0.84f, 0.41f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,0,0);

    glVertex2f(0.73f, 0.45f);
    glVertex2f(0.73f, 0.41f);
    glVertex2f(0.72f, 0.41f);
    glVertex2f(0.72f, 0.45f);

    glEnd();

glLoadIdentity();

}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Traffic Signal");
   glutDisplayFunc(mydisplay);
   glutMouseFunc(myMouse);
   glutKeyboardFunc(handleKeypress);
   glutMainLoop();
   return 0;
}
