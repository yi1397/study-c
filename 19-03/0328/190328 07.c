#include<stdio.h>
int main()
{
	int i,j;
	int sum=0;
	for(i=0, j=0, sum=0; i<5 && j<5; i++, j+=2)
	{
		sum += i;
	}
	printf("%d",sum);
	return 0;
}
