#pragma once

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

//初始化棋盘的声明
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的声明
void Displayboard(char board[ROW][COL], int row, int col);

//玩家下棋的声明
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋的声明
//找空白的格子随便下
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
//玩家赢 - ‘*’
//电脑赢 - ‘#’
//平局 -‘Q'
//继续 -‘C’

char IsWin(char board[ROW][COL], int row, int col);