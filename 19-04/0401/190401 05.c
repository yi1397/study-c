#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	switch(c)
	{
		case 'A' ... 'Z':
			printf("대문자다!");
			break;
		case 'a' ... 'z':
			printf("소문자다!");
			break;
	}
	return 0;
}
