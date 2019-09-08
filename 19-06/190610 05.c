#include<stdio.h>
#include<time.h>
int main()
{
	int i;
	clock_t t1, t2;
	int a=1;
	t1 = clock();
	for(i = 1; i <= 1000; i++)
	{
		printf("%d번째 줄\n",i);
	}
	t2 = clock();
	double worktime = (t2 - t1) / (double)CLOCKS_PER_SEC;
	printf("%f초 걸림",worktime);
}
