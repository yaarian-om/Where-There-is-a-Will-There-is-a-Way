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

    //fullsky();
    //grass();
    //background();
    //sky1();
    //sky2();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    //Normal_Tree();
    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
   // Normal_Tree();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    //Normal_Tree();
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
