#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std; int xmax,xmin,ymax,ymin,t,b,r,l1,t1,b1,r1,l,T,B,R,L,p1,q1,p2,q2,p3,q3;
   double xi,yi,xi1,yi1,m;
   void polygon(int tt,int ll,int rr,int bb)
   {
       int top=tt;
       int left=ll;
       int right=rr;
       int bottom=bb;
        if(top<xmin){l=1;}
   else{l=0;}
   if(left<ymax){t=1;}
   else{t=0;}
   if(top>xmax){r=1;}
   else{r=0;}
   if(left>ymin){b=1;}
   else{b=0;}


   if(right<xmin){l1=1;}
   else{l1=0;}
   if(bottom<ymax){t1=1;}
   else{t1=0;}
   if(right>xmax){r1=1;}
   else{r1=0;}
   if(bottom>ymin){b1=1;}
   else{b1=0;}
 xi=top;yi=left;
if(l==1){ xi=xmin;
    yi=left+(bottom-left)*(xi-top)/(right-top);}
if(r==1){xi=xmax;
    yi=left+(bottom-left)*(xi-top)/(right-top);}

     if(b==1)
     {
         yi=ymin;
         xi=top+(right-top)*(yi-left)/(bottom-left);
     }
     if(t==1)
     {
         yi=ymax;
        xi=top+(right-top)*(yi-left)/(bottom-left);

     }
     cout<<endl<<xi<<" "<<yi;


    xi1=right;yi1=bottom;
     if(l1==1){ xi1=xmin;
    yi1=bottom+(bottom-left)*(xi1-right)/(right-top);}
if(r1==1){xi1=xmax;
     yi1=bottom+(bottom-left)*(xi1-right)/(right-top);}

     if(b1==1)
     {
         yi1=ymin;
         xi1=right+(right-top)*(yi1-bottom)/(bottom-left);
     }
     if(t1==1)
     {
         yi1=ymax;
         xi1=right+(right-top)*(yi1-bottom)/(bottom-left);
     }
     cout<<endl<<xi1<<" "<<yi1;
    setcolor(RED);
     line(xi,yi,xi1,yi1);
   }



int main()
{
    cout<<"xmax ";
   cin>>xmax;
   cout<<"\nxmin ";
   cin>>xmin;
   cout<<"\nymax ";
   cin>>ymax;
   cout<<"\nymin ";
   cin>>ymin;


     int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   line(xmin,ymax,xmin,ymin);
   line(xmin,ymin,xmax,ymin);
   line(xmax,ymin,xmax,ymax);
   line(xmin,ymax,xmax,ymax);
  cout<<"\nEnter polygon points";
     cin>>p1>>q1;
     cin>>p2>>q2;
     cin>>p3>>q3;
     setcolor(WHITE);
     //line(p1,q1,p2,q2);
    //line(p1,q1,p3,q3);
    //line(p3,q3,p2,q2);
    polygon(p1,q1,p2,q2);
    polygon(p1,q1,p3,q3);
    polygon(p3,q3,p2,q2);

 getch();
   closegraph();
}
