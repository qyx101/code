#pragma once
#include <stdio.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define simple_count 10


// 初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);
// 打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
// 设置雷
void SetBomb(char board[ROWS][COLS], int row, int col);
// 排雷
void FindBomb(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);