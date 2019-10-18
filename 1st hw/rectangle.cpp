#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{

   int gd = DETECT,gm;
   int left=50,top=50,right=100,bottom=100,x= 200,y=150,radius=50;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   rectangle(left, top, right, bottom);
   rectangle(left, top, right, bottom);

   getch();
   closegraph();
}

