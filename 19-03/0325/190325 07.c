#include<stdio.h>
int main(){
	float f = 3.1415926535897932384626;
	double d = 3.1415926535897932384626;
	double e1 = 0.56789;
	double e2 = 234.56789;
	printf("%f\n",f);
	printf("%.10f\n",f);
	printf("%lf\n",d);
	printf("%.20lf\n",d);
	printf("%e\n",e1);
	printf("%e\n",e2);
	return 0;
}
