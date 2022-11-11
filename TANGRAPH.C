#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd=DETECT,gm;
	int angle =0;
	double x,y;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	for(x=0;x<getmaxx();x++){
	y=50*tan(angle*3.141/180);
	y=getmaxy()/2-y;
	putpixel(x,y,15);
	delay(50);
	angle+=2;
	}
	getch();
	closegraph();
	return 0;
}