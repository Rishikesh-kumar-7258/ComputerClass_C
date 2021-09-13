//#include <iostream>
#include <graphics.h>
//using namespace std;

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(50, 50, 50);
	getch();
	closegraph();
	return 0;
}