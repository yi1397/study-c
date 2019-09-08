#include<stdio.h>
int Add(int a, int b);
int main()
{
	int re = 0;
	re = Add(2,3);
	printf("re = %d\n",re);
}
int Add(int a,int b)
{
	return a+b;
}
