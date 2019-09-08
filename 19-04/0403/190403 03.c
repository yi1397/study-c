#include<stdio.h>
int main()
{
	int i;
	for(i=2;i<=10;i+=2)
		printf("%d\n",i);
	//2에서 시작해서 2씩 올린다는 논리가 
	//암묵적으로 존재하므로 엄밀히는 
	//짝수를 출력하는 프로그램이 아님 
	for(i=1;i<=10;i++)
		if(i%2==0)
			printf("%d\n",i);
	return 0;
}
