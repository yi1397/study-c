#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <windows.h>
void gotoxy(int x, int y)
{
     COORD Cur;
     Cur.X=x;
     Cur.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}
int main()
{
	int x=-1,y=-1;
	system("cls");
	gotoxy(40,12); putch('S');
	double angle;
	x = (int)(cos(angle*3.1416/180)*20);
	y = (int)(sin(angle*3.1416/180)*10);
	for(angle = 0;kbhit() == 0;angle+=10)
	{
		gotoxy(40 - x/2, 12 - y/2); putch(' ');
		gotoxy(40 + x, 12 + y); putch(' ');
		x = (int)(cos(angle*3.1416/180)*20);
		y = (int)(sin(angle*3.1416/180)*10);
		gotoxy(40 + x, 12 + y); putch('E');
		gotoxy(40 - x/2, 12 - y/2); putch('E');
		Sleep(100);
	}
}
