
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>

# define PI 3.14159265358979323846


/// Animation-Source : Transform  ==>> https://www.youtube.com/watch?v=CR5SW3gmxPE
/// Grid For drawing Objects ==>> https://virtual-graph-paper.com/



void Display(void); /// Just declaring Display
void Display1(); /// Just declaring Display1



/// Position Vertices
GLfloat position = -1.2f,position2 = 0.0f,skypos=-1.2f,xpos=-1.0f,ypos=0.45f,yuppos,ydown;
GLfloat speed = 0.08f,skyspeed=0.03f,crowspeed = 0.1f;


int donef = 0,dtwof = 0,dthreef = 0,dfourf = 0,dfivef = 0,dsixf = 0,dsevenf = 0,
waterflag = 0,ideaflag = 0,ideamusic = 0,febbleflag = 0,stonereturnflag = 0,
deightf = 0,flyaway = 0,drankwater = 0,happilygone = 0;

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

    if(!waterflag)
    {
        xpos+=crowspeed;
        ypos-=crowspeed;
    }
    if(stonereturnflag)
    {
        xpos+=crowspeed;
        yuppos+=crowspeed;
    }
    ydown-=speed;
	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}

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

void Home()
{
    glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.02f,0.3f);
    glVertex2f(-0.38f,0.3f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.29f,0.0f);
    glVertex2f(0.07f,0.0f);
    glVertex2f(0.07f,-0.4f);
    glVertex2f(-0.29f,-0.4f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.43f,0.0f);
    glVertex2f(-0.41f,0.0f);
    glVertex2f(-0.41f,-0.35f);
    glVertex2f(-0.29f,-0.4f);
    glVertex2f(0.07f,-0.4f);

    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.1f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.29f,0.0f);
    glVertex2f(-0.29f,-0.4f);

    glColor3ub(0,0,0);
     glVertex2f(0.07f,-0.4f);
    glVertex2f(-0.29f,-0.4f);

     glColor3ub(0,0,0);
     glVertex2f(0.07f,-0.4f);
    glVertex2f(0.07f,-0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(-0.38f,0.3f);

    glColor3ub(0,0,0);
    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.43f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.37f,0.245f);
    glVertex2f(-0.41f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.41f,0.0f);
    glVertex2f(-0.41f,-0.35f);

    glColor3ub(0,0,0);
    glVertex2f(-0.41f,-0.35f);
    glVertex2f(-0.29f,-0.4f);

    glColor3ub(0,0,0);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.02f,0.3f);

    glColor3ub(0,0,0);
    glVertex2f(0.02f,0.3f);
    glVertex2f(-0.38f,0.3f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
    glVertex2f(-0.15f,-0.1f);
    glVertex2f(-0.02f,-0.1f);
    glVertex2f(-0.02f,-0.4f);
    glVertex2f(-0.15f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
    glVertex2f(-0.24f,-0.05f);
    glVertex2f(-0.18f,-0.05f);
    glVertex2f(-0.18f,-0.15f);
    glVertex2f(-0.24f,-0.15f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
     glVertex2f(-0.31f,0.0f);
    glVertex2f(-0.38f,0.02f);
    glVertex2f(-0.38f,-0.37f);
    glVertex2f(-0.31f,-0.4f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
    glVertex2f(0.06f,-0.05f);
    glVertex2f(-0.0f,-0.05f);
    glVertex2f(-0.0f,-0.15f);
    glVertex2f(0.06f,-0.15f);
    glEnd();
}

void sun()
{
     int triangleAmount = 20;
    GLfloat k=-.7f; GLfloat l=.8f;
    GLfloat radius =.20f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(254, 238, 194);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void Moving_Stone()
{
    int triangleAmount = 20;
    GLfloat radius =.02f;

	GLfloat twicePi = 2.0f * PI;

    GLfloat m=.6f; GLfloat n=0.0f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m + (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void Bird()
{


            glBegin(GL_LINES);
            glColor3ub(0,0,0);
                glVertex2f(-0.487f, 0.055f);
                glVertex2f(-0.487f, 0.055f);
            glEnd();

            glBegin(GL_LINES);
            glColor3ub(0,0,0);
                glVertex2f(-0.487f, 0.051f);
                glVertex2f(-0.487f, 0.051f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(-0.583f, -0.113f);
            glVertex2f(-0.599f, -0.133f);
            glVertex2f(-0.608f, -0.121f);
            glVertex2f(-0.617f, -0.121f);
            glVertex2f(-0.626f, -0.117f);
            glVertex2f(-0.637f, -0.121f);
            glVertex2f(-0.648f, -0.125f);
            glVertex2f(-0.657f, -0.129f);
            glVertex2f(-0.666f, -0.129f);
            glVertex2f(-0.659f, -0.121f);
            glVertex2f(-0.652f, -0.113f);
            glVertex2f(-0.670f, -0.137f);
            glVertex2f(-0.677f, -0.153f);
            glVertex2f(-0.686f, -0.172f);
            glVertex2f(-0.694f, -0.184f);
            glVertex2f(-0.710f, -0.196f);
            glVertex2f(-0.721f, -0.2f);
            glVertex2f(-0.737f, -0.204f);
            glVertex2f(-0.746f, -0.208f);
            glVertex2f(-0.741f, -0.2f);
            glVertex2f(-0.734f, -0.192f);
            glVertex2f(-0.726f, -0.184f);
            glVertex2f(-0.714f, -0.18f);
            glVertex2f(-0.708f, -0.176f);
            glVertex2f(-0.703f, -0.168f);
            glVertex2f(-0.701f, -0.149f);
            glVertex2f(-0.703f, -0.133f);
            glVertex2f(-0.708f, -0.117f);
            glVertex2f(-0.714f, -0.101f);
            glVertex2f(-0.728f, -0.105f);
            glVertex2f(-0.739f, -0.105f);
            glVertex2f(-0.748f, -0.101f);
            glVertex2f(-0.750f, -0.085f);
            glVertex2f(-0.750f, -0.062f);
            glVertex2f(-0.750f, -0.046f);
            glVertex2f(-0.754f, -0.03f);
            glVertex2f(-0.757f, -0.018f);
            glVertex2f(-0.766f, -0.01f);
            glVertex2f(-0.774f, -0.01f);
            glVertex2f(-0.779f, -0.01f);
            glVertex2f(-0.781f, 0.006f);
            glVertex2f(-0.777f, 0.041f);
            glVertex2f(-0.763f, 0.061f);
            glVertex2f(-0.754f, 0.077f);
            glVertex2f(-0.743f, 0.096f);
            glVertex2f(-0.734f, 0.112f);
            glVertex2f(-0.721f, 0.112f);
            glVertex2f(-0.708f, 0.108f);
            glVertex2f(-0.703f, 0.096f);
            glVertex2f(-0.710f, 0.077f);
            glVertex2f(-0.706f, 0.081f);
            glVertex2f(-0.697f, 0.089f);
            glVertex2f(-0.681f, 0.077f);
            glVertex2f(-0.670f, 0.061f);
            glVertex2f(-0.659f, 0.037f);
            glVertex2f(-0.657f, 0.021f);
            glVertex2f(-0.657f, -0.006f);
            glVertex2f(-0.654f, -0.038f);
            glVertex2f(-0.654f, -0.054f);
            glVertex2f(-0.657f, -0.07f);
            glVertex2f(-0.650f, -0.046f);
            glVertex2f(-0.641f, -0.054f);
            glVertex2f(-0.634f, -0.062f);
            glVertex2f(-0.623f, -0.062f);
            glVertex2f(-0.610f, -0.062f);
            glVertex2f(-0.603f, -0.046f);
            glVertex2f(-0.594f, -0.038f);
            glVertex2f(-0.614f, -0.054f);
            glVertex2f(-0.621f, -0.038f);
            glVertex2f(-0.639f, -0.014f);
            glVertex2f(-0.648f, 0.017f);
            glVertex2f(-0.652f, 0.033f);
            glVertex2f(-0.652f, 0.049f);
            glVertex2f(-0.663f, 0.065f);
            glVertex2f(-0.666f, 0.085f);
            glVertex2f(-0.663f, 0.104f);
            glVertex2f(-0.670f, 0.124f);
            glVertex2f(-0.670f, 0.144f);
            glVertex2f(-0.674f, 0.164f);
            glVertex2f(-0.681f, 0.183f);
            glVertex2f(-0.686f, 0.199f);
            glVertex2f(-0.694f, 0.223f);
            glVertex2f(-0.701f, 0.251f);
            glVertex2f(-0.708f, 0.266f);
            glVertex2f(-0.714f, 0.282f);
            glVertex2f(-0.726f, 0.302f);
            glVertex2f(-0.732f, 0.318f);
            glVertex2f(-0.717f, 0.318f);
            glVertex2f(-0.697f, 0.31f);
            glVertex2f(-0.683f, 0.286f);
            glVertex2f(-0.670f, 0.262f);
            glVertex2f(-0.659f, 0.239f);
            glVertex2f(-0.654f, 0.227f);
            glVertex2f(-0.661f, 0.258f);
            glVertex2f(-0.674f, 0.286f);
            glVertex2f(-0.683f, 0.306f);
            glVertex2f(-0.663f, 0.294f);
            glVertex2f(-0.650f, 0.274f);
            glVertex2f(-0.641f, 0.258f);
            glVertex2f(-0.634f, 0.231f);
            glVertex2f(-0.623f, 0.199f);
            glVertex2f(-0.632f, 0.239f);
            glVertex2f(-0.639f, 0.278f);
            glVertex2f(-0.630f, 0.278f);
            glVertex2f(-0.617f, 0.255f);
            glVertex2f(-0.608f, 0.219f);
            glVertex2f(-0.603f, 0.195f);
            glVertex2f(-0.599f, 0.172f);
            glVertex2f(-0.603f, 0.203f);
            glVertex2f(-0.599f, 0.223f);
            glVertex2f(-0.599f, 0.247f);
            glVertex2f(-0.588f, 0.223f);
            glVertex2f(-0.583f, 0.199f);
            glVertex2f(-0.581f, 0.168f);
            glVertex2f(-0.581f, 0.144f);
            glVertex2f(-0.577f, 0.175f);
            glVertex2f(-0.574f, 0.183f);
            glVertex2f(-0.570f, 0.183f);
            glVertex2f(-0.566f, 0.164f);
            glVertex2f(-0.561f, 0.14f);
            glVertex2f(-0.561f, 0.116f);
            glVertex2f(-0.559f, 0.096f);
            glVertex2f(-0.554f, 0.12f);
            glVertex2f(-0.550f, 0.128f);
            glVertex2f(-0.543f, 0.1f);
            glVertex2f(-0.548f, 0.053f);
            glVertex2f(-0.548f, 0.041f);
            glVertex2f(-0.541f, 0.049f);
            glVertex2f(-0.537f, 0.053f);
            glVertex2f(-0.534f, 0.029f);
            glVertex2f(-0.534f, 0.006f);
            glVertex2f(-0.546f, -0.022f);
            glVertex2f(-0.546f, -0.03f);
            glVertex2f(-0.561f, -0.026f);
            glVertex2f(-0.563f, -0.03f);
            glVertex2f(-0.541f, -0.034f);
            glVertex2f(-0.528f, -0.042f);
            glVertex2f(-0.514f, -0.05f);
            glVertex2f(-0.506f, -0.058f);
            glVertex2f(-0.494f, -0.062f);
            glVertex2f(-0.486f, -0.058f);
            glVertex2f(-0.488f, -0.058f);
            glVertex2f(-0.483f, -0.038f);
            glVertex2f(-0.479f, -0.026f);
            glVertex2f(-0.472f, -0.014f);
            glVertex2f(-0.468f, -0.01f);
            glVertex2f(-0.466f, -0.002f);
            glVertex2f(-0.459f, 0.002f);
            glVertex2f(-0.454f, 0.006f);
            glVertex2f(-0.454f, -0.002f);
            glVertex2f(-0.454f, -0.014f);
            glVertex2f(-0.459f, -0.026f);
            glVertex2f(-0.466f, -0.042f);
            glVertex2f(-0.470f, -0.05f);
            glVertex2f(-0.450f, -0.026f);
            glVertex2f(-0.448f, -0.014f);
            glVertex2f(-0.439f, -0.006f);
            glVertex2f(-0.428f, -0.006f);
            glVertex2f(-0.421f, -0.006f);
            glVertex2f(-0.419f, -0.022f);
            glVertex2f(-0.428f, -0.038f);
            glVertex2f(-0.432f, -0.05f);
            glVertex2f(-0.437f, -0.062f);
            glVertex2f(-0.448f, -0.066f);
            glVertex2f(-0.452f, -0.074f);
            glVertex2f(-0.430f, -0.066f);
            glVertex2f(-0.417f, -0.062f);
            glVertex2f(-0.408f, -0.058f);
            glVertex2f(-0.408f, -0.074f);
            glVertex2f(-0.408f, -0.089f);
            glVertex2f(-0.412f, -0.101f);
            glVertex2f(-0.428f, -0.109f);
            glVertex2f(-0.437f, -0.109f);
            glVertex2f(-0.450f, -0.113f);
            glVertex2f(-0.434f, -0.117f);
            glVertex2f(-0.423f, -0.113f);
            glVertex2f(-0.414f, -0.121f);
            glVertex2f(-0.412f, -0.129f);
            glVertex2f(-0.412f, -0.145f);
            glVertex2f(-0.417f, -0.149f);
            glVertex2f(-0.421f, -0.157f);
            glVertex2f(-0.430f, -0.157f);
            glVertex2f(-0.443f, -0.153f);
            glVertex2f(-0.452f, -0.145f);
            glVertex2f(-0.457f, -0.145f);
            glVertex2f(-0.448f, -0.157f);
            glVertex2f(-0.443f, -0.16f);
            glVertex2f(-0.439f, -0.168f);
            glVertex2f(-0.439f, -0.176f);
            glVertex2f(-0.439f, -0.184f);
            glVertex2f(-0.441f, -0.192f);
            glVertex2f(-0.448f, -0.192f);
            glVertex2f(-0.450f, -0.192f);
            glVertex2f(-0.457f, -0.184f);
            glVertex2f(-0.470f, -0.172f);
            glVertex2f(-0.479f, -0.157f);
            glVertex2f(-0.483f, -0.149f);
            glVertex2f(-0.490f, -0.149f);
            glVertex2f(-0.497f, -0.145f);
            glVertex2f(-0.508f, -0.137f);
            glVertex2f(-0.501f, -0.153f);
            glVertex2f(-0.492f, -0.16f);
            glVertex2f(-0.483f, -0.168f);
            glVertex2f(-0.481f, -0.184f);
            glVertex2f(-0.479f, -0.196f);
            glVertex2f(-0.490f, -0.188f);
            glVertex2f(-0.499f, -0.184f);
            glVertex2f(-0.514f, -0.172f);
            glVertex2f(-0.501f, -0.192f);
            glVertex2f(-0.492f, -0.196f);
            glVertex2f(-0.486f, -0.212f);
            glVertex2f(-0.481f, -0.22f);
            glVertex2f(-0.472f, -0.24f);
            glVertex2f(-0.470f, -0.251f);
            glVertex2f(-0.470f, -0.263f);
            glVertex2f(-0.470f, -0.275f);
            glVertex2f(-0.479f, -0.267f);
            glVertex2f(-0.488f, -0.255f);
            glVertex2f(-0.492f, -0.247f);
            glVertex2f(-0.501f, -0.24f);
            glVertex2f(-0.494f, -0.259f);
            glVertex2f(-0.483f, -0.275f);
            glVertex2f(-0.481f, -0.287f);
            glVertex2f(-0.477f, -0.303f);
            glVertex2f(-0.472f, -0.315f);
            glVertex2f(-0.470f, -0.326f);
            glVertex2f(-0.470f, -0.342f);
            glVertex2f(-0.470f, -0.362f);
            glVertex2f(-0.470f, -0.37f);
            glVertex2f(-0.477f, -0.354f);
            glVertex2f(-0.481f, -0.338f);
            glVertex2f(-0.488f, -0.326f);
            glVertex2f(-0.497f, -0.311f);
            glVertex2f(-0.492f, -0.326f);
            glVertex2f(-0.490f, -0.346f);
            glVertex2f(-0.486f, -0.362f);
            glVertex2f(-0.486f, -0.374f);
            glVertex2f(-0.483f, -0.394f);
            glVertex2f(-0.481f, -0.409f);
            glVertex2f(-0.483f, -0.433f);
            glVertex2f(-0.486f, -0.445f);
            glVertex2f(-0.490f, -0.453f);
            glVertex2f(-0.494f, -0.437f);
            glVertex2f(-0.494f, -0.421f);
            glVertex2f(-0.497f, -0.406f);
            glVertex2f(-0.501f, -0.39f);
            glVertex2f(-0.510f, -0.374f);
            glVertex2f(-0.508f, -0.394f);
            glVertex2f(-0.506f, -0.406f);
            glVertex2f(-0.501f, -0.429f);
            glVertex2f(-0.499f, -0.449f);
            glVertex2f(-0.497f, -0.473f);
            glVertex2f(-0.499f, -0.489f);
            glVertex2f(-0.506f, -0.508f);
            glVertex2f(-0.510f, -0.52f);
            glVertex2f(-0.512f, -0.496f);
            glVertex2f(-0.512f, -0.469f);
            glVertex2f(-0.519f, -0.449f);
            glVertex2f(-0.523f, -0.429f);
            glVertex2f(-0.526f, -0.413f);
            glVertex2f(-0.528f, -0.433f);
            glVertex2f(-0.526f, -0.457f);
            glVertex2f(-0.521f, -0.477f);
            glVertex2f(-0.521f, -0.5f);
            glVertex2f(-0.519f, -0.524f);
            glVertex2f(-0.519f, -0.54f);
            glVertex2f(-0.521f, -0.552f);
            glVertex2f(-0.523f, -0.568f);
            glVertex2f(-0.528f, -0.579f);
            glVertex2f(-0.532f, -0.595f);
            glVertex2f(-0.541f, -0.607f);
            glVertex2f(-0.541f, -0.579f);
            glVertex2f(-0.541f, -0.548f);
            glVertex2f(-0.543f, -0.516f);
            glVertex2f(-0.548f, -0.492f);
            glVertex2f(-0.552f, -0.465f);
            glVertex2f(-0.554f, -0.441f);
            glVertex2f(-0.557f, -0.425f);
            glVertex2f(-0.559f, -0.406f);
            glVertex2f(-0.561f, -0.394f);
            glVertex2f(-0.566f, -0.378f);
            glVertex2f(-0.568f, -0.362f);
            glVertex2f(-0.572f, -0.342f);
            glVertex2f(-0.579f, -0.315f);
            glVertex2f(-0.588f, -0.287f);
            glVertex2f(-0.590f, -0.255f);
            glVertex2f(-0.594f, -0.228f);
            glVertex2f(-0.597f, -0.2f);
            glVertex2f(-0.599f, -0.184f);
            glVertex2f(-0.599f, -0.164f);
            glVertex2f(-0.597f, -0.141f);
            glVertex2f(-0.594f, -0.125f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(201,168,56);
            glVertex2f(-0.770f, -0.188f);
            glVertex2f(-0.761f, -0.184f);
            glVertex2f(-0.752f, -0.176f);
            glVertex2f(-0.739f, -0.172f);
            glVertex2f(-0.728f, -0.149f);
            glVertex2f(-0.726f, -0.141f);
            glVertex2f(-0.712f, -0.149f);
            glVertex2f(-0.730f, -0.157f);
            glVertex2f(-0.750f, -0.18f);
            glVertex2f(-0.757f, -0.196f);
            glVertex2f(-0.779f, -0.216f);
            glVertex2f(-0.797f, -0.228f);
            glVertex2f(-0.814f, -0.232f);
            glVertex2f(-0.817f, -0.212f);
            glVertex2f(-0.806f, -0.192f);
            glVertex2f(-0.814f, -0.196f);
            glVertex2f(-0.826f, -0.212f);
            glVertex2f(-0.826f, -0.243f);
            glVertex2f(-0.794f, -0.243f);
            glVertex2f(-0.772f, -0.232f);
            glVertex2f(-0.752f, -0.22f);
            glVertex2f(-0.748f, -0.212f);
            glVertex2f(-0.739f, -0.192f);
            glVertex2f(-0.728f, -0.184f);
            glVertex2f(-0.714f, -0.18f);
            glVertex2f(-0.708f, -0.172f);
            glVertex2f(-0.703f, -0.157f);
            glVertex2f(-0.703f, -0.141f);
            glVertex2f(-0.708f, -0.125f);
            glVertex2f(-0.710f, -0.117f);
            glVertex2f(-0.719f, -0.109f);
            glVertex2f(-0.723f, -0.109f);
            glVertex2f(-0.728f, -0.113f);
            glVertex2f(-0.739f, -0.113f);
            glVertex2f(-0.748f, -0.109f);
            glVertex2f(-0.750f, -0.101f);
            glVertex2f(-0.750f, -0.085f);
            glVertex2f(-0.750f, -0.066f);
            glVertex2f(-0.750f, -0.054f);
            glVertex2f(-0.752f, -0.046f);
            glVertex2f(-0.754f, -0.034f);
            glVertex2f(-0.757f, -0.022f);
            glVertex2f(-0.761f, -0.018f);
            glVertex2f(-0.772f, -0.014f);
            glVertex2f(-0.779f, -0.014f);
            glVertex2f(-0.779f, -0.018f);
            glVertex2f(-0.783f, -0.01f);
            glVertex2f(-0.794f, -0.01f);
            glVertex2f(-0.797f, -0.018f);
            glVertex2f(-0.806f, -0.03f);
            glVertex2f(-0.817f, -0.038f);
            glVertex2f(-0.826f, -0.058f);
            glVertex2f(-0.832f, -0.07f);
            glVertex2f(-0.846f, -0.097f);
            glVertex2f(-0.848f, -0.117f);
            glVertex2f(-0.852f, -0.137f);
            glVertex2f(-0.857f, -0.157f);
            glVertex2f(-0.859f, -0.172f);
            glVertex2f(-0.857f, -0.196f);
            glVertex2f(-0.852f, -0.208f);
            glVertex2f(-0.839f, -0.188f);
            glVertex2f(-0.830f, -0.184f);
            glVertex2f(-0.819f, -0.184f);
            glVertex2f(-0.806f, -0.188f);
            glVertex2f(-0.788f, -0.192f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(201,168,56);
            glVertex2f(-0.723f, -0.141f);
            glVertex2f(-0.717f, -0.137f);
            glVertex2f(-0.712f, -0.16f);
            glVertex2f(-0.730f, -0.16f);
            glVertex2f(-0.730f, -0.141f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(193,64,122);
            glVertex2f(-0.781f, -0.192f);
            glVertex2f(-0.794f, -0.192f);
            glVertex2f(-0.803f, -0.196f);
            glVertex2f(-0.801f, -0.196f);
            glVertex2f(-0.810f, -0.204f);
            glVertex2f(-0.814f, -0.212f);
            glVertex2f(-0.814f, -0.224f);
            glVertex2f(-0.803f, -0.228f);
            glVertex2f(-0.792f, -0.224f);
            glVertex2f(-0.777f, -0.216f);
            glVertex2f(-0.763f, -0.204f);
            glVertex2f(-0.754f, -0.196f);
            glVertex2f(-0.741f, -0.18f);
            glVertex2f(-0.752f, -0.18f);
            glVertex2f(-0.766f, -0.188f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.725f, 0.052f);
            glVertex2f(-0.740f, 0.017f);
            glVertex2f(-0.749f, 0.001f);
            glVertex2f(-0.767f, 0.009f);
            glVertex2f(-0.771f, 0.029f);
            glVertex2f(-0.756f, 0.06f);
            glVertex2f(-0.745f, 0.084f);
            glVertex2f(-0.731f, 0.096f);
            glVertex2f(-0.718f, 0.096f);
            glVertex2f(-0.711f, 0.088f);
            glVertex2f(-0.713f, 0.08f);
            glVertex2f(-0.711f, 0.088f);
            glVertex2f(-0.716f, 0.068f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.716f, 0.025f);
            glVertex2f(-0.698f, 0.056f);
            glVertex2f(-0.693f, 0.056f);
            glVertex2f(-0.696f, 0.06f);
            glVertex2f(-0.685f, 0.056f);
            glVertex2f(-0.676f, 0.041f);
            glVertex2f(-0.676f, 0.013f);
            glVertex2f(-0.678f, -0.011f);
            glVertex2f(-0.687f, -0.035f);
            glVertex2f(-0.696f, -0.058f);
            glVertex2f(-0.707f, -0.07f);
            glVertex2f(-0.718f, -0.078f);
            glVertex2f(-0.729f, -0.062f);
            glVertex2f(-0.733f, -0.027f);
            glVertex2f(-0.727f, 0.005f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(-0.758f, 0.041f);
            glVertex2f(-0.751f, 0.056f);
            glVertex2f(-0.745f, 0.06f);
            glVertex2f(-0.736f, 0.052f);
            glVertex2f(-0.738f, 0.033f);
            glVertex2f(-0.747f, 0.021f);
            glVertex2f(-0.758f, 0.009f);
            glVertex2f(-0.767f, 0.025f);
            glVertex2f(-0.758f, 0.041f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(-0.709f, 0.009f);
            glVertex2f(-0.705f, 0.021f);
            glVertex2f(-0.693f, 0.005f);
            glVertex2f(-0.687f, -0.011f);
            glVertex2f(-0.696f, -0.035f);
            glVertex2f(-0.705f, -0.054f);
            glVertex2f(-0.716f, -0.062f);
            glVertex2f(-0.722f, -0.042f);
            glVertex2f(-0.722f, -0.019f);
            glVertex2f(-0.718f, 0.001f);
            glVertex2f(-0.709f, 0.017f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.751f, 0.045f);
            glVertex2f(-0.747f, 0.048f);
            glVertex2f(-0.749f, 0.048f);
            glVertex2f(-0.745f, 0.052f);
            glVertex2f(-0.747f, 0.033f);
            glVertex2f(-0.756f, 0.033f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.713f, 0.001f);
            glVertex2f(-0.707f, 0.005f);
            glVertex2f(-0.707f, 0.005f);
            glVertex2f(-0.700f, 0.001f);
            glVertex2f(-0.709f, -0.015f);
            glVertex2f(-0.713f, -0.007f);
            glVertex2f(-0.716f, -0.007f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.591f, -0.141f);
            glVertex2f(-0.598f, -0.165f);
            glVertex2f(-0.598f, -0.185f);
            glVertex2f(-0.600f, -0.201f);
            glVertex2f(-0.596f, -0.212f);
            glVertex2f(-0.593f, -0.224f);
            glVertex2f(-0.591f, -0.24f);
            glVertex2f(-0.589f, -0.256f);
            glVertex2f(-0.589f, -0.268f);
            glVertex2f(-0.582f, -0.311f);
            glVertex2f(-0.569f, -0.367f);
            glVertex2f(-0.560f, -0.343f);
            glVertex2f(-0.565f, -0.295f);
            glVertex2f(-0.565f, -0.272f);
            glVertex2f(-0.551f, -0.331f);
            glVertex2f(-0.545f, -0.347f);
            glVertex2f(-0.542f, -0.311f);
            glVertex2f(-0.553f, -0.264f);
            glVertex2f(-0.527f, -0.315f);
            glVertex2f(-0.522f, -0.339f);
            glVertex2f(-0.525f, -0.287f);
            glVertex2f(-0.531f, -0.252f);
            glVertex2f(-0.509f, -0.303f);
            glVertex2f(-0.502f, -0.327f);
            glVertex2f(-0.509f, -0.272f);
            glVertex2f(-0.518f, -0.228f);
            glVertex2f(-0.522f, -0.193f);
            glVertex2f(-0.505f, -0.244f);
            glVertex2f(-0.511f, -0.169f);
            glVertex2f(-0.522f, -0.145f);
            glVertex2f(-0.522f, -0.133f);
            glVertex2f(-0.540f, -0.118f);
            glVertex2f(-0.518f, -0.121f);
            glVertex2f(-0.507f, -0.102f);
            glVertex2f(-0.500f, -0.078f);
            glVertex2f(-0.498f, -0.062f);
            glVertex2f(-0.516f, -0.05f);
            glVertex2f(-0.533f, -0.038f);
            glVertex2f(-0.542f, -0.035f);
            glVertex2f(-0.560f, -0.031f);
            glVertex2f(-0.573f, -0.027f);
            glVertex2f(-0.587f, -0.031f);
            glVertex2f(-0.596f, -0.035f);
            glVertex2f(-0.609f, -0.05f);
            glVertex2f(-0.611f, -0.062f);
            glVertex2f(-0.629f, -0.062f);
            glVertex2f(-0.638f, -0.058f);
            glVertex2f(-0.645f, -0.046f);
            glVertex2f(-0.651f, -0.046f);
            glVertex2f(-0.651f, -0.05f);
            glVertex2f(-0.651f, -0.046f);
            glVertex2f(-0.653f, -0.066f);
            glVertex2f(-0.653f, -0.082f);
            glVertex2f(-0.653f, -0.106f);
            glVertex2f(-0.647f, -0.11f);
            glVertex2f(-0.638f, -0.11f);
            glVertex2f(-0.620f, -0.11f);
            glVertex2f(-0.605f, -0.11f);
            glVertex2f(-0.593f, -0.114f);
            glVertex2f(-0.580f, -0.114f);
            glVertex2f(-0.591f, -0.129f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.469f, -0.019f);
            glVertex2f(-0.471f, -0.027f);
            glVertex2f(-0.465f, -0.007f);
            glVertex2f(-0.458f, 0.005f);
            glVertex2f(-0.460f, -0.023f);
            glVertex2f(-0.462f, -0.042f);
            glVertex2f(-0.471f, -0.054f);
            glVertex2f(-0.471f, -0.031f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.445f, -0.027f);
            glVertex2f(-0.447f, -0.031f);
            glVertex2f(-0.440f, -0.015f);
            glVertex2f(-0.427f, -0.011f);
            glVertex2f(-0.422f, -0.019f);
            glVertex2f(-0.433f, -0.038f);
            glVertex2f(-0.447f, -0.062f);
            glVertex2f(-0.456f, -0.058f);
            glVertex2f(-0.449f, -0.035f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.431f, -0.074f);
            glVertex2f(-0.425f, -0.066f);
            glVertex2f(-0.413f, -0.062f);
            glVertex2f(-0.409f, -0.074f);
            glVertex2f(-0.413f, -0.094f);
            glVertex2f(-0.433f, -0.114f);
            glVertex2f(-0.445f, -0.118f);
            glVertex2f(-0.440f, -0.09f);
            glVertex2f(-0.429f, -0.07f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.436f, -0.129f);
            glVertex2f(-0.422f, -0.125f);
            glVertex2f(-0.418f, -0.141f);
            glVertex2f(-0.436f, -0.153f);
            glVertex2f(-0.453f, -0.149f);
            glVertex2f(-0.447f, -0.133f);
            glVertex2f(-0.431f, -0.129f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.456f, -0.173f);
            glVertex2f(-0.462f, -0.169f);
            glVertex2f(-0.453f, -0.181f);
            glVertex2f(-0.449f, -0.189f);
            glVertex2f(-0.445f, -0.193f);
            glVertex2f(-0.440f, -0.181f);
            glVertex2f(-0.442f, -0.169f);
            glVertex2f(-0.453f, -0.161f);
            glVertex2f(-0.465f, -0.153f);
            glVertex2f(-0.458f, -0.169f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.627f, 0.167f);
            glVertex2f(-0.640f, 0.222f);
            glVertex2f(-0.647f, 0.254f);
            glVertex2f(-0.647f, 0.218f);
            glVertex2f(-0.647f, 0.187f);
            glVertex2f(-0.665f, 0.238f);
            glVertex2f(-0.689f, 0.282f);
            glVertex2f(-0.707f, 0.297f);
            glVertex2f(-0.689f, 0.238f);
            glVertex2f(-0.676f, 0.183f);
            glVertex2f(-0.673f, 0.147f);
            glVertex2f(-0.669f, 0.112f);
            glVertex2f(-0.665f, 0.104f);
            glVertex2f(-0.665f, 0.076f);
            glVertex2f(-0.665f, 0.06f);
            glVertex2f(-0.653f, 0.041f);
            glVertex2f(-0.647f, 0.045f);
            glVertex2f(-0.647f, 0.052f);
            glVertex2f(-0.651f, 0.045f);
            glVertex2f(-0.642f, 0.06f);
            glVertex2f(-0.640f, 0.072f);
            glVertex2f(-0.629f, 0.08f);
            glVertex2f(-0.622f, 0.084f);
            glVertex2f(-0.611f, 0.08f);
            glVertex2f(-0.593f, 0.08f);
            glVertex2f(-0.585f, 0.092f);
            glVertex2f(-0.576f, 0.108f);
            glVertex2f(-0.573f, 0.128f);
            glVertex2f(-0.582f, 0.116f);
            glVertex2f(-0.593f, 0.1f);
            glVertex2f(-0.602f, 0.116f);
            glVertex2f(-0.589f, 0.155f);
            glVertex2f(-0.587f, 0.179f);
            glVertex2f(-0.589f, 0.203f);
            glVertex2f(-0.589f, 0.222f);
            glVertex2f(-0.593f, 0.234f);
            glVertex2f(-0.598f, 0.211f);
            glVertex2f(-0.602f, 0.191f);
            glVertex2f(-0.605f, 0.167f);
            glVertex2f(-0.611f, 0.191f);
            glVertex2f(-0.613f, 0.218f);
            glVertex2f(-0.622f, 0.246f);
            glVertex2f(-0.629f, 0.258f);
            glVertex2f(-0.631f, 0.238f);
            glVertex2f(-0.629f, 0.214f);
            glVertex2f(-0.627f, 0.191f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.585f, 0.128f);
            glVertex2f(-0.589f, 0.151f);
            glVertex2f(-0.596f, 0.124f);
            glVertex2f(-0.598f, 0.104f);
            glVertex2f(-0.580f, 0.116f);
            glVertex2f(-0.580f, 0.116f);
            glVertex2f(-0.573f, 0.128f);
            glVertex2f(-0.571f, 0.155f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(47,47,47);
            glVertex2f(-0.605f, 0.128f);
            glVertex2f(-0.607f, 0.128f);
            glVertex2f(-0.611f, 0.104f);
            glVertex2f(-0.589f, 0.1f);
            glVertex2f(-0.582f, 0.12f);
            glVertex2f(-0.598f, 0.135f);
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

void road()
{
    glBegin(GL_POLYGON);
    glColor3ub(54,15,0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();
}


void pitcher()
{
    int triangleAmount = 20;
    GLfloat k=.4f; GLfloat l=-.7f;
    GLfloat radius =.13f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(107, 101, 93);
	glVertex2f(0.47f, -0.65f);
	glVertex2f(0.32f, -0.65f);
	glVertex2f(0.32f,-0.55f);
	glVertex2f(0.47f, -0.55f);

    glEnd();



    glBegin(GL_POLYGON);
	glColor3ub(191, 180, 164);
	glVertex2f(0.47f, -0.55f);
	glVertex2f(0.32f, -0.55f);
	glVertex2f(0.30f,-0.52f);
	glVertex2f(0.50f, -0.52f);

    glEnd();

}

void tree()
{

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(28,96,45); /// GREEN COLOR
            glVertex2f(0.682f, -0.378f);
            glVertex2f(0.604f, -0.457f);
            glVertex2f(0.571f, -0.529f);
            glVertex2f(0.482f, -0.533f);
            glVertex2f(0.400f, -0.469f);
            glVertex2f(0.360f, -0.39f);
            glVertex2f(0.324f, -0.303f);
            glVertex2f(0.331f, -0.185f);
            glVertex2f(0.333f, -0.197f);
            glVertex2f(0.340f, -0.11f);
            glVertex2f(0.360f, -0.07f);
            glVertex2f(0.393f, -0.011f);
            glVertex2f(0.438f, -0.003f);
            glVertex2f(0.455f, 0.048f);
            glVertex2f(0.464f, 0.12f);
            glVertex2f(0.509f, 0.191f);
            glVertex2f(0.540f, 0.191f);
            glVertex2f(0.540f, 0.254f);
            glVertex2f(0.562f, 0.377f);
            glVertex2f(0.591f, 0.416f);
            glVertex2f(0.653f, 0.475f);
            glVertex2f(0.729f, 0.519f);
            glVertex2f(0.793f, 0.499f);
            glVertex2f(0.855f, 0.456f);
            glVertex2f(0.889f, 0.4f);
            glVertex2f(0.909f, 0.337f);
            glVertex2f(0.951f, 0.305f);
            glVertex2f(1.002f, 0.282f);
            glVertex2f(1.002f, -0.552f);
            glVertex2f(0.949f, -0.54f);
            glVertex2f(0.922f, -0.477f);
            glVertex2f(0.893f, -0.505f);
            glVertex2f(0.893f, -0.548f);
            glVertex2f(0.858f, -0.568f);
            glVertex2f(0.833f, -0.568f);
            glVertex2f(0.742f, -0.588f);
            glVertex2f(0.689f, -0.533f);
            glVertex2f(0.642f, -0.465f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glVertex2f(0.682f, -0.378f);
            glVertex2f(0.604f, -0.457f);
            glVertex2f(0.571f, -0.529f);
            glVertex2f(0.482f, -0.533f);
            glVertex2f(0.400f, -0.469f);
            glVertex2f(0.360f, -0.39f);
            glVertex2f(0.324f, -0.303f);
            glVertex2f(0.331f, -0.185f);
            glVertex2f(0.333f, -0.197f);
            glVertex2f(0.340f, -0.11f);
            glVertex2f(0.360f, -0.07f);
            glVertex2f(0.393f, -0.011f);
            glVertex2f(0.438f, -0.003f);
            glVertex2f(0.455f, 0.048f);
            glVertex2f(0.464f, 0.12f);
            glVertex2f(0.509f, 0.191f);
            glVertex2f(0.540f, 0.191f);
            glVertex2f(0.540f, 0.254f);
            glVertex2f(0.562f, 0.377f);
            glVertex2f(0.591f, 0.416f);
            glVertex2f(0.653f, 0.475f);
            glVertex2f(0.729f, 0.519f);
            glVertex2f(0.793f, 0.499f);
            glVertex2f(0.855f, 0.456f);
            glVertex2f(0.889f, 0.4f);
            glVertex2f(0.909f, 0.337f);
            glVertex2f(0.951f, 0.305f);
            glVertex2f(1.002f, 0.282f);
            glVertex2f(1.002f, -0.552f);
            glVertex2f(0.949f, -0.54f);
            glVertex2f(0.922f, -0.477f);
            glVertex2f(0.893f, -0.505f);
            glVertex2f(0.893f, -0.548f);
            glVertex2f(0.858f, -0.568f);
            glVertex2f(0.833f, -0.568f);
            glVertex2f(0.742f, -0.588f);
            glVertex2f(0.689f, -0.533f);
            glVertex2f(0.642f, -0.465f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glVertex2f(0.682f, -0.378f);
            glVertex2f(0.604f, -0.457f);
            glVertex2f(0.571f, -0.529f);
            glVertex2f(0.482f, -0.533f);
            glVertex2f(0.400f, -0.469f);
            glVertex2f(0.360f, -0.39f);
            glVertex2f(0.324f, -0.303f);
            glVertex2f(0.331f, -0.185f);
            glVertex2f(0.333f, -0.197f);
            glVertex2f(0.340f, -0.11f);
            glVertex2f(0.360f, -0.07f);
            glVertex2f(0.393f, -0.011f);
            glVertex2f(0.438f, -0.003f);
            glVertex2f(0.455f, 0.048f);
            glVertex2f(0.464f, 0.12f);
            glVertex2f(0.509f, 0.191f);
            glVertex2f(0.540f, 0.191f);
            glVertex2f(0.540f, 0.254f);
            glVertex2f(0.562f, 0.377f);
            glVertex2f(0.591f, 0.416f);
            glVertex2f(0.653f, 0.475f);
            glVertex2f(0.729f, 0.519f);
            glVertex2f(0.793f, 0.499f);
            glVertex2f(0.855f, 0.456f);
            glVertex2f(0.889f, 0.4f);
            glVertex2f(0.909f, 0.337f);
            glVertex2f(0.951f, 0.305f);
            glVertex2f(1.002f, 0.282f);
            glVertex2f(1.002f, -0.552f);
            glVertex2f(0.949f, -0.54f);
            glVertex2f(0.922f, -0.477f);
            glVertex2f(0.893f, -0.505f);
            glVertex2f(0.893f, -0.548f);
            glVertex2f(0.858f, -0.568f);
            glVertex2f(0.833f, -0.568f);
            glVertex2f(0.742f, -0.588f);
            glVertex2f(0.689f, -0.533f);
            glVertex2f(0.642f, -0.465f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glVertex2f(0.629f, -0.485f);
            glVertex2f(0.691f, -0.529f);
            glVertex2f(0.687f, -0.382f);
            glVertex2f(0.582f, -0.382f);
            glVertex2f(0.584f, -0.497f);
            glVertex2f(0.578f, -0.501f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glVertex2f(0.629f, -0.485f);
            glVertex2f(0.691f, -0.529f);
            glVertex2f(0.687f, -0.382f);
            glVertex2f(0.582f, -0.382f);
            glVertex2f(0.584f, -0.497f);
            glVertex2f(0.578f, -0.501f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glVertex2f(0.629f, -0.485f);
            glVertex2f(0.691f, -0.529f);
            glVertex2f(0.687f, -0.382f);
            glVertex2f(0.582f, -0.382f);
            glVertex2f(0.584f, -0.497f);
            glVertex2f(0.578f, -0.501f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(87,0,0); /// BROWN COLOR
            glVertex2f(0.780f, -0.477f);
            glVertex2f(0.793f, -0.461f);
            glVertex2f(0.807f, -0.382f);
            glVertex2f(0.844f, -0.307f);
            glVertex2f(0.880f, -0.224f);
            glVertex2f(0.924f, -0.118f);
            glVertex2f(0.978f, -0.054f);
            glVertex2f(0.982f, -0.11f);
            glVertex2f(0.962f, -0.153f);
            glVertex2f(0.929f, -0.26f);
            glVertex2f(0.904f, -0.339f);
            glVertex2f(0.880f, -0.41f);
            glVertex2f(0.858f, -0.489f);
            glVertex2f(0.851f, -0.568f);
            glVertex2f(0.851f, -0.631f);
            glVertex2f(0.853f, -0.726f);
            glVertex2f(0.847f, -0.782f);
            glVertex2f(0.862f, -0.821f);
            glVertex2f(0.862f, -0.888f);
            glVertex2f(0.860f, -0.952f);
            glVertex2f(0.858f, -0.999f);
            glVertex2f(0.862f, -0.995f);
            glVertex2f(0.742f, -0.999f);
            glVertex2f(0.742f, -0.845f);
            glVertex2f(0.749f, -0.817f);
            glVertex2f(0.749f, -0.746f);
            glVertex2f(0.753f, -0.675f);
            glVertex2f(0.747f, -0.623f);
            glVertex2f(0.740f, -0.556f);
            glVertex2f(0.711f, -0.469f);
            glVertex2f(0.667f, -0.402f);
            glVertex2f(0.611f, -0.319f);
            glVertex2f(0.540f, -0.252f);
            glVertex2f(0.484f, -0.197f);
            glVertex2f(0.435f, -0.145f);
            glVertex2f(0.433f, -0.094f);
            glVertex2f(0.469f, -0.09f);
            glVertex2f(0.495f, -0.129f);
            glVertex2f(0.553f, -0.185f);
            glVertex2f(0.631f, -0.272f);
            glVertex2f(0.702f, -0.327f);
            glVertex2f(0.755f, -0.426f);
            glEnd();
}

void waterdrop()
{
	 glBegin(GL_POLYGON);
	glColor3ub(135,206,250); /// 2ND SMALL WATER DROP BESIDE THE JAR
	glVertex2f(0.16f, -0.72f);
	glVertex2f(0.11f, -0.70f);
	glVertex2f(.08f, -0.67f);
	glVertex2f(0.11f, -0.64f);
    glVertex2f(0.13f, -0.64f);
    glVertex2f(0.15f, -0.67f);
    glVertex2f(0.16f, -0.70f);
    glVertex2f(0.17f, -0.72f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(135,206,250);
	glVertex2f(0.20f, -0.62f);
	glVertex2f(0.11f, -0.60f);
	glVertex2f(.08f, -0.57f);
	glVertex2f(0.11f, -0.54f);
    glVertex2f(0.16f, -0.54f);
    glVertex2f(0.18f, -0.57f);
    glVertex2f(0.18f, -0.60f);
	glEnd();

	 glLoadIdentity();

    glBegin(GL_POLYGON);
	glColor3ub(135,206,250);
	glVertex2f(0.47f, -0.58f);
	glVertex2f(0.32f, -0.58f);
	glVertex2f(0.32f,-0.55f);
	glVertex2f(0.47f, -0.55f);

    glEnd();

}

void stone()
{
    int triangleAmount = 20;
    GLfloat k=-.7f; GLfloat l=-.7f;
    GLfloat radius =.02f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m=-.67f; GLfloat n=-.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m + (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.67f; GLfloat d=-.67f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(c, d); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.63f; GLfloat f=-.7f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(e, f); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x=-.66f; GLfloat y=-.70f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
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

void background()
{
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

void background2()
{


}


void sky1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void sky2()
{
   // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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
	    glColor3ub(255, 255, 255);
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

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(20,131,12);
            glVertex2f(-0.351f, -0.473f);
            glVertex2f(-0.429f, -0.473f);
            glVertex2f(-0.351f, -0.303f);
            glVertex2f(-0.409f, -0.295f);
            glVertex2f(-0.211f, 0.045f);
            glVertex2f(0.000f, -0.276f);
            glVertex2f(-0.076f, -0.276f);
            glVertex2f(0.022f, -0.45f);
            glVertex2f(-0.067f, -0.45f);
            glVertex2f(0.067f, -0.691f);
            glVertex2f(-0.265f, -0.703f);
            glVertex2f(-0.260f, -0.703f);
            glVertex2f(-0.476f, -0.703f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(64,0,0);
            glVertex2f(-0.162f, -0.801f);
            glVertex2f(-0.160f, -0.801f);
            glVertex2f(-0.160f, -0.813f);
            glVertex2f(-0.158f, -0.809f);
            glVertex2f(-0.262f, -0.801f);
            glVertex2f(-0.258f, -0.706f);
            glVertex2f(-0.158f, -0.699f);
            glVertex2f(-0.156f, -0.797f);
            glEnd();
}



void reshape(int w, int h)
{
    std::cout<<"Reshape is called"<<std::endl;
    float aspectRatio = (float)w/(float)h;
        glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
        gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

void Display(void)
{
    //std::cout<<"Display 1 called"<<std::endl;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-20);
    StartingText();
    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);
    std::cout<<"Init is called"<<std::endl;
}

void Display8()
{
    std::cout<<"Display 8 called"<<std::endl;
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    glTranslatef(0.1f,0.0f,0.0f);
    waterdrop();
    glLoadIdentity();
    tree();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    if(!flyaway)
        {
            glTranslatef(-0.2f,ydown, 0.0f);
            std::cout<<xpos<<" "<<yuppos<<std::endl;
            glRotatef(180,0,1,0);
            Bird();
    }
    else
    {
        glTranslatef(xpos-0.2,yuppos-0.4, 0.0f);
        glRotatef(180,0,1,0);
        Bird();
        std::cout<<"Xpos="<<xpos<<std::endl;
        if(drankwater == 0)
        {
            PlaySound(TEXT("Drank Water.wav"), NULL,SND_SYNC);
            drankwater = 1;
        }
        if(xpos>1.4 && happilygone == 0)
        {
            PlaySound(TEXT("Happily gone.wav"), NULL,SND_SYNC);
            happilygone = 1;
        }

    }
    glPopMatrix();
    glFlush();
    if(ydown<-0.6 && deightf == 0)
    {
        PlaySound(TEXT("Water came up.wav"), NULL,SND_SYNC);
        deightf = 1;
        flyaway = 1;
        stonereturnflag = 1;
    }
}

void Display7()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    glLoadIdentity();
    tree();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslatef(xpos,yuppos, 0.0f);
    std::cout<<xpos<<" "<<yuppos<<std::endl;
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    if(!febbleflag)
    {
        glPushMatrix();
        glTranslatef(-0.2,ydown, 0.0f);
        Moving_Stone();
        glPopMatrix();
        if(ydown<-0.7)
        {
            ydown = 0.8;
            glutDisplayFunc(Display8);

        }
    }

    glFlush();
    if((xpos>=-0.2 && yuppos>=-0.25) && dsevenf == 0)
    {
        waterflag = 1;
        stonereturnflag = 0;
        PlaySound(TEXT("Drop pebble into pot.wav"), NULL,SND_SYNC);
        dsevenf=1;
        febbleflag = 0;
        ydown = 0.2;
    }
}


void Display6()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    glLoadIdentity();
    tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();
    glPushMatrix();
    glTranslatef(xpos,ypos, 0.0f);
     if(xpos>=-0.2f && ypos<=-0.55f && dsixf==0)
    {
         std::cout<<"************Equal***********"<<std::endl;
         PlaySound(TEXT("Crow went Pot.wav"), NULL,SND_SYNC);
         PlaySound(TEXT("Very Little Water In Pot.wav"), NULL,SND_SYNC);
         PlaySound(TEXT("Can't reach the water.wav"), NULL,SND_SYNC);
         dsixf=1;
         waterflag=1;
    }

    std::cout<<xpos<<" "<<ypos<<std::endl;

    glRotatef(180,0,1,0);
    if(waterflag==1)
    {
        glRotatef(180,0,1,0);
        Bird();
        ideaflag = 1;
    }
    else
        Bird();
    glPopMatrix();
    glFlush();
    if(waterflag == 1 && ideaflag==1 && ideamusic==0 )
    {
         PlaySound(TEXT("Saw pebble.wav"), NULL,SND_SYNC);
         ideamusic=1;
    }
}

void Display5()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    glLoadIdentity();
    tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();
    glPushMatrix();
    glTranslatef(-1.0,0.45f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glFlush();

    if(dfivef==0)
    {
         PlaySound(TEXT("Crow saw a pot.wav"), NULL,SND_SYNC);
         dfivef=1;
    }
}

void Display4()
{
    std::cout<<"Display 4 displayed"<<std::endl;
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
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
    glPushMatrix();
    glTranslatef(skypos,0.0,0.0);
    sky1();
    sky2();
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(position2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(position2+0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(position2+1.2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    std::cout<<position<<std::endl;
    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dfourf==0)
    {
        //std::cout<<"audio played"<<std::endl;
        Sleep(1000);
         PlaySound(TEXT("Crow Sound.wav"), NULL,SND_SYNC);
         dfourf=1;
    }
}

void Display3()
{
    std::cout<<"Display 2 displayed"<<std::endl;
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
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
    sky1();
    sky2();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glTranslatef(0.5,0.0,0.0);
    Home();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();

    //glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dthreef==0)
    {
        //std::cout<<"audio played"<<std::endl;
         PlaySound(TEXT("Crow search Water.wav"), NULL,SND_SYNC);
         dthreef=1;
    }

}

void Display2()
{
    std::cout<<"Display 2 displayed"<<std::endl;
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
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
    sky1();
    sky2();

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
    sun();

    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    std::cout<<position<<std::endl;
    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dtwof==0)
    {

         //PlaySound(TEXT("Crow was thirsty.wav"), NULL,SND_SYNC);
         //dtwof=1;
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

    fullsky();
    grass();
    glTranslatef(0.1,0.0,0.0);
    background();
    glTranslatef(0.6,0.0,0.0);
    background();
    sky1();
    sky2();

    glTranslatef(-0.6,0.0,0.0);
    Normal_Tree();
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
    sun();
    glLoadIdentity();
    glFlush();
    if(donef==0)
    {
         //PlaySound(TEXT("It was a hot.wav"), NULL,SND_SYNC);
         //donef=1;
    }
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
            glutDisplayFunc(Display2);
            break;
        case '3':
            std::cout<<"3 Pressed"<<std::endl;
            position=-1.0f;
            glutDisplayFunc(Display3);
            break;
        case '4':
            std::cout<<"4 Pressed"<<std::endl;
            position=-1.0f;
            glutDisplayFunc(Display4);
            break;
        case '5':
            std::cout<<"5 Pressed"<<std::endl;
            position=-0.9f;
            glutDisplayFunc(Display5);
            break;
        case '6':
            std::cout<<"6 Pressed"<<std::endl;
            position=-0.9f;
            xpos = -1.0 ;
            ypos = 0.45;
            glutDisplayFunc(Display6);
            break;
        case '7':
            std::cout<<"7 Pressed"<<std::endl;
            position=-0.9f;
            xpos = -1.4 ;
            ypos = -0.85;
            yuppos=ypos;
            febbleflag = 1;
            stonereturnflag = 1;
            glutDisplayFunc(Display7);
            break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1240, 680);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
    glutCreateWindow("MORAL STORY");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}


