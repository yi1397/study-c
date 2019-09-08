#include<stdio.h>
int main()
{
	int *numPt;
	int num = 10;
	numPt = &num;
	*numPt = 20;
	printf("%d\n", *numPt);
	printf("%d\n", num);
	return 0;
}
