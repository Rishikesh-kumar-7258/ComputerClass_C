//#include <iostream>
#include <graphics.h>
//using namespace std;

int main() {
   int gd = DETECT, gm;
   initgraph(-gd, -gm, (char*)"C:\\TC\\BGI");
   rectangle(100,100,200,200);
   getch();
   closegraph();
   return 0;
}