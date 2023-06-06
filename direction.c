#include "direction.h"
#include "tools.h"
#include "game2048.h"

//	上
void up(void)
{
	debug("%s\n",__func__);
	for(int y=0; y<4; y++)
	{
		int end = 0;
		for(int x=1; x<4; x++)
		{
			for(int i=x; i>end; i--)
			{
				//	移动
				if(view[i][y] && 0 == view[i-1][y])
				{
					view[i-1][y] = view[i][y];
					view[i][y] = 0;
					is_move_merge = true;
				}
				//	合并
				else if(view[i][y] 
				&& view[i-1][y] == view[i][y])
				{
					view[i-1][y] *= 2;
					view[i][y] = 0;
					end = i;
					is_move_merge = true;
				}
			}	
		}
	}
}

//	下
void down(void)
{
	debug("%s\n",__func__);
}

//	左
void left(void)
{
	debug("%s\n",__func__);
}

//	右
void right(void)
{
	debug("%s\n",__func__);
}
