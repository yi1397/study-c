#include<stdio.h>
#include<math.h>
#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54
unsigned char B[HEIGHT][WIDTH];
unsigned char G[HEIGHT][WIDTH];
unsigned char R[HEIGHT][WIDTH];
unsigned char RESULT[HEIGHT][WIDTH];
int diff(int x, int y)
{
	int dx[4] = {0,1,0,-1};
	int dy[4] = {-1,0,1,0};
	int sum = 0;
	int i;
	for(i =0;i<4;i++)
	{
		sum += abs(B[x][y]-B[x+dx[i]][y+dy[i]]);
		sum += abs(G[x][y]-G[x+dx[i]][y+dy[i]]);
		sum += abs(R[x][y]-R[x+dx[i]][y+dy[i]]);
	}
	//printf("%d",sum);
	RESULT[x][y] = 255 - (unsigned char)(sum / (i*3));
	if(RESULT[x][y]<254) RESULT[x][y]+=(RESULT[x][y])/2;
}
int main()
{
	FILE *fp1 = fopen("1024x768.bmp", "rb");
	FILE *fp2 = fopen("1024x768_1.bmp", "wb");
	int i, j;
	for(i=0; i<HEADER; i++)
	{
		putc(getc(fp1), fp2);
	}
	for(i=0; i<HEIGHT; i++)
	{
		for(j=0;j<WIDTH;j++)
		{
			B[i][j] = getc(fp1);
			G[i][j] = getc(fp1);
			R[i][j] = getc(fp1);
		}
	}
	for(i=1; i<HEIGHT-1; i++)
	{
		for(j=1;j<WIDTH-1;j++)
		{
			diff(i,j);
		}
	}
	for(i=0; i<HEIGHT; i++)
	{
		for(j=0;j<WIDTH;j++)
		{
			putc(RESULT[i][j], fp2);
			putc(RESULT[i][j], fp2);
			putc(RESULT[i][j], fp2);
		}
	}
	return 0;
}
