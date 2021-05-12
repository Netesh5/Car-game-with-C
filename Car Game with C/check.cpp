 #include<graphics.h>
 #include<stdio.h>
 #include<conio.h>

 void gameover(int);

 void check(int carx, int screenx, int cary, int screeny,int z,int k)
{
    if(carx+30 >= screenx+35 && cary+220 >= screeny-250+z && carx-20 <= screenx+95 && cary+140 <= screeny-200+z ) //right //1
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);
    }
    else if(carx+30 >= screenx-30 && cary+220 >= screeny-500+z && carx-20 <= screenx+35 && cary+140 <= screeny-450+z) //center //2
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-100 && cary+220 >= screeny-700+z && carx-20 <= screenx-35 && cary+140 <= screeny-650+z  ) //leftmost //3
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+42 && cary+220 >= screeny-900+z && carx-20 <= screenx+100 && cary+140 <= screeny-850+z )  //both sides //4
    {
       PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-100 && cary+220 >= screeny-900+z && carx-20 <= screenx-42 && cary+140 <= screeny-850+z) //both sides //4
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-30 && cary+220 >= screeny-1100+z && carx-20 <= screenx+30 && cary+140 <= screeny-1050+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);

    }
    else if(carx+30 >= screenx-30 && cary+220 >= screeny-1300+z && carx-20 <= screenx+10 && cary+140 <= screeny-1250+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+15 && cary+220 >= screeny-1300+z && carx-20 <= screenx+105 && cary+140 <= screeny-1250+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-90 && cary+220 >= screeny-1500+z && carx-20 <= screenx-30 && cary+140 <= screeny-1450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-95 && cary+220 >= screeny-1700+z && carx-20 <= screenx+35 && cary+140 <= screeny-1650+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+20 && cary+220 >= screeny-1900+z && carx-20 <= screenx+99 && cary+140 <= screeny-1850+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    if(carx+30 >= screenx-35 && cary+220 >= screeny-2100+z && carx-20 <= screenx+65 && cary+140 <= screeny-2050+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-80 && cary+220 >= screeny-2300+z && carx-20 <= screenx-10 && cary+140 <= screeny-2250+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-30 && cary+220 >= screeny-2500+z && carx-20 <= screenx+5 && cary+140 <= screeny-2450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+10 && cary+220 >= screeny-2500+z && carx-20 <= screenx+40 && cary+140 <= screeny-2450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+45 && cary+220 >= screeny-2500+z && carx-20 <= screenx+90 && cary+140 <= screeny-2450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+10 && cary+220 >= screeny-2700+z && carx-20 <= screenx+70 && cary+140 <= screeny-2650+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-70 && cary+220 >= screeny-2900+z && carx-20 <= screenx-10 && cary+140 <= screeny-2850+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+10 && cary+220 >= screeny-3100+z && carx-20 <= screenx+70 && cary+140 <= screeny-3050+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-70 && cary+220 >= screeny-3300+z && carx-20 <= screenx-10 && cary+140 <= screeny-3250+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);

    }
    else if(carx+30 >= screenx-90 && cary+220 >= screeny-3500+z && carx-20 <= screenx-40 && cary+140 <= screeny-3450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+50 && cary+220 >= screeny-3500+z && carx-20 <= screenx+60 && cary+140 <= screeny-3450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+65 && cary+220 >= screeny-3500+z && carx-20 <= screenx+95 && cary+140 <= screeny-3450+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-70 && cary+220 >= screeny-3690+z && carx-20 <= screenx-45 && cary+140 <= screeny-3650+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+45 && cary+220 >= screeny-3750+z && carx-20 <= screenx+92 && cary+140 <= screeny-3620+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx+10 && cary+220 >= screeny-3900+z && carx-20 <= screenx+70 && cary+140 <= screeny-3850+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);


    }
    else if(carx+30 >= screenx-70 && cary+220 >= screeny-4100+z && carx-20 <= screenx-10 && cary+140 <= screeny-4050+z)
    {
        PlaySound(TEXT("crash.wav"),NULL,SND_ASYNC);
        delay(1000);
        cleardevice();
        gameover(k);
    }
}
