#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("----------------------------------\n");
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------------\n");
}
void SetBomb(char board[ROWS][COLS], int row, int col)
{
	int count = simple_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int CountBomb(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindBomb(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	while (win < ROW*COL-10)
	{
		printf("输入排查坐标: ");
		scanf("%d %d", &x, &y);
		// 判断输入合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				break;	
			}
			else if (show[x][y] != '*')
			{
				printf("该坐标被排查了，重新输入坐标\n");
			}
			else
			{
				// 统计坐标周围 雷的个数
				int ret = CountBomb(mine, x, y);
				show[x][y] = ret + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("非法输入, 重新输入坐标\n");
		}
	}
	if (win == ROW * COL - 10)
	{
		printf("赢了\n");
	}
}