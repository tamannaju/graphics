#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cout<<"Input the two end point of line :"<<endl;
    cin>>x1>>y1>>x2>>y2;
    int x=x1,y=y1;
    int dx=x2-x1,dy=y2-y1,dt=2*(dy-dx),ds=2*dy;
    int d=2*dy-dx;
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    line(x1,y1,x2,y2);
    putpixel(x,y,GREEN);

    while(x<x2)
    {
        x++;
        if(d<0)
        {
            d=d+ds;
        }
        else
        {
            y++;
            d=d+dt;
        }
        putpixel(x,y,GREEN);
    }



    getch();
    closegraph();

}
