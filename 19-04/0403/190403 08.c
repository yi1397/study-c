#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%d",i);
		printf("\n");
	}printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}printf("\n");
	
	
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%c",'A'+i-1);
		printf("\n");
	}printf("\n");
	
	for(i=n;1<=i;i--)
	{
		for(int j=1;j<=i;j++)
			printf("%c",'A'+j-1);
		printf("\n");
	}printf("\n");
	return 0;
}
