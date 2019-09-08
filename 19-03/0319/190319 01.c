#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>10){
		if(a%2==0){
			printf("10보다 크면서 짝수입니다");
			return 0; 
		}
		printf("10보다 큰 홀수입니다");
	}
	else{
		printf("10 이하인 정수입니다");
	} 
	return 0;
}
