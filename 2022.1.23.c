#include "game.h"
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i = 0;
    int j = 0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            board[i][j] = set;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS],int row,int col)//打印棋盘

{
    int i = 0;
    int j = 0;
    for(i=0;i<=row;i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    for(i=1;i<=row;i++)
    {
        printf("%d ",i);
        for(j=1;j<=col;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}
void Setmine(char board[ROWS][COLS],int row,int col)//设置任意位置的雷
{
    int count =leishu;
    while(count)//没放满leishu个不停止
    {
        int x = rand()%row+1;//1-9
        int y = rand()%col+1;//1-9
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        }
    }
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
    return mine[x-1][y]+
    mine[x-1][y-1]+
    mine[x][y-1]+
    mine[x-1][y+1]+
    mine[x][y+1]+
    mine[x+1][y+1]+
    mine[x+1][y-1]+
    mine[x+1][y] - 8*'0';
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while(win<row*col-leishu)
    {

        printf("请输入安全坐标:>  ");
        scanf("%d %d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            //坐标合法
            if(mine[x][y]=='1')//情况一 踩雷
            {
                printf("恭喜你，你被雷炸死\n");
                DisplayBoard(mine,row,col);
                break;
            }
            else//情况二 不是雷 计算x，y周围几个雷
            {
               int count = get_mine_count(mine,x,y);
               show[x][y] = count + '0';
               DisplayBoard(show,row,col);
               win++;
            }
        }
        else
        {
            printf("输入非法坐标，请重新输入\n");
        }


    }
    if(win==row*col-leishu)
    {
        printf("恭喜你，排雷成功\n");
        DisplayBoard(mine,row,col);
    }

}
