#include<stdio.h>
void func1(int n)
{
	if(n==0) return;
	else
	{
		printf("%d\n",n);
		func1(n-1);
	}
}
int main()
{
	func1(10);
	return 0;
}
