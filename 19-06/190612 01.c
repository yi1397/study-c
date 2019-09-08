#include<stdio.h>
typedef struct point
{
	char name[20];
	int kor;
	int eng;
}P;
int main()
{
	P dsm;
	printf("이름:");
	scanf("%s",dsm.name);
	printf("국어:");
	scanf("%d",&dsm.kor);
	printf("영어:");
	scanf("%d",&dsm.eng);
	printf("이름:%s\n",dsm.name);
	printf("국어:%d\n",dsm.kor);
	printf("영어:%d\n",dsm.eng);
	printf("합계:%d\n",dsm.kor+dsm.eng);
	printf("평균:%.2lf\n",(double)(dsm.kor+dsm.eng)/2);	
	return 0;
}
