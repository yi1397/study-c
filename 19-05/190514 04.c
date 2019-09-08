#include<stdio.h>
void print_AtoB(int a, int b)
{
	int i;
	for(i=a;i<=b;i++)
	printf("%d\n",i);
	for(i=b;i<=a;i++)
	printf("%d\n",i);
	return;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	print_AtoB(a,b);
	return 0;
}
