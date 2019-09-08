#include<stdio.h>
int data[100];
int array_length;
int array_delete(int value)
{
	int move_dist[100]={0,};
	int point = 0;
	int flag = 0;
	for(int i=0; i<array_length;i++)
	{
		if(data[i] == value){
			flag++;
		}
		move_dist[i+1] = flag;
	}
	if(flag==0) return printf("no value\n");
	for(int i=0; i<array_length; i++)
	{
		data[i-move_dist[i]] = data[i];
	}
	array_length-=flag;
	return 0;
}
int array_add(int point, int value)
{
	for(int i = array_length; point<i; i--)
	{
		data[i] = data[i-1];
	}
	data[point] = value;
	array_length++;
	return 0;
}
int main()
{
	for(int i=0; i<10; i++)
	{
		scanf("%d",&data[i]);
	}
	array_length = 10;
	while(array_length!=0)
	{
		int move_mode;
		printf("\n0:remove 1:add\n");
		scanf("%d",&move_mode);
		if(move_mode==0)
		{
			int value;
			scanf("%d",&value);
			array_delete(value);
		}
		if(move_mode==1)
		{
			int point;
			int value;
			printf("\n(추가할 위치) (추가할 값)\n");
			scanf("%d %d",&point,&value);
			if(array_length<point) printf("out_length\n");
			else array_add(point,value);
		}
		int point;
		for(int i=0; i<array_length; i++) printf("%d ",data[i]);
		printf("\n");
	}
	return 0;
}
