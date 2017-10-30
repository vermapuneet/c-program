#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
clrscr(); 
int x1,y1,x2,y2,ch,gm,gd,sx,sy;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

cout<<"Enter x1,,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
rectangle(x1,y1,x2,y2);
cout<<"enter sx,sy";
cin>>sx>>sy;
x1=x1*sx;
y1=y1*sy;
x2=x2*sx;
y2=y2*sy;
cout<<"after scaling";
 rectangle(x1,y1,x2,y2);

getch();
}