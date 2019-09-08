#include<stdio.h>
int main()
{
	struct point{
		int x;
		int y;
	};
	struct point arr1[10];
	arr1[0].x=40;
	arr1[0].y=30;
	arr1[1].x=20;
	struct point var1;
	struct point* p = &var1;
	(*p).x = 10;
	p->x = 10;
	printf("%d",p->x);
}
