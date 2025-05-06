#pragma once

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

//��ʼ�����̵�����
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵�����
void Displayboard(char board[ROW][COL], int row, int col);

//������������
void PlayerMove(char board[ROW][COL], int row, int col);

//�������������
//�ҿհ׵ĸ��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ - ��*��
//����Ӯ - ��#��
//ƽ�� -��Q'
//���� -��C��

char IsWin(char board[ROW][COL], int row, int col);