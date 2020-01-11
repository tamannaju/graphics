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


 glBegin(GL_POLYGON);

      glColor3f(1,0,1);
    glVertex3f(-.58,.32,0);

    glVertex3f(-.55,.32,0);

    glVertex3f(-.55,-.67,0);

    glVertex3f(-.58,-.67,0);

    glEnd();
    glFlush();
     glBegin(GL_LINES);

  glColor3f(0,1,1);
    glVertex2f(-.55,.26);
    glVertex2f(-.5,.26);
    glEnd();
    glFlush();
    glBegin(GL_LINES);

  glColor3f(0,1,1);
    glVertex2f(-.55,-.26);
    glVertex2f(-.5,-.26);
    glEnd();
    glFlush();

     glBegin(GL_POLYGON);

      glColor3f(0,1,0);
    glVertex3f(-.5,.3,0);
    glColor3f(0,1,0);
    glVertex3f(.5,.3,0);
     glColor3f(0,1,0);
    glVertex3f(.5,-.3,0);
      glColor3f(0,1,0);
    glVertex3f(-.5,-.3,0);

    glEnd();
    glFlush();

    //circle

    double radius=0.2;
    //glBegin(GL_LINE_LOOP);
     glBegin(GL_POLYGON);
      glColor3f(1,0,0);

    for(double i=0; i<2*PI; i+=PI/20.0)
    {
        glVertex2f(cos(i)*radius, sin(i)*radius);
        printf("%.2f %.2f\n",cos(i)*radius,sin(i)*radius);
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
