
#include "game.h"
void menu()
{
    printf("*********************\n");
    printf("*******��Ϸ��ʼ******\n");
    printf("**1.��ʼ*****0.�˳�**\n");
    printf("*********************\n");

}
void game()
{
    //���ó�ʼ���׵���Ϣ
    char mine[ROWS][COLS]={0};
    //�Ų��������Ϣ���Ҵ�ӡ����
    char show[ROWS][COLS]={0};
    //��ʼ������
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //��ӡ����

    //������
    Setmine(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //ɨ��
    Findmine(mine,show,ROW,COL);
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��\n");
        scanf("%d",&input);

        switch(input)
        {
        case 1:
            printf("��Ϸ��ʼ\n");
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("��ʽ��������������\n");
            break;
        }

    }
    while(input);
}
int main()
{
    test();
    return 0;
}
