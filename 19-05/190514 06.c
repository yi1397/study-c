#include<stdio.h>
double average(int a, int b, int c)
{
	int sum=a+b+c;
	sum*=100;
	sum/=3;
	return (double)sum/100;
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%lf",average(a,b,c));
	return 0;
}
