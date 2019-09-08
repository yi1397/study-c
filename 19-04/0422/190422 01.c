#include<stdio.h>
int main()
{
	char c;
	while(1)
	{
		printf("I:추가 D:삭제 S:검색 L:전체출력\n");
		printf("메뉴 선택:");
		scanf(" %c",&c);
		switch(c)
		{
			case 'i': case 'I': printf("추가\n"); break;
			case 'd': case 'D': printf("삭제\n"); break;
			case 's': case 'S':	printf("검색\n"); break;
			case 'l': case 'L':	printf("전체 출력\n"); break;
			case 'e': case 'E': printf("종료\n"); return 0;
			default: printf("잘못 선택하셨네요.\n"); break;
		}
	}
}
