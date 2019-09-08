#include<stdio.h>

int main()
{
	srand(time(NULL));
	int num=rand() % 100 + 1;
	int n=0;
	int cnt=0;
	printf("1부터 100까지의 수중에서 무엇일까? 맞춰바!!\n");
	while(n!=num)
	{
		cnt++;
		scanf("%d",&n);
		if(n<num) printf("그것보다는 크지!!\n");
		else if(n>num) printf("그것보다는 작아!!\n"); 
	}
	printf("%d번 만에 맞췄군요!! 짝짝짝\n",cnt);
}
