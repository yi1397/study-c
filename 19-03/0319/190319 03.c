#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(0<a) printf("양수");
	else if(a==0) printf("0");
	else printf("음수"); 
	return 0;
}
