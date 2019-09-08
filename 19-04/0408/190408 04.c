#include<stdio.h>
int main()
{
	int i=0;
	while(i<100)
	{
		i++;
		if(i%5==0)
			continue;
		printf("%d\t",i);
	}
	return 0;
}
