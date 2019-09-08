#include<stdio.h>
#include<string.h>
struct SHuman
{
	char name[12];
	int age;
	double height;
};
struct SBook
{
	char title[20];
	int pages;
	struct SHuman author;
};
int main()
{
	struct SBook api = 
	{
		"C 정복", 2100, {"김상형", 48, 178}
	};
	printf("저자 = %s\n", api.author.name);
}
