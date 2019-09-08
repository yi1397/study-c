#include<stdio.h>
#include<time.h>
int main()
{
	time_t now;
	time(&now);
	printf("현재 시간은 %s입니다\n",ctime(&now));
}
