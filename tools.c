#include <stdlib.h>
#include "tools.h"
#include "game2048.h"

static bool is_full(void)
{
	int* arr = (int*)view;
	for(int i=0; i<16; i++)
	{
		if(0 == arr[i]) return false;
	}
	return true;
	/*
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(0 == view[i][j]) return false;	
		}		
	}
	return true;
	*/
}

//随机位置产生一个2
void rand_two(void)
{
	debug("%s\n",__func__);
	if(is_full())
	{
		debug("没有空位置!\n");
		return;
	}
	for(;is_move_merge;)
	{
		int x = rand()%4;
		int y = rand()%4;
		if(0 == view[x][y])
		{
			view[x][y] = 2;
			return;
		}	
	}
	debug("没有移动合并\n");
}

//显示界面
void show_view(void)
{
	debug("%s\n",__func__);
	system("clear");
	for(int i=0; i<4; i++)
	{
		printf("---------------------\n");
		for(int j=0; j<4; j++)
		{
			if(view[i][j])
			{
				printf("|%4d",view[i][j]);
			}
			else
			{
				printf("|    ");
			}	
		}
		printf("|\n");
	}
	printf("---------------------\n");
}

//判断是否失败
bool is_die(void)
{
	debug("%s\n",__func__);
	return false;
}
