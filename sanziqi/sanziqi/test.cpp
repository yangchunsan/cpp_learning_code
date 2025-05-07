#include "game.h"

void menu()//���ǲ˵�����
{
    printf("#############################\n");
    printf("############1.play###########\n");
    printf("############0.exit###########\n");
    printf("#############################\n");
}
//����ʵ����Ϸ���ܵĺ���
void game()
//��Ҫʵ�ֵĹ����У���ӡ���̣��������壻��¼�������ݣ��ж���Ӯ
{
    char board[ROW][COL] = { 0 };
    //�������������������ݵ�����

    //�����ж���Ӯ�ĺ�������ֵ
    char ret = ' ';

    //�����ǳ�ʼ�����̵ĺ���
    InitBoard(board, ROW, COL);

    //�����Ǵ�ӡ���̵ĺ���
    Displayboard(board, ROW, COL);

    //����ĺ���
    while (1)
    {
        //�������
        PlayerMove(board, ROW, COL);
        Displayboard(board, ROW, COL);
        //�ж���Ӯ
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
        
        //��������
        ComputerMove(board, ROW, COL);
        Displayboard(board, ROW, COL);
        //�ж���Ӯ
        ret = IsWin(board, ROW, COL);

        if (ret != 'C')
        {
            break;
        }
    }
   
    if (ret == '*')
    {
        printf("���Ӯ��\n");
    }
    else if (ret == '#')
    {
        printf("����Ӯ��\n");
    }
    else if (ret == 'Q')
    {
        printf("ƽ��");
    }

    //������ӡ����״��
    Displayboard(board, ROW, COL);
}

int main()
//��Ϸ�����߼����ܲ�������Ϸ��������ʵ��������ܣ���������������������
{
    srand((unsigned)time(0));
    
    int input = 0;
    //��Ϸ��ʼǰ���ڴ����û���ѡ��

    do
    //��ΪҪ���������жϣ�����ζ��ѭ��������һ�飬���������ѭ��
    {
        menu();//��ӡ�˵�
        printf("��������ѡ��> ");
        scanf_s("%d", &input);
        //���ǽ���һ��do_whileѭ������������Ϊ�û����ܻ������������ֻ��߷���
        //������������дһ����֧�ṹ�ж��û������Ƿ���ϱ�׼
        //�������û���������Ļ���

        switch (input)
        {
        case 1:
            //����д����������Ϸ�ĺ���
            game();
            break;
        case 0:
            printf("�˳���Ϸ������\n");
            break;
        default:
            printf("�������\n");
            break;
        }


    } while (input != 0);
    //ֻ�е��û�����0�ǲ��ܽ���ѭ��

    return 0;
}

