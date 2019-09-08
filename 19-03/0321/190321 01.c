// switch-case 구조로 계산기 만들기
#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	
	printf("수식을 입력하세요 :\n");
	scanf("%d %c %d",&a,&ch,&b);
	/*
	printf("숫자 1개를 입력하세요 :");
	scanf("%d",&a);
	
	printf("어떤 연산을 할 지 입력 하세요 : (+/-)");
	scanf(" %c",&ch);
	
	printf("다른 숫자 한 개를  입력 하세요 :");
	scanf("%d",&b);
	*/
	switch(ch){
		case '+' :
			printf("%d\n",a+b);
			break;
		case '-' :
			printf("%d\n",a-b);
			break;
		case '*' :
			printf("%d\n",a*b);
			break;
		case '/' :
			printf("%d\n",a/b);
			break;
		default :
			printf("다시 시작하세요\n");
	} 
}
