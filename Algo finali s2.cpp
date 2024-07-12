//2.soru 
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<windows.h>
int main()
{
	//bu daire sorusu :d
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(200,200,100);
	circle(200,200,80);
	int x=200,y=200;
	for(int i=0;i<=360;i+=45)
	{
		circle(x+90*cos(3.14/180*i),y-90*sin(3.14/180*i),10);
	}
	getch();
	return 0;
}

