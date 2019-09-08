#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a%2){
		case 0:
			printf("짝수입니다");
			break;
		case 1:
			printf("홀수입니다.");
			break;
			
	}
	return 0;;
}
