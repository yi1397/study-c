#include<stdio.h>
#include<math.h>
double b(double a, int b)
{
	int i;
	int n;
	int s=1;
	for(i = 1;i < b;i++)
		s*=10;
	a*=s;
	if(a-(int)a < 0.5) n = (int)floor(a);
	else n = (int)ceil(a);
	return (double)n/s;
}
int main()
{
	double x = 123.456789;
	int i;
	for(i = 1;i <= 7;i++)
		printf("%f의 %d자리 반올림 = %f\n",x,i,b(x,i));
}
