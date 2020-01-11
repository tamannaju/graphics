#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{

   int gd = DETECT,gm;
   int x= 250,y=250,radius=50;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
    circle(x, y, radius);


    // rectangle ???????????

rectangle(100,111, 200,200);
   getch();
   closegraph();
}

