#include<stdio.h>
int func2(int n)
{
	if(n==0) return 0;
	else return 1+func2(n-1);
}
int main()
{
	printf("%d\n",func2(10));
	return 0;
}
