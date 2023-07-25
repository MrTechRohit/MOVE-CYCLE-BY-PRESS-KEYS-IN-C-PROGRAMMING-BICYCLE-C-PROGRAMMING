//>>>>>>>>>>> WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL <<<<<<<<<<<<<<//
//.............. C++ PROGRAM TO CREATE BICYCLE, MOVE BY KEY ...............//

#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{

int gd=DETECT , gm;
initgraph(&gd,&gm,(char*)"c://tc//bgi");

while(1)
{

int i=0;
while(i<450)
{
setcolor(12);
settextstyle(1,0,1);
outtextxy(50,20,"PRESS e TO EXIT ");
setcolor(10);
outtextxy(50,40,"PRESS r TO MOVE RIGHT ");
setcolor(14);
outtextxy(50,65,"PRESS l TO MOVE LEFT ");
if(kbhit())
{
int key = getch();
if(key=='r')
{
i+=6;
}

if(key=='l')
{
i-=6;
}
if(key=='e')
{
exit (0);
}
}
// cycle
setcolor(14);
circle(40+i,370,30);
circle(40+i,370,28);
setcolor(15);
circle(40+i,370,20);
circle(40+i,370,18);
setcolor(11);
circle(40+i,370,12);
circle(40+i,370,10);

setcolor(14);
circle(150+i,370,30);
circle(150+i,370,28);
setcolor(15);
circle(150+i,370,20);
circle(150+i,370,18);
setcolor(11);
circle(150+i,370,12);
circle(150+i,370,10);

setcolor(10);
line(40+i,370,100+i,370);
line(40+i,371,100+i,371);

line(40+i,370,60+i,340);
line(40+i,371,60+i,341);

line(100+i,370,120+i,340);
line(100+i,371,120+i,341);

line(120+i,340,60+i,340);
line(120+i,341,60+i,341);

setcolor(14);
line(60+i,340,60+i,335);
line(60+i,341,60+i,336);

line(55+i,335,65+i,335);
line(55+i,336,65+i,336);

setcolor(11);
line(155+i,370,100+i,325);
line(155+i,371,100+i,326);

line(100+i,325,90+i,325);
line(100+i,326,90+i,326);

line(98+i,360,105+i,380);
line(98+i,361,105+i,381);

line(98+i,360,92+i,360);
line(98+i,361,92+i,361);

line(105+i,380,110+i,380);
line(105+i,381,110+i,381);

delay(20);
cleardevice();

//For Roads and Road lines
setcolor(WHITE);
line(0,300,getmaxx(),300);
line(0,305,getmaxx(),305);
line(0,450,getmaxx(),450);
line(0,445,getmaxx(),445);

rectangle(0,390,80,396);
rectangle(160,390,240,396);
rectangle(320,390,400,396);
rectangle(480,390,560,396);

//.......mountain..............//
  setcolor(7);
  line(0,199,200,100);
  arc(220,157,49,118,60);
  line(259,112,460,300);
  line(353,200,600,60);
  arc(625,115,49,118,60);
  //.......Sun...........//
  setcolor(14);
  arc(356,200,33,139,40);
  line(327,169,300,140);
  line(335,165,322,148);
  line(345,162,327,129);
  line(355,160,348,137);
  line(365,161,367,124);
  line(375,164,382,137);
  line(381,168,410,134);
  line(387,172,413,157);
  setcolor(10);
  settextstyle(7,0,2);
  outtextxy(400,450,":-ROHIT TECH STUDY");
}
}
closegraph();
getch();
}

/*--------------- I HOPE YOU LIKE THIS PROGRAMMING ----------------------*/

//___________ LIKE ___________ SHARE ________ SUBSCRIBE __________________//


