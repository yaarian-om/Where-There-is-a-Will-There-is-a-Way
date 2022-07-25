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



#ifndef Position vertex and Speed
GLfloat position = -1.2f,position2 = 0.0f,skypos=-1.2f,xpos=-1.0f,ypos=0.45f,yuppos,ydown;
GLfloat speed = 0.08f,skyspeed=0.03f,crowspeed = 0.1f;
#endif Position vertex and Speed







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
    glutInitWindowSize(1920, 1080); /// Window size is similar to my screen resolution (1920 X 1080) pixel
    glutInitWindowPosition(-10,0); /// Top Left corner of the screen position
    glutCreateWindow("MORAL STORY"); /// Screen Title
    init();
    glutDisplayFunc(Display); /// calling Display function to show some display ==>> White Page
    glutMainLoop();
    return 0;
}
