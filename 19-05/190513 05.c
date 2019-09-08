#include<stdio.h>
int main()
{
	char *str = "I am a student, I am very nice and handsome";
	char str1[100], c;
	char *p=str;
	int i=0;
	scanf("%c", &c);
	for(;*p!='\0';p++)
	{
		if(*p != c) printf("%c", *p);
	}
	return 0;
}
