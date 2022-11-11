#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define HEIGHT getmaxy()
#define WIDTH getmaxx()
#define MAXHEIGHT 420
void main()
{
	int x,y=0,t=MAXHEIGHT,c=1;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	for(x=40;x<=getmaxx();x=x+2)
	{
	rectangle(0,MAXHEIGHT,getmaxx(),MAXHEIGHT+5);
	floodfill(5,MAXHEIGHT+3,WHITE);
	pieslice(x,y,0,360,20);
	delay(100);
	if(y>MAXHEIGHT-20)
	{
	c=0;
	t=t-40;
	}
	if(y<=(MAXHEIGHT-t))
	{
		c=1;
	}
	if(t>=40)
	y=y+(c? 15:-15);
	cleardevice();
	if(kbhit())
	break;
	}
	getch();
}
