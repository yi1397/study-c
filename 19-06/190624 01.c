#include<stdio.h>
int main()
{
	FILE *f;
	char buf[256];
	f = fopen("c:\\Temp\\Text.txt", "rt");
	if(f != NULL)
	{
		fseek(f, 24, SEEK_SET);
		fgets(buf,256, f);
		printf("%s", buf);
		fclose(f);
	}
}
