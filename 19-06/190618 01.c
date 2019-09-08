#include<stdio.h>
int main()
{
	FILE *fp = NULL;
	int c, no=0;
	char line[100];
	fp = fopen("sample.txt", "r");
	if(fp == NULL) printf("파일열기 실패!\n");
	while( (c=fgetc(fp)) != EOF )
	{
		putchar(c);
		no++;
	}
	fclose(fp);
	return 0;
}
