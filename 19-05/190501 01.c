#include<stdio.h>
int main()
{
	int *p;			//포인터 변수를 정수형으로 선언 
	int a = 5;		//정수형 변수 a를 선언하여 5로 초기화 
	p = &a;			//포인터 변수 p에 a의 주소를 삽입 
	printf("%d\n",*p);
	printf("%d\n",a);
	printf("%d\n",p);
	printf("%d\n",&a);
	return 0;
}
