#include<stdio.h>
int main()
{
	int x,y,z,n;
	x=3;
	y=5;
	z=192;
	scanf("%d",&n);
	if(n>10)
	{
		printf("%d",x<<n);
	}
	else if(n>5)
	{
		printf("%d",y+y<<n);
	}
	else
	{
		printf("%d",z/(2<<(n-1)));
	}
}
