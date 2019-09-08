#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int i,j,sum;
	scanf("%d %d",&i,&j);
	sum = add(i,j);
	printf("%d",sum);
	return 0;
}
