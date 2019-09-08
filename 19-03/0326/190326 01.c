#include<stdio.h>
int main()
{
	int value;
	printf("100 미만의 자연수를 입력하세요:\n");
	scanf("%d",&value);
	switch(value)
	{
		case 0 ... 50:
			printf("50 이하입니다 !");
			break;
		case 51 ... 99:
			printf("50보다 큽니다 !");
		default:
			printf("잘못 입력하셨습니다 !");
	}
	return 0;
}
