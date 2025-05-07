#include "game.h"

//�����������е��βζ��Ѿ���test.cpp�и�ֵ��

//��ʼ�����̵ĺ���,���������Ԫ�ض���Ϊ�ո�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ���̵ĺ���
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	
	for (i = 0; i < row; i++)//0 1 2
	{   //����Ǵ�ӡÿһ�е�ѭ������ӡ��   |   |   ��
		for (int j = 0; j < col; j++)//0 1 2
		{
			printf(" %c ", board[i][j]);
			
			if (j < col - 1)//0 1 
				printf("|");
		}
		printf("\n");
		
		//����Ǵ�ӡ������֮��ķָ�����ѭ��
		//��ӡ��---|---|---��
		if (i < row - 1)//0 1
		{   
			for (int j = 0; j < col; j++)//0 1 2
			{
				printf("---");//����Ǵ�ӡ�е� 0 1 2

				if (j < col - 1)//0 1
					printf("|");
			}
			printf("\n");
		}
	}
}

//�������ĺ���
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;//������
	int y = 0;//������
	printf("������壺>\n");

	while (1)
	{
		printf("���������꣺> ");
		//����Ҫ�����������к��ж�Ϊ1-3������Ա�Լ���ת��
		scanf_s("%d %d", &x, &y);
		
		//�����Ƿ�Ϸ����ж�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж������Ƿ��Ѿ���ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã��������壬��ѡ������λ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

//��������ĺ���
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�������壺>\n");

	int x = 0;
	int y = 0;

	while (1) 
	{
		//�������ֵ
		x = rand() % row;//0 1 2
		y = rand() % col;//0 1 2

		//�ж������Ƿ��Ѿ���ռ��
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
	}
}

//�ж������Ƿ�����˵ĺ���
//��ǰԼ��
//���˷���1
//��������0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}

	return 1;
}

//�ж���Ӯ�ĺ���
char IsWin(char board[ROW][COL], int row, int col)
{
	//���ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	//�ж���
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//û��Ӯ�����̷����˾�ƽ����
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}

	
	//��Ϸ����
	return 'C';
}