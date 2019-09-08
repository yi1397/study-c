#include<stdio.h>
int CalculateSum(int begin, int end)
{
	int sum=0;
	for(begin;begin<=end;sum+=begin++);
	return sum;
}
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	printf("%d",CalculateSum(i,j));
	return 0;
}
