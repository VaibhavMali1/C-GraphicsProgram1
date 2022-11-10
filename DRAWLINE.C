#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
moveto(100,100);
lineto(550,100);
getch();
closegraph();
return 0;
}