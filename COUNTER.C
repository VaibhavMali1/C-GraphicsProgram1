#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd=DETECT,gm;
	int i,midx,midy,count;
	char string[100];
	printf("Enter a Number\n");
	scanf("%d",&count);
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	midx=getmaxx()/2;
	midy=getmaxy()/2;

	for(i=0;i<=count;i++){
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(midx-50,midy-50,midx+50,midy+50);
	floodfill(midx,midy,WHITE);

	setcolor(BLUE);
	sprintf(string,"%s","Counter");
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	outtextxy(midx,midy-100,"Counter");
	sprintf(string,"%d",i);
	outtextxy(midx,midy,string);

	delay(1000);
	cleardevice();
	}
	getch();
	closegraph();
	return 0;
}