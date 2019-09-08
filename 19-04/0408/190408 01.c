#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c) && (b+c>a) && (c+a>b))
	{
		if(a==b && a==c && b==c) printf("Á¤»ï°¢Çü");
		else if((a==b) || (a==b) || (b==c)) printf("ÀÌµîº¯»ï°¢Çü");
		else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)) printf("Á÷°¢»ï°¢Çü");
		else printf("»ï°¢Çü");
	}
	else printf("»ï°¢Çü ¾Æ´Ô");
	return 0;
}
