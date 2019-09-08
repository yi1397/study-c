#include<stdio.h>
int test()
{
	int i=10;
	this:
	printf("%d",i);
	return 0;
}
int main()
{
	goto this;
	return 0;
}
//goto로 점프할 레이블이 
//goto 명령문을 내포한 함수와 
//다른 함수에 위치해 있기 때문에 
//점프할 수 없다.
 
