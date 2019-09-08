#include<stdio.h>
FILE *out;
int main()
{
	out = fopen("190613 01.txt", "w");
	fputc('a',out);
	fputc('b',out);
	fputc('c',out);
	fclose(out);
	return 0;
}
