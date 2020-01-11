#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void displaycircle(int cx,int cy, int x, int y)
{
    putpixel(cx+x, cy+y, GREEN);
    putpixel(cx-x, cy+y, BLUE);
    putpixel(cx+x, cy-y, RED);
    putpixel(cx-x, cy-y, WHITE);
    putpixel(cx+y, cy+x, GREEN);
    putpixel(cx-y, cy+x, BLUE);
    putpixel(cx+y, cy-x, RED);
    putpixel(cx-y, cy-x, WHITE);
}
void drawBresenhamCircle(int X,int Y,int radius)
{
    int x = 0, y = radius;
    int d = 3 - 2 * radius;
   displaycircle(X, Y, x, y);
    while (x<=y)
    {
        x++;
        if (d > 0)
        {
            y--;
           d =d+4*(x-y)+10;
        }
        else
           d =d+4*x+6;
       displaycircle(X,Y,x,y);
    }
}

int main()
{
    int r,c1,c2;
    cout<<"Input Radius "<<endl;
    cin>>r;
    cout<<"Input Center x: "<<endl;
    cin>>c1;
    cout<<"Input Center y: "<<endl;
    cin>>c2;

      int gd = DETECT, gm;
            initgraph(&gd, &gm, "");


            drawBresenhamCircle(c1,c2,r);
            getch();
            closegraph();
}



