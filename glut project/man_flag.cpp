/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
#define PI 3.14

#include <stdlib.h>






void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


       double c1radius=0.28;

     glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(cos(i)*c1radius, .7+sin(i)*c1radius);
        printf("%.2f %.2f\n",cos(i)*c1radius,sin(i)*c1radius);
    }
     glEnd();
    glFlush();
    //*************eyes************
     double c1radius1=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(-.1+cos(i)*c1radius1, .8+sin(i)*c1radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
    double c1radius2=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(.08+cos(i)*c1radius2, .8+sin(i)*c1radius2);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();

    //****************mouth*************

    double c1radius3=0.08;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<PI; i+=PI/40.0)
    {
        glVertex2f(-0.012+cos(i)*c1radius3, (.60+sin(i)*c1radius3));
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();

    glBegin(GL_LINES);

  glColor3f(0,1,1);
    glVertex2f(0.0,.42);
    glVertex2f(0.0,-.4);
    glEnd();
     glFlush();

//*****************hand***********
glBegin(GL_LINES);
  glColor3f(0,1,1);
    glVertex2f(0.0,.32);
    glVertex2f(-.35,.1);
    glEnd();
     glFlush();
 glBegin(GL_LINES);

  glColor3f(0,1,1);
    glVertex2f(0.0,.32);
    glVertex2f(.35,.1);
    glEnd();
     glFlush();
     glBegin(GL_LINES);
//***************leg*****************
  glColor3f(0,1,1);
    glVertex2f(0.0,-.4);
    glVertex2f(-.35,-.67);
    glEnd();
     glFlush();
 glBegin(GL_LINES);

  glColor3f(0,1,1);
    glVertex2f(0.0,-.4);
    glVertex2f(.35,-.67);
    glEnd();
     glFlush();

     double radius1=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(-.32+cos(i)*radius1, .11+sin(i)*radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
 glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(.32+cos(i)*radius1, .11+sin(i)*radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
     glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(-.32+cos(i)*radius1, -.67+sin(i)*radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
 glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(.32+cos(i)*radius1, -.67+sin(i)*radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();


//*******************FLAG********************
    glBegin(GL_LINES);
  glColor3f(1,0,1);
    glVertex2f(-.33,.5);
    glVertex2f(-.33,.1);
    glEnd();
     glFlush();
     glBegin(GL_POLYGON);

      glColor3f(0,1,0);

    glVertex2f(-.33,.5);
    glVertex2f(-.33,.4);
    glVertex2f(-.53,.4);
    glVertex2f(-.53,.5);
    glEnd();
    glFlush();
     double radius=0.03;

     glBegin(GL_POLYGON);
      glColor3f(1,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(-.43+cos(i)*radius, .45+sin(i)*radius);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();

}




int main(int argc, char *argv[])
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutCreateWindow("Hello openGL");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
