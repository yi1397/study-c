#include<stdio.h>
int main()
{
	int i=1, j=1;
	while(i<=10)
	{
		while(j<=i)
		{
			printf("[i] : %d [j] : %d\n",i,j);
			j++;
		}
		j=1;
		i++;
	}
	return 0;
}
