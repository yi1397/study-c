#include<stdio.h>
int main()
{
	char *nation[]={"영국", "오스트레일리아", "칠레", "헝가리", "베트남"};
	int i;
	for(i=0;i<5;i++)
		printf("%s\n",nation[i]);
	return 0;
}
