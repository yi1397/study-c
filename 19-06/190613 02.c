#include<stdio.h>
FILE *in;
int main()
{
	in = fopen("190613 02.txt", "r");
	char s[20];
	fgets(s,20,in);
	fclose(in);
	printf("file coments : %s",s);
	return 0;
}
