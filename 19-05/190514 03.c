#include<stdio.h>
int ascii(char a)
{
	return (int)a;
}
int main()
{
	char a;
	scanf("%c",&a);
	printf("%d",ascii(a));
	return 0;
}
