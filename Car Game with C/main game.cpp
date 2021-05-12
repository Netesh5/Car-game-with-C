#include <graphics.h>
void loading();
void road();
// main code
int main()
{
    loading();
    road();
    getch();
    closegraph();
    return 0;
}


void loading()
{
    int gd=DETECT,gm,x,y,i,n;
    initgraph(&gd,&gm,"");
    x=getmaxx()/2;
    y=getmaxy()/2;
    settextstyle(4,HORIZ_DIR,4);
    outtextxy(155,205,"NPPK Presents");delay(2000);
    for(i=0;i<=300;i=i+10)
{ settextstyle(4,HORIZ_DIR,4);
    outtextxy(155,205-i,"NPPK Presents");
  delay(80);
  cleardevice();
}
  for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(SOLID_FILL,RED);
  circle(x,y-i,30);
  floodfill(x,y-i,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(SOLID_FILL,BLUE);
  circle(x,y-100+i,30);
  floodfill(x,y-100+i,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(SOLID_FILL,GREEN);
  circle(x,y+i,30);
  floodfill(x,y+i,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(SOLID_FILL,YELLOW);
  circle(x,y+100-i,30);
  floodfill(x,y+100-i,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(HATCH_FILL,BROWN);
  circle(x+i,y,30);
  floodfill(x+i,y,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(HATCH_FILL,MAGENTA);
  circle(x+100-i,y,30);
  floodfill(x+100-i,y,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(HATCH_FILL,RED);
  circle(x-i,y,30);
  floodfill(x-i,y,border_color);
  delay(50);
  cleardevice();
}
for(i=0;i<=100;i=i+10)
{ int border_color = WHITE;
  setfillstyle(HATCH_FILL,RED);
  circle(x-100+i,y,30);
  floodfill(x-100+i,y,border_color);
  delay(50);
  cleardevice();
}
int border_color = WHITE;
setfillstyle(HATCH_FILL,RED);
circle(x,y,30);
floodfill(x,y,border_color);
delay(100);
cleardevice();
/*crashing circle*/
for(i=0;i<=250;i=i+10)
{int border_color = WHITE;
  setfillstyle(SOLID_FILL,BLUE);
  circle(x+i,y-i,30);
  floodfill(x+i,y-i,border_color);
  delay(50);
  cleardevice();
}// CAR GAME LOADING
for(i=1;i<=7;i=i+1)
    {
     setcolor(i);
    settextstyle(3,HORIZ_DIR,1+i);
    outtextxy(140,50,"CAR GAME");delay(700);
    }
    line(x-70,y,x+70,y);//car graph
    line(x-70,y,x+70,y);delay(100);
    line(x-69,y-3,x+69,y-3);delay(100);
    arc(x-105,y,0,180,35);delay(100);
    circle(x-105,y,25);delay(100);
    arc(x+105,y,0,180,35);delay(100);
    circle(x+105,y,25);delay(100);
    line(x+140,y,x+190,y);delay(100);
    line(x+140,y-3,x+190,y-3);delay(100);
    line(x-190,y,x-140,y);delay(100);
    line(x-190,y-3,x-140,y-3);delay(100);
    ellipse(x+105,y,0,90,85,50);delay(100);
    ellipse(x-105,y,90,180,85,50);delay(100);
    ellipse(x,y-50,0,180,105,35);delay(100);
    ellipse(x,y-50,349,192,95,30);delay(100);
    line(x-92,y-44,x+92,y-44);delay(100);
    line(x-92,y-41,x+92,y-41);delay(100);
    line(x,y-44,x+i,y-80);delay(100);
    line(x+i,y-40,x+i,y-5);delay(100);
    settextstyle(3,HORIZ_DIR,4);
    setcolor(WHITEONBLACK);
    outtextxy(300,300,"Loading...");//LOADING
    rectangle(299,279,450,299);
    for(int i=0;i<150;i++)
    {
        setcolor(3);
        rectangle(300,280,300+i,298);
        delay(15);
    }
  for(int i=1;i<14;i++)
    {
      settextstyle(3,HORIZ_DIR,4);
      setcolor(i-1);
      outtextxy(120,345," 'Press Enter to continue' ");
      delay(700);
    }
    getch();
     settextstyle(3,HORIZ_DIR,4);
     setcolor(WHITE);
     outtextxy(120,345," 'Press Enter to continue' ");

}

void road()
{
    cleardevice();
int x,y;
x=getmaxx()/2;
y=getmaxy()/2;
line(x-150,0,x-150,y+1000);
line(x+150,0,x+150,y+1000);
line(x,y-50,x,y+20);
line(x,y+80,x,y+150);
line(x,y+190,x,y+260);
line(x,y-90,x,y-160);
line(x,y-200,x,y-270);
getch();

}
