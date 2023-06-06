#ifndef GAME2048_H
#define GAME2048_H

#include <stdbool.h>

extern int (*view)[4];
extern bool is_move_merge;

//	初始化函数 申请资源、加载数据
void init_game(void);

//	启动函数
void start_game(void);

//	结束函数 保存数据、释放资源
void end_game(void);

#endif//GAME2048_H
