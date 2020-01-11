#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{

   int gd = DETECT,gm;
   int x= 200,y=150,x_rad=100,y_rad=50,start_angle=0,
     end_angle1=360,end_angle2=180;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
    ellipse(x, y, start_angle,end_angle1, x_rad, y_rad);


   //////////half circle////////


      ellipse(x+150, y+150, start_angle,end_angle2, x_rad, y_rad);
   getch();
   closegraph();
}
