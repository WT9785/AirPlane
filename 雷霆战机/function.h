#ifndef _FUNCTION_H
#define _FUNCTION_H_
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<mmsystem.h>				//插入背景音乐
#pragma comment(lib,"winmm.lib")   //导入winmm.lib库,用以支持对windows 多媒体的编程.

typedef struct Node
{
	int x;
	int y;
	struct Node *pnext;
}NODE;

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 680
#define WIDTH 480

//我方战机尺寸
#define pw 86
#define ph 82

//敌方战机尺寸
#define aw 70
#define ah 70
//boss战机尺寸
#define boss1w 192
#define boss1h 290


//敌机重出现的y坐标
#define APStart -ah-20
#endif
