#include<stdio.h>
int main(){
	char a=127;
	short b=32767;
	int c=2147483647;
	long int d=321356;
	long long int e=35135354843;
	float f=4;
	double g=10;
	printf("정수 (char) = %d\n", a);
	printf("정수 (short) = %d\n", b);
	printf("정수 (int) = %d\n", c);
	printf("%정수 (long int) = %ld\n", d);
	printf("정수 (long long int) = %lld\n", e);
	printf("실수 (float) = %f\n", f);
	printf("실수 (double) = %lf\n", g);
	return 0;
}
