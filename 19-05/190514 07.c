#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int multi(int a, int b)
{
	return a*b;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
printf("%d",multi(a,b)-add(a,b));
	return 0;
}
