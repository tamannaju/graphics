#include<iostream>
//#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{

   //int gd = DETECT,gm;
   //initgraph(&gd, &gm, "C:\\TC\\BGI");
   int xmax,xmin,ymax,ymin,t,b,r,l1,t1,b1,r1,l,top,right,left,bottom,T,B,R,L,xi,yi,xi1,yi1;
   double m;
   cout<<"xmax ";
   cin>>xmax;
   cout<<"\nxmin ";
   cin>>xmin;
   cout<<"\nymax ";
   cin>>ymax;
   cout<<"\nymin ";
   cin>>ymin;
    cin>>top>>left>>right>>bottom;
  // line(xmin,ymax,xmin,ymin);
   //line(xmin,ymin,)

   if(top<xmin){l=1;}
   else{l=0;}
   if(left<ymax){t=1;}
   else{t=0;}
   if(top>xmax){r=1;}
   else{r=0;}
   if(left>ymin){b=1;}
   else{b=0;}
   cout<<"\n"<<t<<b<<r<<l;
   //if(right>xmin && right <xmax)


    cout<<"\nm= "<<m<<endl;

   if(right<xmin){l1=1;}
   else{l1=0;}
   if(bottom<ymax){t1=1;}
   else{t1=0;}
   if(right>xmax){r1=1;}
   else{r1=0;}
   if(bottom>ymin){b1=1;}
   else{b1=0;}


   cout<<"\n"<<t1<<b1<<r1<<l1;

   if(t==0 && b==0 && r==0 && l==0 && t1==0 && b1==0 && r1==0 && l1==0)
   {
       cout<<"\nvisible";
   }
 else{
    if(t==1 && t1==1){ T=1;}
    else{T=0;}
    if(b==1 && b1==1){ B=1;}
    else{B=0;}
    if(r==1 && r1==1){ R=1;}
    else{R=0;}
    if(l==1 && l1==1){ L=1;}
    else{L=0;}
    if(T==0 && B==0 && R==0 && L==0)
    {
        cout<<"\nClipping candidate"<<endl;
    }
    else{cout<<"\n not visible";}
 }
 m=(bottom-left)/(right-top);

if(l==1){ xi=xmin;
    yi=left+m*(xi-top);}
if(r==1){xi=xmax;
     yi=left+m*(xi-top);}
     //cout<<xi<<" "<<yi;
     if(b==1)
     {
         yi=ymin;
         xi=top+(1/m)*xmin;
     }
     if(t==1)
     {
         yi=ymax;
         xi=top+(1/m)*xmin;
     }
     cout<<endl<<xi<<" "<<yi;



     if(l1==1){ xi1=xmin;
    yi1=bottom+m*(xi1-right);}
if(r1==1){xi1=xmax;
     yi1=bottom+m*(xi-top);}
     //cout<<xi<<" "<<yi;
     if(b1==1)
     {
         yi1=ymin;
         xi1=right+(1/m)*xmin;
     }
     if(t1==1)
     {
         yi1=ymax;
         xi1=right+(1/m)*xmin;
     }
     cout<<endl<<xi1<<" "<<yi1;
 //getch();
   //closegraph();
}
