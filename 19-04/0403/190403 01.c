#include<stdio.h>
int main()
{
	int a=72, n;
	start:
		printf("number?\n");
		scanf("%d",&n);
		if(n==a)
			printf("correct!!\n");
		else
		{
			printf("Incorrect!!\n");
			goto start;
		}
	return 0;
	//프로그램은 기본적으로 순차적 명령어 실행 
	//순차적(위에서 아래)
	//goto문은 프로그램이 실행되는 순서를 
	//임의로 바꾸는 기능을 함 
	//goto문은 '동일한 함수 내에서만 ' 점프가 가능 
}
