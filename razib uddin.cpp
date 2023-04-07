#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

using namespace std;

void flag()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"razib");
    setcolor(YELLOW);
    //circle();
    //R
    line(50,50,50,70);
    arc(52,56,270,90,7);
    line(50,62,58,70);
    //A
    line(63,70,68,50);
    line(68,50,73,70);
    line(65,62,70,62);
    //Z
    line(78,50,92,50);
    line(92,50,78,70);
    line(78,70,92,70);
    //I
    line(97,50,107,50);
    line(102,50,102,70);
    line(97,70,107,70);
    //B

    line(112,50,112,72);
    arc(115,56,268,96,6);
    arc(116,65,265,93,6);
    //U
    ellipse(150,50,180,0,7,22);
    //D
    line(162,50,162,71);

    arc(164,60,270,90,11);
    line(179,50,179,71);

    arc(181,60,270,90,11);
    //I
    line(197,50,207,50);
    line(202,50,202,70);
    line(197,70,207,70);
    //N
    line(212,50,212,70);
    line(212,50,222,70);
    line(222,70,222,50);
//id

    //c
    arc(52,101,75,279,12);
    //s

    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0
    line(223,92,223,112);//1



    setcolor(YELLOW);
    rectangle(400,200,410,700);
    rectangle(380,700,430,720);
    rectangle(410,220,710,420);

    setfillstyle(1,WHITE);
    floodfill(402,201,YELLOW);
    floodfill(382,701,YELLOW);
    setcolor(YELLOW);
    rectangle(410,220,710,420);
    setfillstyle(1,GREEN);
    floodfill(412,222,YELLOW);
    setcolor(YELLOW);
    circle(560,320,70);
    setfillstyle(1,RED);
    floodfill(562,322,YELLOW);
    getch();
    closegraph();
}
void star()
{


    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"razib");

    setcolor(YELLOW);
    //circle();
    //R
    line(50,50,50,70);
    arc(52,56,270,90,7);
    line(50,62,58,70);
    //A
    line(63,70,68,50);
    line(68,50,73,70);
    line(65,62,70,62);
    //Z
    line(78,50,92,50);
    line(92,50,78,70);
    line(78,70,92,70);
    //I
    line(97,50,107,50);
    line(102,50,102,70);
    line(97,70,107,70);
    //B
    line(112,50,112,72);
    arc(115,56,268,96,6);
    arc(116,65,265,93,6);
    //U
    ellipse(150,50,180,0,7,22);
    //D
    line(162,50,162,71);

    arc(164,60,270,90,11);
    line(179,50,179,71);

    arc(181,60,270,90,11);
    //I
    line(197,50,207,50);
    line(202,50,202,70);
    line(197,70,207,70);
    //N
    line(212,50,212,70);
    line(212,50,222,70);
    line(222,70,222,50);
//id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0
    line(223,92,223,112);//1
    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1, YELLOW);
    floodfill(520,380,BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);

    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1,YELLOW);
    floodfill(520, 380, BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);
    getch();
    closegraph();
}
void labtop()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(600,400,"razib"  );



    setcolor(YELLOW);

    //R
    line(50,50,50,70);
    arc(52,56,270,90,7);
    line(50,62,58,70);
    //A
    line(63,70,68,50);
    line(68,50,73,70);
    line(65,62,70,62);
    //Z
    line(78,50,92,50);
    line(92,50,78,70);
    line(78,70,92,70);
    //I
    line(97,50,107,50);
    line(102,50,102,70);
    line(97,70,107,70);
    //B
    line(112,50,112,72);
    arc(115,56,268,96,6);
    arc(116,65,265,93,6);
    //U
    ellipse(150,50,180,0,7,22);
    //D
    line(162,50,162,71);

    arc(164,60,270,90,11);
    line(179,50,179,71);

    arc(181,60,270,90,11);
    //I
    line(197,50,207,50);
    line(202,50,202,70);
    line(197,70,207,70);
    //N
    line(212,50,212,70);
    line(212,50,222,70);
    line(222,70,222,50);
//id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0
    line(223,92,223,112);//1


    setcolor(YELLOW);
    rectangle(200,200,400,380);
    rectangle(180,380,420,395);

    setfillstyle(1,CYAN);
    floodfill(201,202,YELLOW);
    floodfill(181,382,YELLOW);

    setcolor(YELLOW);
    rectangle(210,220,390,360);
    setfillstyle(1,WHITE);
    floodfill(211,222,YELLOW);
    setcolor(YELLOW);
    rectangle(275,380,315,388);
    setfillstyle(1,BLUE);
    floodfill(276,382,YELLOW);
    setcolor(BLACK);

    line(280,270,280,310);
    line(280,270,310,310);
    line(310,270,310,310);
    setfillstyle(1,BLUE);

    getch();
    closegraph();

}
void car()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:tcbgi");
    initwindow(1000,800,"razib");



    int i;
    for(i=0;i<500;i++)
    {
    setcolor(YELLOW);

    //R
    line(50,50,50,70);
    arc(52,56,270,90,7);
    line(50,62,58,70);
    //A
    line(63,70,68,50);
    line(68,50,73,70);
    line(65,62,70,62);
    //Z
    line(78,50,92,50);
    line(92,50,78,70);
    line(78,70,92,70);
    //I
    line(97,50,107,50);
    line(102,50,102,70);
    line(97,70,107,70);
    //B
    line(112,50,112,72);
    arc(115,56,268,96,6);
    arc(116,65,265,93,6);
    //U
    ellipse(150,50,180,0,7,22);
    //D
    line(162,50,162,71);

    arc(164,60,270,90,11);
    line(179,50,179,71);

    arc(181,60,270,90,11);
    //I
    line(197,50,207,50);
    line(202,50,202,70);
    line(197,70,207,70);
    //N
    line(212,50,212,70);
    line(212,50,222,70);
    line(222,70,222,50);
//id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0
    line(223,92,223,112);//1


    setcolor(WHITE);
    line(200+i,300,200+i,400);
    line(200+i,400,250+i,400);
    line(250+i,400,260+i,380);
    line(260+i,380,340+i,380);
    line(340+i,380,350+i,400);
    line(350+i,400,450+i,400);
    line(450+i,400,460+i,380);
    line(460+i,380,540+i,380);
    line(540+i,380,550+i,400);
    line(550+i,400,650+i,400);
    line(650+i,400,630+i,300);
    line(630+i,300,550+i,300);
    line(550+i,300,540+i,220);
    line(540+i,220,260+i,220);
    line(260+i,220,250+i,300);
    line(250+i,300,200+i,300);
    setfillstyle(1,YELLOW);
    floodfill(262+i,304,WHITE);
    setcolor(RED);
    circle(300+i,420,37);
    circle(500+i,420,37);
    setfillstyle(1,CYAN);
    floodfill(304+i,422,RED);
    floodfill(504+i,422,RED);
    setcolor(WHITE);
    line(400+i,220,400+i,300);
    setfillstyle(1,WHITE);
    setcolor(RED);
    rectangle(270+i,230,370+i,295);
    rectangle(430+i,230,530+i,295);
    setfillstyle(1,MAGENTA);
    floodfill(272+i,234,RED);
    floodfill(432+i,234,RED);

    setcolor(WHITE);
    line(0,460,1000,460);
    rectangle(890,160,900,460);
    rectangle(875,90,915,160);
    setfillstyle(1,WHITE);

    floodfill(891,161,WHITE);
    floodfill(876,91,WHITE);
    setcolor(RED);
    circle(895,105,10);
    setfillstyle(1,RED);
    floodfill(896,106,RED);
    setcolor(RED);
    circle(895,127,10);
    setfillstyle(1,YELLOW);
    floodfill(896,129,RED);
    setcolor(RED);
    circle(895,150,10);
    setfillstyle(1,GREEN);
    floodfill(896,152,RED);
    delay(10);
    cleardevice();

    }

    getch();
    closegraph();
}
void train()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:tcbgi");
    initwindow(1200,800,"razib");
    int i;
    for(i=0; i<500; i+=3)
    {
        setcolor(YELLOW);
        //circle();
        //R
        line(50,50,50,70);
        arc(52,56,270,90,7);
        line(50,62,58,70);
        //A
        line(63,70,68,50);
        line(68,50,73,70);
        line(65,62,70,62);
        //Z
        line(78,50,92,50);
        line(92,50,78,70);
        line(78,70,92,70);
        //I
        line(97,50,107,50);
        line(102,50,102,70);
        line(97,70,107,70);
        //B
        line(112,50,112,72);
        arc(115,56,268,96,6);
        arc(116,65,265,93,6);
        //U
        ellipse(150,50,180,0,7,22);
        //D
        line(162,50,162,71);

        arc(164,60,270,90,11);
        line(179,50,179,71);

        arc(181,60,270,90,11);
        //I
        line(197,50,207,50);
        line(202,50,202,70);
        line(197,70,207,70);
        //N
        line(212,50,212,70);
        line(212,50,222,70);
        line(222,70,222,50);
//id

        arc(52,101,75,279,12);//c
        //s
        arc(65,96,40,260,7);
        arc(63,107,220,95,6);
        //E
        line(77,90,77,110);
        line(77,90,87,90);
        line(77,110,87,110);
        line(77,100,84,100);
        //2
        arc(94,97,270,90,7);
        line(94,104,98,112);
        //0
        ellipse(112,102,0,360,7,11);
        ellipse(129,102,0,360,7,11);
        //1
        line(142,92,142,112);
        ellipse(154,102,0,360,7,11);//0
        line(165,92,165,112);//1
        circle(175,96,5);
        arc(172,102,270,90,11);//9
        ellipse(193,102,0,360,7,11);//0
        ellipse(210,102,0,360,7,11);//0
        line(223,92,223,112);//1
        setcolor(WHITE);
        line(0,683,1198,683);
        circle(1100,200,60);
        setfillstyle(1,WHITE);
        floodfill(1103,203,WHITE);


        setcolor(RED);
        rectangle(100+i,480,320+i,500);
        rectangle(400+i,480,620+i,500);
        rectangle(700+i,480,840+i,500);
        setfillstyle(1,WHITE);
        floodfill(102+i,482,RED);
        floodfill(402+i,482,RED);
        floodfill(802+i,482,RED);


        setcolor(RED);
        rectangle(120+i,500,300+i,650);
        rectangle(420+i,500,600+i,650);

        setfillstyle(1,RED);
        floodfill(122+i,502,RED);
        floodfill(422+i,502,RED);

        setcolor(RED);

        rectangle(720+i,500,820+i,650);
        setfillstyle(1,GREEN);
        floodfill(722+i,502,RED);
        setcolor(RED);

        rectangle(820+i,550,980+i,650);
        setfillstyle(1,BLUE);
        floodfill(850+i,630,RED);
        setcolor(RED);

        rectangle(900+i,440,940+i,455);
        rectangle(910+i,455,930+i,550);
        setfillstyle(1,WHITE);
        floodfill(902+i,443,RED);
        floodfill(920+i,463,RED);
        setcolor(RED);


        rectangle(300+i,610,420+i,630);
        rectangle(600+i,610,720+i,630);
        setfillstyle(1,YELLOW);
        floodfill(302+i,612,RED);
        floodfill(602+i,611,RED);

        setcolor(BLACK);
        rectangle(140+i,530,180+i,570);
        rectangle(240+i,530,280+i,570);
        rectangle(440+i,530,480+i,570);
        rectangle(540+i,530,580+i,570);
        rectangle(740+i,530,780+i,570);
        setfillstyle(1,BLACK);
        floodfill(141+i,532,BLACK);
        floodfill(241+i,532,BLACK);
        floodfill(441+i,532,BLACK);
        floodfill(541+i,532,BLACK);
        floodfill(741+i,532,BLACK);
        setcolor(WHITE);
        circle(160+i,660,25);
        circle(270+i,660,25);
        circle(450+i,660,25);
        circle(570+i,660,25);
        circle(760+i,660,27);
        circle(850+i,660,25);
        circle(950+i,660,25);
        circle(915+i,435,5);
        circle(927+i,423,7);
        circle(910+i,417,10);
        circle(930+i,410,6);
        setfillstyle(1,CYAN);
        floodfill(152+i,662,WHITE);
        floodfill(272+i,662,WHITE);
        floodfill(452+i,662,WHITE);
        floodfill(572+i,662,WHITE);
        floodfill(762+i,662,WHITE);
        floodfill(852+i,662,WHITE);
        floodfill(962+i,662,WHITE);




        delay(10);

        cleardevice();
    }
    getch();
    closegraph();
}
void cycle()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:tcbgi");
    initwindow(1000,700,"razib");
    int i;
    for(i=0; i<500; i+=3)
    {

    setcolor(YELLOW);
    //circle();
    //R
    line(50,50,50,70);
    arc(52,56,270,90,7);
    line(50,62,58,70);
    //A
    line(63,70,68,50);
    line(68,50,73,70);
    line(65,62,70,62);
    //Z
    line(78,50,92,50);
    line(92,50,78,70);
    line(78,70,92,70);
    //I
    line(97,50,107,50);
    line(102,50,102,70);
    line(97,70,107,70);
    //B
    line(112,50,112,72);
    arc(115,56,268,96,6);
    arc(116,65,265,93,6);
    //U
    ellipse(150,50,180,0,7,22);
    //D
    line(162,50,162,71);

    arc(164,60,270,90,11);
    line(179,50,179,71);

    arc(181,60,270,90,11);
    //I
    line(197,50,207,50);
    line(202,50,202,70);
    line(197,70,207,70);
    //N
    line(212,50,212,70);
    line(212,50,222,70);
    line(222,70,222,50);
    //id

    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0
    line(223,92,223,112);//1


    setcolor(WHITE);

    line(300+i,400,480+i,400);
    line(480+i,400,540+i,300);
    line(540+i,300,360+i,300);
    line(360+i,300,300+i,400);
    line(520+i,270,600+i,400);
    line(520+i,270,490+i,270);
    line(360+i,300,360+i,280);
    rectangle(340+i,275,380+i,280);
    line(292+i,405,481+i,405);
    line(481+i,405,547+i,295);
    line(547+i,295,360+i,295);
    line(360+i,295,292+i,405);
    line(520+i,265,605+i,400);
    line(600+i,400,605+i,400);
    line(520+i,265,490+i,265);
    line(490+i,265,490+i,270);

    line(0,480,1000,480);



    setfillstyle(1,WHITE);
    floodfill(400+i,403,WHITE);
    floodfill(366+i,296,WHITE);
    floodfill(491+i,266,WHITE);
    floodfill(344+i,277,WHITE);
    floodfill(601+i,399,WHITE);

    setcolor(WHITE);
    circle(300+i,400,80);
    circle(600+i,400,80);
    setfillstyle(1,CYAN);
    floodfill(290+i,411,WHITE);
    floodfill(320+i,390,WHITE);
    floodfill(601+i,403,WHITE);

    delay(100);
    cleardevice();

    }
     getch();


    closegraph();


}

int main()
{
    cout << "...................." <<endl;
    cout << "...................." <<endl;
    cout << "1.FLAG "<<endl;
    cout << "2.TRAIN"<<endl;
    cout << "3.LABTOP "<<endl;
    cout << "4.CAR "<<endl;
    cout << "5.STAR"<<endl;
    cout << "6.CYCLE." <<endl;

    cout << "...................." <<endl;
    cout << "...................." <<endl;

    int select;

    cout << "Enter your choice number:";
    cin>>select;
while(1)
{


    switch(select)

    {

    case 1:

        flag();
        break;
    case 2:
        train();
        break;
    case 3:
        labtop();
        break;
    case 4:
        car();
        break;

    case 5:
        star();

        break;
    case 6:
        cycle();

        break;
    default:
        cout << ".................................." <<endl;
        cout << "...............Invalid............" <<endl;
        cout << ".........please try again........." <<endl;
        cout << ".................................." <<endl;

    }

    }


}

