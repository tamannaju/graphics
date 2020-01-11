#include <graphics.h>
#include <iostream>
#include <math.h>
#include <dos.h>
using namespace std;
int main( )
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int gd=DETECT,gm;



	cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(x1,y1,x2,y2);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
    cout<<dx<<dy;
	if(dx>=dy)
		step=dx;
	else
		step=dy;

	dx=dx/step;
	dy=dy/step;

	x=x1;
	y=y1;


	for(int i=0;i<step;i++)
	{
		putpixel(round(x),round(y),RED);
		x=x+dx;
		y=y+dy;

		delay(100);
	}

	closegraph();
}
