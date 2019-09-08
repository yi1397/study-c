#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	switch(num){
		case 2:
		case 3:
		case 5:
		case 7:
		case 11:
			printf("prime number!!");
			break;
		default:
			printf("소수가 아닐수도 ^^;;;");
	}
}
