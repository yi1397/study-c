#include<stdio.h>
int main()
{
	int i, n, t, arr[1000];
	printf("n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		arr[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		arr[t]++;
	}
	for(i=1;i<=n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=1;i<=n;i++)
		printf("%d ",arr[i]);
	
	return 0;
}
