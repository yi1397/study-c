#include<stdio.h>
int main()
{
	int a[3][4] = {
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};
	int (*p)[4] = a;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",*(p[i]+j));
		printf("\n");
	}
	return 0;
}
