#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("******  1. play     *******\n");
	printf("******  0. exit     *******\n");
	printf("***************************\n");
}
void game()
{
	printf("扫雷游戏\n");
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	// 设置雷
	SetBomb(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindBomb(mine, show, ROWS, COLS);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("输入: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;	
		case 0:
			printf("退出程序\n");
			break;	
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}