#include<stdio.h>
int main()
{
	char str[100], *p=str;
	scanf("%s", str);
	while(*p!='\0') p++;
	while(p!=&str)
	{
		p--;
		printf("%c",*p);
	}
	return 0;
}
