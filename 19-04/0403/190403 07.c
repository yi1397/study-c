#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	double result=0;
	for(i=1;i<=100;i++){
		sum+=i;
		result+=(double)1/sum;
	}
	printf("%.3f\n",result);
	
	i=1;
	sum=0;
	result=0;
	while(i<=100)
	{
		sum+=i;
		result+=(double)1/sum;
		i++;
	}
	
	printf("%.3f\n",result);
	i=1;
	sum=0;
	result=0;
	do
	{
		sum+=i;
		result+=(double)1/sum;
		i++;
	}while(i<=100);
	printf("%.3f\n",result);
	return 0;
}
