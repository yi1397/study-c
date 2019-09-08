#include<stdio.h>
int big(int a, int b)
{
	if(a<b) return b;
	return a;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",big(a,b));
	return 0;
}
