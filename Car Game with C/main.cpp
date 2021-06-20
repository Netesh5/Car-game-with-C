#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<windows.h>

//Custom headers
#include "menu.h"
#include "maingame.h"

//function declarations
void welcome_screen();
void startgame();
//void gameover(int);
//program entry point
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int k;
    welcome_screen();
    showmenu();

    //startgame();

    closegraph();
    return 0;
}

//welcome screen
void welcome_screen()
{
    int x, y, i;
    x = getmaxx()/2;
    y = getmaxy()/2;
    PlaySound(TEXT("devileyes.wav"),NULL,SND_ASYNC);
    settextstyle(4, HORIZ_DIR, 4);
    outtextxy(155, 205, "NPPK Presents");
    delay(1000);

    for(i = 0;i <= 300;i = i+2)
    {
        settextstyle(4, HORIZ_DIR, 4);
        outtextxy(155, 205-i, "NPPK Presents");
        delay(10);
        cleardevice();
    }
        settextstyle(4, HORIZ_DIR, 5);
        outtextxy(155, 70, "Car Game");
        delay(10);

    //car graph
    setcolor(YELLOW);
    line(x-70, y, x+70, y);
    line(x-70, y, x+70, y);delay(100);
    line(x-69, y-3, x+69, y-3);delay(100);
    arc(x-105, y, 0, 180, 35);delay(100);
    circle(x-105, y, 25);delay(100);
    arc(x+105, y, 0, 180, 35);delay(100);
    circle(x+105, y, 25);delay(100);
    line(x+140, y, x+190, y);delay(100);
    line(x+140, y-3, x+190, y-3);delay(100);
    line(x-190, y, x-140, y);delay(100);
    line(x-190, y-3, x-140, y-3);delay(100);
    ellipse(x+105, y, 0, 90, 85, 50);delay(100);
    ellipse(x-105, y, 90, 180, 85, 50);delay(100);
    ellipse(x, y-50, 0, 180, 105, 35);delay(100);
    ellipse(x, y-50, 349, 192, 95, 30);delay(100);
    line(x-92, y-44, x+92, y-44);delay(100);
    line(x-92, y-41, x+92, y-41);delay(100);
    line(x+7, y-40, x+7, y-80);delay(100);
    line(x+7, y-40, x+7, y-5);delay(100);
    delay(500);

    rectangle(x-90,y+70,x+150,y+90);
    for(i=0;i<=239;i++)
    {
        setcolor(YELLOW);
        rectangle(x-89,y+71,x-89+i,y+89);
        delay(5);
    }


}
