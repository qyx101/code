#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("*****   1. play    ******\n");
	printf("*****   0. exit    ******\n");
	printf("*************************\n");
}

void game()
{
	char ret;
	char board[ROW][COL];
	Initboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'E')
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}