#include<stdio.h>

main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		for(k=j;k<n;k++)
		printf("*");
		
		printf("\n");
		
	}
	
	
	
	return 0 ;
}
