#include<stdio.h>
int main()
{
	int *ban[4];
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d반의 학생수를 입력하세요.",i+1);
		int num;
		scanf("%d",&num);
		ban[i] = (int *)malloc(num*sizeof(int));
	}
	return 0;
}
