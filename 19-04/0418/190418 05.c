#include<stdio.h>
int main()
{
	int max=0;
	int i;
	int arr[5];
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
		if(max<arr[i]) max=arr[i];
	printf("%d",max);
}
