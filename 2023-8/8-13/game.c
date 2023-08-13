#pragma once
#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void Displayboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf("%c  | %c | %c\n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// 打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		// 打印分割行
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");
	while (1)
	{
		int x, y;
		printf("输入坐标: \n");
		scanf("%d %d", &x, &y);
		// 判断输入
		if (x <= row && x >= 1 && y <= col && y >= 1)
		{
			// 判断坐标是否占用
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("坐标占用\n");
			}
		}
		else
		{
			printf("输入错误\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x, y;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		// 判断
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//玩家赢 - '*'
//电脑赢 - '#'
//平局 --- 'E'
//游戏继续-'C'

int is_equal(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_Win(char board[ROW][COL], int row, int col)
{
	// 判断 电脑/玩家 输赢
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][0] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] == board[0][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[0][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == board[0][2] && board[2][0] != ' ')
	{
		return board[1][1];
	}
	
	// 平局
	int ret = is_equal(board, row, col);
	if (ret == 1)
	{
		return 'E';
	}

	// 没结束
	return 'C';
}
