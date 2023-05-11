#include<stdio.h>
//#include<string>
#include<easyx.h>
void button(int x, int y, int w, int h) {

	setbkmode(TRANSPARENT);
	setfillcolor(RGB(140, 75, 149));
	fillroundrect(x, y, w + x, h + y, 10, 10);
	settextstyle(30, 0, "ºÚÌå");
	char text_[50] = "button";
	strcpy(text_, text);
	int tx = x + (w - textwidth(text)) / 2;
	int ty = y + (h - textheight(text)) / 2;
	outtextxy(tx, ty,text);
}
int main() {
	initgraph(680, 480, EX_SHOWCONSOLE);
	button(50,50,150,150,"°´Å¥");
	getchar();
	return 0;

}
