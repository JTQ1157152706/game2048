#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>
#include <stdbool.h>

#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...)
#endif

#define error(...) printf("%s %s:%d %s %m %s %s\n",__FILE__,__func__,__LINE__,__VA_ARGS__,__DATE__,__TIME__)

//随机位置产生一个2
void rand_two(void);
//显示界面
void show_view(void);
//判断是否失败
bool is_die(void);

#endif//TOOLS_H



