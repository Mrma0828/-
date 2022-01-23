
#include "game.h"
void menu()
{
    printf("*********************\n");
    printf("*******游戏开始******\n");
    printf("**1.开始*****0.退出**\n");
    printf("*********************\n");

}
void game()
{
    //布置初始化雷的信息
    char mine[ROWS][COLS]={0};
    //排查出来的信息并且打印出来
    char show[ROWS][COLS]={0};
    //初始化棋盘
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //打印棋盘

    //布置雷
    Setmine(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //扫雷
    Findmine(mine,show,ROW,COL);
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择\n");
        scanf("%d",&input);

        switch(input)
        {
        case 1:
            printf("游戏开始\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("格式错误，请重新输入\n");
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
