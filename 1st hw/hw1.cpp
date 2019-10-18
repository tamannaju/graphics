#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{

   int gd = DETECT,gm;
   int left=100,top=100,right=200,bottom=200,x= 200,y=150,radius=50;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(left - 10, top + 150, left + 410, top + 150);
    line(x, y, x + 420, y);

   getch();
   closegraph();
}
