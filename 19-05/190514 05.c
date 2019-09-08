#include<stdio.h>
void print_DSM(int a)
{
	int i;
	for(i=0;i<a;i++)
	printf("DSM\n");
	return;
}
int main()
{
	int a;
	scanf("%d",&a);
	print_DSM(a);
	return 0;
}
