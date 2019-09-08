#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(i%2==1)
			printf("%d %d\n",i,i*i);
	return 0;
}
