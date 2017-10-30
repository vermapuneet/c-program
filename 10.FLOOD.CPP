#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>

void floodFill(int x, int y, int old, int fill)
{
 int current;
 current=getpixel(x,y);
 if(current==old)
 {
  putpixel(x,y,fill);
  delay(1);
  floodFill(x+1,y,old,fill);
  floodFill(x-1,y,old,fill);
  floodFill(x, y+1,old,fill);
  floodFill(x,y-1,old,fill);
 }
}

void main()
{
  int o=0;
  clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm, "C:\\TC\\BGI");

   rectangle(100,100,150,150);    //RE
   //LIGHTGRAY

   floodFill(125,125,o,4);        //RED
  //LIGHTGRAY

   getch();
  closegraph();
}
