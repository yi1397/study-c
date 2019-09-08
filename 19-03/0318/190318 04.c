#include<stdio.h>
int main(){
	int a,b,sum,minus,multi,divide,modulo;
	printf("µÎ ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	minus=a-b;
	multi=a*b;
	divide=a/b;
	modulo=a%b;
	printf("µ¡¼À °á°ú´Â = %d\n",sum);
	printf("»¬¼À °á°ú´Â = %d\n",minus);
	printf("°ö¼À °á°ú´Â = %d\n",multi);
	printf("³ª´°¼À °á°ú´Â = %d\n",divide);
	printf("³ª¸ÓÁö´Â = %d\n",modulo);
	return 0;
}
