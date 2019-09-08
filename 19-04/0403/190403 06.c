#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d %d",i,i);
		for(int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
