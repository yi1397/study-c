//홀수 짝수를 판별하는 프로그램 (switch-case구조 사용) 
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	switch(num%2)
	{
		case 0:
			printf("even numver!");
			break;
		case 1:
			printf("odd number");
			break;
		default:
			printf("default!");
	}
}
