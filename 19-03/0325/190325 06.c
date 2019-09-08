#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("µ¡¼À : %d\n",x+y);
	printf("»¬¼À : %d\n",x-y);
	printf("°ö¼À : %d\n",x*y);
	printf("³ª´°¼À : %lf\n",(float)x/y*y);
	return 0;
}
