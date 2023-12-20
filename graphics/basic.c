#include<graphics.h>
int main(void){
    int gd =DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    line(100,100,200,200);
    getch();
    closegraph();
    
}