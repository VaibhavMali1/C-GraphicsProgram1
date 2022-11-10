#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TurboC3\\BGI");
rectangle(150,50,400,150);
bar(150,200,400,350);
getch();
closegraph();
return 0;
}