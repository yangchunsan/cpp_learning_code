#include "game.h"

//其中下面所有的形参都已经在test.cpp中赋值了

//初始化棋盘的函数,将数组里的元素都变为空格
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

//打印棋盘的函数
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	
	for (i = 0; i < row; i++)//0 1 2
	{   //这个是打印每一行的循环，打印“   |   |   ”
		for (int j = 0; j < col; j++)//0 1 2
		{
			printf(" %c ", board[i][j]);
			
			if (j < col - 1)//0 1 
				printf("|");
		}
		printf("\n");
		
		//这个是打印行与行之间的分隔符的循环
		//打印“---|---|---”
		if (i < row - 1)//0 1
		{   
			for (int j = 0; j < col; j++)//0 1 2
			{
				printf("---");//这个是打印列的 0 1 2

				if (j < col - 1)//0 1
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋的函数
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;//横坐标
	int y = 0;//纵坐标
	printf("玩家下棋：>\n");

	while (1)
	{
		printf("请输入坐标：> ");
		//这里要求玩家输入的行和列都为1-3，程序员自己做转换
		scanf_s("%d %d", &x, &y);
		
		//坐标是否合法的判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断坐标是否已经被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，不能下棋，请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

//电脑下棋的函数
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋：>\n");

	int x = 0;
	int y = 0;

	while (1) 
	{
		//生成随机值
		x = rand() % row;//0 1 2
		y = rand() % col;//0 1 2

		//判断坐标是否已经被占用
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
	}
}

//判断棋盘是否放满了的函数
//提前约定
//满了返回1
//不满返回0
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

//判断输赢的函数
char IsWin(char board[ROW][COL], int row, int col)
{
	//先判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	//判断列
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//没人赢且棋盘放满了就平局了
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}

	
	//游戏继续
	return 'C';
}