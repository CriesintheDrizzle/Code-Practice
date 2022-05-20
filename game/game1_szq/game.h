#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//棋盘属性
#define ROW 3
#define COL 3

//初始化棋盘函数的声明
void InitBoard(char board, int row, int col);

//打印棋盘函数的声明
void DisplayBoard(char board, int row, int col);

//玩家下棋函数声明
void PlayerMove(char board, int row, int col);

//电脑下棋函数声明
void ComputerMove(char board, int row, int col);


//判断输赢函数的声明
char IsWin(char board, int row, int col);