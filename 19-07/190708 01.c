#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int com[3] = {0, };
	int gamer[3] = {0, };
	int guess[10] = {0, };
	int count, i;
	int strike, ball;
	puts("야구 게임을 시작합니다.");
	while(1)
	{
		srand(time(NULL));
		while(1)
		{
			com[0] = rand() % 10;
			com[1] = rand() % 10;
			com[2] = rand() % 10;
			if(com[0]!=com[1] && com[1]!=com[2] && com[0]!=com[2]) break;
		}
		count = 1;
		puts("슷자0~9를 공백으로 분리하여 3개 입력하고 엔터키를 치세요!!");
		memset(guess, 0, sizeof(guess));
		//0printf("%d %d %d\n",com[0], com[1], com[2]);
		while(1)
		{
			strike = 0, ball = 0;
			for(i = 0; i<10; i++)
				printf("%d ",guess[i]);
			printf("\n3개의 숫자[0~9]를 입력하세요:");
			scanf("%d %d %d", &gamer[0], &gamer[1], &gamer[2]);
			if(gamer[0]<0 || 9<gamer[0])
			{
				printf("잘못입력하셨습니다.");
				continue;
			}
			if(gamer[1]<0 || 9<gamer[1])
			{
				printf("잘못입력하셨습니다.");
				continue;
			}
			if(gamer[2]<0 || 9<gamer[2])
			{
				printf("잘못입력하셨습니다.");
				continue;
			}
			if(com[0]==gamer[0]) strike++;
			else ball++;
			if(com[1]==gamer[1]) strike++;
			else ball++;
			if(com[2]==gamer[2]) strike++;
			else ball++;
			guess[gamer[0]] = 1; guess[gamer[1]] = 1; guess[gamer[2]] = 1;
			printf("\n[%2d회] %d 스트라이크 %d 볼\n\n", count, strike, ball);
			if(strike == 3) break;
			count++;
		}
	}
	return 0;
}
