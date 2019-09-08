#include<stdio.h>
int main()
{
	int num[3];
	scanf("%d %d %d",&num[0],&num[1],&num[2]);
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(num[i]>num[j])
			{
				num[i]=num[i]+num[j];
				num[j]=num[i]-num[j];
				num[i]=num[i]-num[j];
			}
			printf("\n%d %d %d",num[0],num[1],num[2]);
		}
	}
	printf("\n%d %d %d",num[0],num[1],num[2]);
	return 0;
}
