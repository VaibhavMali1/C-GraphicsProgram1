#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
line(100,100,200,200);
getch();
closegraph();
return 0;
}