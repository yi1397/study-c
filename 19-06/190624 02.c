#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getNumber()
{
	return rand() % 45 + 1;
}

int main()
{
	short int lotto[6] = {0,};
	int i, k, num;
	char dup='N';
	srand((unsigned)time(NULL));
	
	for(i=0;i<6;)
	{
		num = getNumber();
		for(k=0;k<i;k++)
			if(lotto[k]==num)
				dup = 'Y';
		if(dup=='N')
			lotto[i++]=num;
		else
			dup='N';
	}
	for(i=0;i<6;i++)
		printf("%d ",lotto[i]);
	return 0;
}
