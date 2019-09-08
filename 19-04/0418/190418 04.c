#include<stdio.h>
int main()
{
	double avg;
	int sum=0;
	int i;
	int in[10];
	for(i=0;i<10;i++)
		scanf("%d",in[i]);
	for(i=0;i<10;i++)
		sum+=in[i];
	avg=(double)sum/10;
	printf("%f",avg);
	return 0;
}
