#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
		printf("positive number\n");
	else if(a==0)
		printf("zero\n");
	else
		printf("negative number\n");
	switch (a++>0)
	{
		case 1:
			printf("big\n");
			break;
		case 0:
			printf("small\n");
			break;
		default:
			printf("zero");
	}
	return 0;
}
