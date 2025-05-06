#include "game.h"

void menu()//这是菜单函数
{
    printf("#############################\n");
    printf("############1.play###########\n");
    printf("############0.exit###########\n");
    printf("#############################\n");
}
//这是实现游戏功能的函数
void game()
//需要实现的功能有：打印棋盘；电脑下棋；记录棋盘数据；判断输赢
{
    char board[ROW][COL] = { 0 };
    //这是用来储存棋盘数据的数组

    //储存判断输赢的函数返回值
    char ret = ' ';

    //下列是初始化棋盘的函数
    InitBoard(board, ROW, COL);

    //下列是打印棋盘的函数
    Displayboard(board, ROW, COL);

    //下棋的函数
    while (1)
    {
        //玩家下棋
        PlayerMove(board, ROW, COL);
        Displayboard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
        
        //电脑下棋
        ComputerMove(board, ROW, COL);
        Displayboard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);

        if (ret != 'C')
        {
            break;
        }
    }
   
    if (ret == '*')
    {
        printf("玩家赢了\n");
    }
    else if (ret == '#')
    {
        printf("电脑赢了\n");
    }
    else if (ret == 'Q')
    {
        printf("平局");
    }

    //在最后打印棋盘状况
    Displayboard(board, ROW, COL);
}

int main()
//游戏的主逻辑是能不能玩游戏，所以先实现这个功能，并把它放在主函数里面
{
    srand((unsigned)time(0));
    
    int input = 0;
    //游戏开始前用于储存用户的选择

    do
    //因为要先输入再判断，这意味着循环必须走一遍，所以用这个循环
    {
        menu();//打印菜单
        printf("现在请你选择：> ");
        scanf_s("%d", &input);
        //但是仅仅一个do_while循环还不够，因为用户可能会输入错误的数字或者符号
        //所以这里再来写一个分支结构判断用户输入是否符合标准
        //并给予用户重新输入的机会

        switch (input)
        {
        case 1:
            //这里写入三子棋游戏的函数
            game();
            break;
        case 0:
            printf("退出游戏！！！\n");
            break;
        default:
            printf("输入错误\n");
            break;
        }


    } while (input != 0);
    //只有当用户呼入0是才能结束循环

    return 0;
}

