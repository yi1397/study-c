#include<stdio.h>
int main()
{
	int in1, in2, in3, in4, in5, in6, in7, in8, in9, in10;
	int sum;
	double avg;
	scanf("%d %d %d %d %d %d %d %d %d %d",&in1,&in2,&in3,&in4,&in5,&in6,&in7,&in8,&in9,&in10);
	sum=in1+in2+in3+in4+in5+in6+in7+in8+in9+in10;
	avg=(double)sum/10;
	printf("%d\n",sum);
	printf("%f\n",avg);
	return 0;
}
