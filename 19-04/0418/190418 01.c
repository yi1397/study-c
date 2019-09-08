#include<stdio.h>
int main()
{
	char str1[] = "hello";
	char str2[6] = {'s','m','i','l','e','\0'};
	printf("str1 : %s %d\n", str1, sizeof(str1));
	printf("str2 : %s %d\n", str2, sizeof(str2));
	return 0;
}
