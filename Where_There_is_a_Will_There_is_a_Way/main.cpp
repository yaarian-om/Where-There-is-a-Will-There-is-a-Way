#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>
#include<iostream>

/// User Defined Global Variable
# define PI 3.14159265358979323846

void Display(void);
void Display1();




//#ifndef Position vertex and Speed
GLfloat position = -1.2f,position2 = 0.0f,skypos=-1.2f,xpos=-1.0f,ypos=0.45f,yuppos,ydown;
GLfloat speed = 0.08f,skyspeed=0.03f,crowspeed = 0.1f;
//#endif Position vertex and Speed

//#ifndef Extra Variables
int donef = 0,dtwof = 0,dthreef = 0,dfourf = 0,dfivef = 0,dsixf = 0,dsevenf = 0,
waterflag = 0,ideaflag = 0,ideamusic = 0,febbleflag = 0,stonereturnflag = 0,
deightf = 0,flyaway = 0,drankwater = 0,happilygone = 0;
//#endif Extra Variables




void StartingText()
{
    char text[120];
    sprintf(text, "WHERE THERE IS A WILL  THERE'S A WAY",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -28 , 32 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -20 , 22 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"IF YOU ARE DETERMINED ENOUGH,YOU CAN FIND A WAY TO ACHEIEVE WHAT YOU WANT  EVEN IF IT IS VERY DIFFICULT",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press 1,2,3,4,5,6,7 to continue the story",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42 , -30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}

void background()
{
     /// Background means long distant trees /\/\/\/\/\/\/\
    glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.95f, .15f);
	glVertex2f(-.93f, 0.15f);
	glVertex2f(-0.9f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.93f, 0.1f);
	glVertex2f(-0.83f, .25f);
	glVertex2f(-.79f, 0.255f);
	glVertex2f(-0.74f, 0.20f);
	glVertex2f(-0.70f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.73f, 0.1f);
	glVertex2f(-0.73f, 0.15f);
	glVertex2f(-0.7f, .20f);
	glVertex2f(-.65f, 0.18f);
	glVertex2f(-0.60f, 0.15f);
	glVertex2f(-0.55f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.57f, 0.1f);
	glVertex2f(-0.52f, .15f);
	glVertex2f(-.50f, 0.15f);
	glVertex2f(-0.47f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.50f, 0.1f);
	glVertex2f(-0.45f, .15f);
	glVertex2f(-.43f, 0.15f);
	glVertex2f(-0.40f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.43f, 0.1f);
	glVertex2f(-0.33f, .25f);
	glVertex2f(-.29f, 0.255f);
	glVertex2f(-0.24f, 0.20f);
	glVertex2f(-0.20f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.23f, 0.1f);
	glVertex2f(-0.23f, 0.15f);
	glVertex2f(-0.20f, .20f);
	glVertex2f(-.15f, 0.18f);
	glVertex2f(-0.10f, 0.15f);
	glVertex2f(-0.05f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.08f, 0.1f);
	glVertex2f(.08f, .25f);
	glVertex2f(.12f, 0.255f);
	glVertex2f(0.17f, 0.20f);
	glVertex2f(0.22f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(.21f, 0.1f);
	glVertex2f(0.28f, .15f);
	glVertex2f(.30f, 0.15f);
	glVertex2f(0.33f, 0.1f);

	glEnd();
}

void fullsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);
	glColor3ub(155, 215, 232);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.1f);
	glVertex2f(-1.0f, 0.1f);

	glEnd();
}


void grass()
{
    glBegin(GL_POLYGON);
	glColor3ub(124, 252, 0);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(1.0f, .1f);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(-1.0f, -0.85f);

	glEnd();
}


void cloud1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


void cloud2()
{
   // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void Normal_Tree()
{

            glBegin(GL_LINES);
            glColor3ub(20,131,12);
                glVertex2f(-0.78f, 0.032f);
                glVertex2f(-0.776f, 0.032f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(20,131,12);
            glVertex2f(-0.687f, -0.299f);
            glVertex2f(-0.671f, -0.323f);
            glVertex2f(-0.660f, -0.347f);
            glVertex2f(-0.653f, -0.378f);
            glVertex2f(-0.665f, -0.426f);
            glVertex2f(-0.673f, -0.457f);
            glVertex2f(-0.693f, -0.493f);
            glVertex2f(-0.702f, -0.521f);
            glVertex2f(-0.718f, -0.56f);
            glVertex2f(-0.729f, -0.56f);
            glVertex2f(-0.760f, -0.536f);
            glVertex2f(-0.773f, -0.529f);
            glVertex2f(-0.791f, -0.517f);
            glVertex2f(-0.811f, -0.485f);
            glVertex2f(-0.820f, -0.43f);
            glVertex2f(-0.825f, -0.39f);
            glVertex2f(-0.825f, -0.351f);
            glVertex2f(-0.816f, -0.331f);
            glVertex2f(-0.802f, -0.331f);
            glVertex2f(-0.800f, -0.299f);
            glVertex2f(-0.807f, -0.276f);
            glVertex2f(-0.811f, -0.24f);
            glVertex2f(-0.807f, -0.208f);
            glVertex2f(-0.789f, -0.185f);
            glVertex2f(-0.789f, -0.153f);
            glVertex2f(-0.796f, -0.137f);
            glVertex2f(-0.800f, -0.114f);
            glVertex2f(-0.789f, -0.169f);
            glVertex2f(-0.800f, -0.121f);
            glVertex2f(-0.798f, -0.082f);
            glVertex2f(-0.785f, -0.042f);
            glVertex2f(-0.771f, -0.031f);
            glVertex2f(-0.747f, -0.019f);
            glVertex2f(-0.722f, -0.019f);
            glVertex2f(-0.705f, -0.038f);
            glVertex2f(-0.689f, -0.058f);
            glVertex2f(-0.682f, -0.086f);
            glVertex2f(-0.680f, -0.118f);
            glVertex2f(-0.676f, -0.137f);
            glVertex2f(-0.680f, -0.161f);
            glVertex2f(-0.689f, -0.173f);
            glVertex2f(-0.689f, -0.193f);
            glVertex2f(-0.673f, -0.204f);
            glVertex2f(-0.667f, -0.22f);
            glVertex2f(-0.665f, -0.248f);
            glVertex2f(-0.665f, -0.276f);
            glVertex2f(-0.678f, -0.287f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(64,0,0);
            glVertex2f(-0.747f, -0.402f);
            glVertex2f(-0.740f, -0.343f);
            glVertex2f(-0.747f, -0.28f);
            glVertex2f(-0.749f, -0.212f);
            glVertex2f(-0.760f, -0.149f);
            glVertex2f(-0.749f, -0.125f);
            glVertex2f(-0.722f, -0.22f);
            glVertex2f(-0.722f, -0.256f);
            glVertex2f(-0.718f, -0.319f);
            glVertex2f(-0.729f, -0.359f);
            glVertex2f(-0.696f, -0.355f);
            glVertex2f(-0.680f, -0.343f);
            glVertex2f(-0.682f, -0.367f);
            glVertex2f(-0.693f, -0.378f);
            glVertex2f(-0.713f, -0.402f);
            glVertex2f(-0.716f, -0.446f);
            glVertex2f(-0.720f, -0.485f);
            glVertex2f(-0.725f, -0.521f);
            glVertex2f(-0.729f, -0.548f);
            glVertex2f(-0.729f, -0.56f);
            glVertex2f(-0.729f, -0.576f);
            glVertex2f(-0.727f, -0.592f);
            glVertex2f(-0.725f, -0.592f);
            glVertex2f(-0.749f, -0.6f);
            glVertex2f(-0.758f, -0.588f);
            glVertex2f(-0.753f, -0.54f);
            glVertex2f(-0.756f, -0.501f);
            glVertex2f(-0.760f, -0.446f);
            glVertex2f(-0.771f, -0.414f);
            glVertex2f(-0.789f, -0.359f);
            glVertex2f(-0.789f, -0.311f);
            glVertex2f(-0.776f, -0.256f);
            glVertex2f(-0.771f, -0.319f);
            glVertex2f(-0.767f, -0.378f);
            glEnd();


}



void Display1()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); /// Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    cloud1();
    cloud2();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    // sun();
    glLoadIdentity();

    glFlush();

}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case '1':
	        std::cout<<"1 Pressed"<<std::endl;
            glutDestroyWindow(1);
            glutInitWindowSize(1240, 680);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
            glutCreateWindow("MORAL STORY");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(Display1);
            break;
        case '2':
            std::cout<<"2 Pressed"<<std::endl;
            position=-1.0f;
            //glutDisplayFunc(Display2);
            break;
        case '3':
            std::cout<<"3 Pressed"<<std::endl;
            position=-1.0f;
            //glutDisplayFunc(Display3);
            break;
        case '4':
            std::cout<<"4 Pressed"<<std::endl;
            position=-1.0f;
            //glutDisplayFunc(Display4);
            break;
        case '5':
            std::cout<<"5 Pressed"<<std::endl;
            position=-0.9f;
            //glutDisplayFunc(Display5);
            break;
        case '6':
            std::cout<<"6 Pressed"<<std::endl;
            position=-0.9f;
            xpos = -1.0 ;
            ypos = 0.45;
            //glutDisplayFunc(Display6);
            break;
        case '7':
            std::cout<<"7 Pressed"<<std::endl;
            position=-0.9f;
            xpos = -1.4 ;
            ypos = -0.85;
            yuppos=ypos;
            febbleflag = 1;
            stonereturnflag = 1;
            //glutDisplayFunc(Display7);
            break;
    }
}


















/// Update will be called in each loop so that the position of each and every object can be refreshed and projected
void update(int value) {

    if(position > 1.3)
    {
        position = -1.2f;
        skypos = -1.2f;
        position2 = 1.2f;
    }

    position += speed;
    position2 -=0.05;
    skypos +=skyspeed;


}















void reshape(int w, int h)
{
    std::cout<<"Reshape is called"<<std::endl;
    /**
        We'll simply make an aspect ratio so that we can multiply it to make larger or smaller object
        relative to screen
    */
    float aspectRatio = (float)w/(float)h; /// It will calculate each and every object size according to screen size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); ///
    gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}




void Display(void)
{
    std::cout<<"Display_1 \"Moral Story\" called"<<std::endl;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity(); ///
    glTranslatef(0,0,-20);
    StartingText(); /// That will bring up the starting text
    glFlush();
    glutSwapBuffers();
}



void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f); /// Setting up a background color
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);
    std::cout<<"Init is called"<<std::endl;
}


/// Compiler will start reading from here
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1240, 680); /// Window size is similar to my screen resolution (1920 X 1080) pixel
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2); /// Top Left corner of the screen position
    glutCreateWindow("MORAL STORY"); /// Screen Title
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display); /// Calling Display function to show some display ==>> White Page
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}
