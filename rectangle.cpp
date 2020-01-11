#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{

   int gd = DETECT,gm;
   int left=50,top=100,right=150,bottom=150,x= 200,y=150,radius=50,sx=2;
   double sy=1.5;
   initgraph(&gd, &gm, "C:\\TC\\BGI");


   rectangle(left, top, right, bottom);
   outtextxy(left+2, top +10, "before scaling");

   rectangle(left, top, right*sx, bottom*sy);
   outtextxy(left+10, top +100, "after scaling");

   getch();
   closegraph();
}
