#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<conio.h>

//function declaratiom
void gameover(int);
void startgame();
void showmenu();

void gameover(int k)
{
    int gd = DETECT, gm;
    closegraph();
    initgraph(&gd, &gm, "");
    int  i,p, j=0, highscore,any_key,d=0,t=0;
    char highscores[9], score[9], name[20], user_name[20];
    cleardevice();
    PlaySound(TEXT("gameover.wav"),NULL,SND_ASYNC);
    setcolor(LIGHTBLUE);
    settextstyle(3, HORIZ_DIR, 7);
    outtextxy(140, 80, "GAME OVER");
    settextstyle(4, HORIZ_DIR, 2);
    sprintf(score,"%d",k);
    outtextxy(300, 300, "Your score:");
    outtextxy(465,300,score);
    outtextxy(300, 330, "Highscore: ");

    t++;

    //file read
    FILE *fp;
    fp=fopen("highscore.txt","r");
    fscanf(fp,"%s%d\n",name,&highscore);
    fclose(fp);
    if(k>highscore)
    {
        settextstyle(3, HORIZ_DIR, 4);
        PlaySound(TEXT("saili.wav"),NULL,SND_ASYNC);
        outtextxy(10,150, "Congratulation !!! New Highscore ");
        sprintf(highscores,"%d",k);
        settextstyle(4, HORIZ_DIR,2);
        outtextxy(500,330,highscores);
        settextstyle(3, HORIZ_DIR, 2);
        outtextxy(10,200,"Enter your name : ");
        gets(name);
        //printing details in highscore.txt file
        fp=fopen("highscore.txt","w");
        fprintf(fp,"%s\t%d\n",name,k);
        fclose(fp);
    }
    else
    {
        sprintf(highscores,"%d",highscore);
        outtextxy(470,330,highscores);//current highscore
    }
    delay(1000);
    setcolor(GREEN);
    settextstyle(4, HORIZ_DIR, 3);
    outtextxy(100, 400, " Press Enter key  to continue");
    p=getch();
    if(p==13)
    {
        showmenu();
        closegraph();
    }
    else
    {
      gameover(k);//gameover screen
    }

    getch();

    cleardevice();


}
