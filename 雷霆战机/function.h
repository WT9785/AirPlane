#ifndef _FUNCTION_H
#define _FUNCTION_H_
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<mmsystem.h>				//���뱳������
#pragma comment(lib,"winmm.lib")   //����winmm.lib��,����֧�ֶ�windows ��ý��ı��.

typedef struct Node
{
	int x;
	int y;
	struct Node *pnext;
}NODE;

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 680
#define WIDTH 480

//�ҷ�ս���ߴ�
#define pw 86
#define ph 82

//�з�ս���ߴ�
#define aw 70
#define ah 70
//bossս���ߴ�
#define boss1w 192
#define boss1h 290


//�л��س��ֵ�y����
#define APStart -ah-20
#endif
