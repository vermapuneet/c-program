#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
clrscr(); 
int x1,y1,x2,y2,tx,ty,gm,gd;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

cout<<"Enter x1,,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"enter tx and ty";
cin>>tx>>ty;
cout<<"after translation";
line(x1+tx,y1+ty,x2+tx,y2+ty);
getch();
}