#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if( (y%4==0) && (y%100!=0) || (y%400==0) )
		printf("%s\n","윤년입니다");
	else
		printf("%s\n","평년입니다");
	return 0;
}
