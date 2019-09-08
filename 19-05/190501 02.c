#include<stdio.h>
int main()
{
	int i;
	int *t;		//포인터 변수 t를 선언 
	int b[3] = {10,20,30};
	t=b;
	//배열의 이름이 곧 주소이므로 t = &b와 같이 
	//쓰지 않고 t = b와 같이 써서 포인터 변수 
	t에 배열b의 주소를 삽입 
	for(i = 0; i<3; i++)
	{
		printf("%d ",*(t+i));
	}
}
