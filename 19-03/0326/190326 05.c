#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	switch(a)
	{
		case 0 ... 9:
			printf("0~9입니다\n");
			break;
		case 10 ... 19:
			printf("10~19입니다\n");
			break;
		case 20 ... 29:
			printf("20~29입니다\n");
			break;
		default :
			printf("30 미만의 수만 입력하세요\n");
			return 0;
	}
	scanf("%d",&b);
	if(a==b)
	{
		printf("맞췄습니다\n");
		return 0;
	}
	printf("틀렸습니다 한 번 더 기회를 줄 까요? (Y/N)\n");
	scanf(" %c",&c);
	if(c=='Y')
	{
		if(a%2==0)
		{
			printf("짝수입니다\n");
		}
		else printf("홀수입니다\n");
		scanf(" %d",&b);
		if(a==b)
		{
			printf("맞췄습니다\n");
		}
		else printf("틀렷습니다\n");
	}
	return 0;
}
