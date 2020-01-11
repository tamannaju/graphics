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
#include <GL/glut.h>/*
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



    double radius=0.28;
    //glBegin(GL_LINE_LOOP);
     glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/20.0)
    {
        glVertex2f(-.7+cos(i)*radius, .7+sin(i)*radius);
        printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
    //*************eyes************
     double radius1=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/20.0)
    {
        glVertex2f(-.82+cos(i)*radius1, .8+sin(i)*radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
    double radius2=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/20.0)
    {
        glVertex2f(-.58+cos(i)*radius2, .8+sin(i)*radius2);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();

    //****************mouth*************

    double radius3=0.08;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<PI; i+=PI/20.0)
    {
        glVertex2f(-.7+cos(i)*radius3, .58+sin(i)*radius3);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();



     double c2radius=0.28;
    //glBegin(GL_LINE_LOOP);
     glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(cos(i)*c2radius, .7+sin(i)*c2radius);
        printf("%.2f %.2f\n",cos(i)*c2radius,sin(i)*c2radius);
    }
     glEnd();
    glFlush();
    //*************eyes************
     double c2radius1=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(-.1+cos(i)*c2radius1, .8+sin(i)*c2radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
    double c2radius2=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(.08+cos(i)*c2radius2, .8+sin(i)*c2radius2);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();

    //****************mouth*************

    double c2radius3=0.08;

     glBegin(GL_LINES);
      glColor3f(0,0,0);

    for(double i=0; i<PI; i+=PI/40.0)
    {
        glVertex2f(-0.015+cos(i)*c2radius3, .58+sin(i)*c2radius3);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();


    //********************3rd emoji*************



     double c3radius=0.28;
    //glBegin(GL_LINE_LOOP);
     glBegin(GL_POLYGON);
      glColor3f(0,1,1);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(cos(i)*c2radius, sin(i)*c2radius);
        printf("%.2f %.2f\n",cos(i)*c2radius,sin(i)*c2radius);
    }
     glEnd();
    glFlush();
    //*************eyes************
     double c3radius1=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(-.1+cos(i)*c3radius1, .1+sin(i)*c3radius1);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();
    double c3radius2=0.04;

     glBegin(GL_POLYGON);
      glColor3f(0,0,0);

    for(double i=0; i<2*PI; i+=PI/40.0)
    {
        glVertex2f(.08+cos(i)*c3radius2, .1+sin(i)*c3radius2);
        //printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
    }
     glEnd();
    glFlush();

    //****************mouth*************

    double c3radius3=0.08;

     glBegin(GL_LINES);
      glColor3f(0,0,0);

    for(double i=0; i<PI; i+=PI/40.0)
    {
        glVertex2f(-0.012+cos(i)*c3radius3,-(.07+sin(i)*c3radius3));
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
