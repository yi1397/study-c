#include<stdio.h>
int main()
{
	double a,b;
	char c;
	while(scanf("%lf %c %lf",&a,&c,&b) != EOF)
	{
		switch(c)
		{
			case '+':
				printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);
				break;
			case '-':
				printf("%.2lf + %.2lf = %.2lf\n",a,b,a-b);
				break;
			case '*':
				printf("%.2lf + %.2lf = %.2lf\n",a,b,a*b);
				break;
			case '/':
				printf("%.2lf + %.2lf = %.2lf\n",a,b,a/b);
				break;
			default:
				printf("연산자 에러\n");
		}
	}
	return 0;
}
