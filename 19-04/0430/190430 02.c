#include<stdio.h>
int main()
{
	int i;
	int data[10];
	printf("10개의 양의 정수를 입력하세요\n");
	for(i=0;i<10;i++){
		scanf("%d",&data[i]);
	}
	int n;
	while(1)
	{
		printf("삭제할 정수값을 입력하세요\t");
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<10;i++)
		{
			if(data[i]==n) data[i]=0;
			if(data[i]) printf("%d\t",data[i]);
		}
		printf("\n");
	}
	return 0;
}
