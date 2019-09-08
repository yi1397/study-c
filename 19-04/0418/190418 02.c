#include<stdio.h>
int main()
{
	char str3[100];
	scanf("%s",str3);
	printf("%s\n",str3);
	
	int a;
	scanf("%d",&a);
	printf("%d ",a);
	printf("%d ",&a);
	printf("%d\n",*&a);
	
	
	int str4[5];
	scanf("%d",str4);
	scanf("%d",&str4[0]);
	printf("%d ",*str4);
	printf("%d\n",str4[0]);
	return 0;
}
