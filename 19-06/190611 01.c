#include<stdio.h>
#define swap(x,y) {int t; t=x; x=y; y=t;}
int main()
{
	int a=10, b=20;
	swap(a,b);
	printf("%d %d",a,b);
}
