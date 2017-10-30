#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
clrscr(); 
int x1,y1,x2,y2,ch,gm,gd,a,b,r1,r2,r3,r4;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

cout<<"Enter x1,,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
line(x1,y1,x2,y2);
a=getmaxx();
b=getmaxy();
cout<<"select ch";
cin>>ch;
switch(ch){
case 1:line(a/2,0,a/2,b);
r1=a-x1;
r2=b-x2;
line(r1,y1,r2,y2);
break;
case 2: line(0,b/2,a,b/2);
r3=a-y1;
r4=b-y2;
line(x1,r3,x2,r4);
break;
 }
getch();
}