#include <getch.h>
#include <stdlib.h>
#include <time.h>
#include "game2048.h"
#include "tools.h"
#include "direction.h"

int (*view)[4] = NULL;
bool is_move_merge = true;

//	初始化函数 申请资源、加载数据
void init_game(void)
{
	debug("%s\n",__func__);
	view = calloc(sizeof(view[0][0]),4*4);
	srand(time(NULL));
}

//	启动函数
void start_game(void)
{
	debug("%s\n",__func__);
	for(;;)
	{
		//1、随机位置产生一个2
		rand_two();
		//2、显示界面
		show_view();
		
		is_move_merge = false;
		
		//3、获取方向键并处理
		switch(getch())
		{
			case 183:	up();	break;
			case 184:	down();	break;
			case 186:	left();	break;
			case 185:	right();break;
		}
		//4、判断是否游戏结束
		if(is_die())
		{
			return;
		}
	}
}

//	结束函数 保存数据、释放资源
void end_game(void)
{
	debug("%s\n",__func__);
}

