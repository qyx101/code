#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define ROW 3
#define COL 3

// 初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
// 打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
// 玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
// 输赢判断
char is_Win(char board[ROW][COL], int row, int col);

