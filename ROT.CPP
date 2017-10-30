#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
clrscr(); 
int x1,y1,x2,y2,t,gm,gd;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

cout<<"Enter x1,,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"enter t";
cin>>t;
cout<<"after rotation";
float d=(3.14*t)/180;
x2=(x2*cos(d)+y2*sin(d));
y2=(-x2*sin(d)+y2*cos(d));
line(x1,y1,x2,y2);
getch();
}