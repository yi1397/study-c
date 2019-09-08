#include<stdio.h>
int main(){
	int num;
	do{
		printf("Enter any number");
		printf("enter 0 to quit");
		scanf("%d",&num);
		printf("You entered %d\n",num);
	}while(num !=0);
}
