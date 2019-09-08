#include<stdio.h>
int data[10]={-90,23,-30,20,-250,1,100,-52,80,57};
int main()
{
	int i;
	printf("\n반복문 출력\n");
	for(i=0;i<10;i++)
		printf("\t%d",data[i]);
	printf("\n부호반전\n");
	for(i=0;i<10;i++)
		printf("\t%d",-data[i]);
	printf("\n절댓값\n");
	for(i=0;i<10;i++)
	{
		if(data[i]<0) printf("\t%d",-data[i]);
		else printf("\t%d",data[i]);
	}
	int max=-0xfffffff;
	int min=0xfffffff;
	int second,third;
	printf("\n크기 출력\n");
	for(i=0;i<10;i++)
	{
		if(data[i]<min) min=data[i];
		if(max<data[i])
		{
			third=second;
			second=max;
			max=data[i];
		}
		else if(second<data[i])
		{
			third=second;
			second=data[i];
		}
		else if(third<data[i]) third=data[i];
	}
	printf("max = %d\nsecond = %d\nthird = %d\n",max,second,third);
	
	return 0;
}
