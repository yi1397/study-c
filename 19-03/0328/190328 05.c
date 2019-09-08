#include<stdio.h>
int main()
{
	int i=10;
	while(i<10)
	{
		printf("%d\n",i);
		i=i+1;
	}
	printf("\ni=%d\n\n",i);
	i=10;
	do
	{
		printf("%d\n",i);
		i=i+1;
	}while(i<10);
	printf("\ni=%d\n\n",i);
	return 0;
}
