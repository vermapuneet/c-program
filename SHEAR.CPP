#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
clrscr(); 
int x1,y1,x2,y2,a,b,c,d,ch,gm,gd,s1,s2;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

cout<<"Enter x1,,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
rectangle(x1,y1,x2,y2);
cout<<"enter your choice 1-x-shear or 2- y-shear";
cin>>ch;
switch(ch){
case 1:cout<<"enter x-shear valuse";
cin>>s1;
a=x1+s1;
b=x2+s1;
line(x1,y1,a,y2);
line(a,y2,b,y2);
line(x2,y1,b,y2);
break;
case 2:cout<<"enter y-shear value";
cin>>s2;
c=y1+s2;
d=y2+s2;
line(x1,y1,x2,c);
line(x2,c,x2,d);
line(x1,y2,x2,d);
break;
   }

getch();
}