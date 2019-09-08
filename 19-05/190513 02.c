#include<stdio.h>
int main()
{
	int i;
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr;
	for(i=0;i<5;i++,p++)
		printf("%d\n", *p);
	return 0;
}
