#include<stdio.h>
int main()
{
	int i=0;
	int sum=0;
	for(i = 1; i<=10; i=i+1)
	{
		sum = sum +i;
	}
	printf("sum from 0 to 10 : %d",sum);
	return 0;
}
