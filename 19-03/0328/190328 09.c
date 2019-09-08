#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=1;i<=100;i+=2)
	{
		sum+=i;
	}
	printf("for : %d\n",sum);
	
	i=1;
	sum=0;
	while(i<=100)
	{
		sum+=i;
		i+=2;
	}
	printf("while : %d\n",sum);
	
	i=1;
	sum=0;
	do
	{
		sum+=i;
		i+=2;
	}while(i<=100);
	printf("do-while : %d\n",sum);
	return 0;
}
