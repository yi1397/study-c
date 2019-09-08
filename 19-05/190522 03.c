#include<stdio.h>
int func2(int n)
{
	if(n<1) return 1;
	else return func2(n-2)+func2(n-1);
}
int main()
{
	printf("%d\n",func2(10));
	return 0;
}
