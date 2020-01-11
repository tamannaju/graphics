#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{

   int gd = DETECT,gm;
   int left=50,top=50,right=100,bottom=100,x= 50,y=300,radius=50;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   float x2=200.00,y2=300.00,b1,b2,r1,p1,r2,p2;
    float t,t2,deg=-30,deg2=15;
    line(left, top + 150, left + 410, top + 150);
    outtextxy(left-3,top+145, "org");
    line(left, top + 170, left + 410, top + 170);
    line(x,y,x2,y2);
    t=(22*deg)/(180*7);
    t2=(22*deg2)/(180*7);
    b1=abs((x2*cos(t))-(y2*sin(t)));
    b2=abs((x2*sin(t))+(y2*cos(t)));
    line(x,y,b1,b2);
    cout<<b1<<" "<<b2;

    rectangle(left, top, right, bottom);
    outtextxy(left+2, top +10, "org");
    r1=left*cos(t2)-bottom*sin(t2);

   p1=left*sin(t2)+bottom*cos(t2);

   r2=right*cos(t2)-bottom*sin(t2);

   p2=right*sin(t2)+bottom*cos(t2);

    rectangle(r1,p1,r2,p2);
    rectangle(left+70, top+70, right+70, bottom+70);
    outtextxy(left+72, top +80, "tran");


   getch();
   closegraph();
}

