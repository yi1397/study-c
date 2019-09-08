#include<stdio.h>
int main()
{
	int n = 10;
	int arr[n];
	arr[0]=5;
	printf("arr[0]`s address = %p\n",&arr[0]);
	printf("arr[1]`s address = %p\n",&arr[1]);
	printf("arr[2]`s address = %p\n",&arr[2]);
	printf("arr[3]`s address = %p\n",&arr[3]);
	printf("arr[4]`s address = %p\n",&arr[4]);
	return 0;
}
