#include<stdio.h>
#include<time.h>
int main()
{
	char Date[10];
	char Time[10];
	_strdate(Date);
	_strtime(Time);
	printf("날짜:%s, 시간:%s\n",Date,Time);
}
