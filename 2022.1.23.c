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
void DisplayBoard(char board[ROWS][COLS],int row,int col)//��ӡ����

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
void Setmine(char board[ROWS][COLS],int row,int col)//��������λ�õ���
{
    int count =leishu;
    while(count)//û����leishu����ֹͣ
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

        printf("�����밲ȫ����:>  ");
        scanf("%d %d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            //����Ϸ�
            if(mine[x][y]=='1')//���һ ����
            {
                printf("��ϲ�㣬�㱻��ը��\n");
                DisplayBoard(mine,row,col);
                break;
            }
            else//����� ������ ����x��y��Χ������
            {
               int count = get_mine_count(mine,x,y);
               show[x][y] = count + '0';
               DisplayBoard(show,row,col);
               win++;
            }
        }
        else
        {
            printf("����Ƿ����꣬����������\n");
        }


    }
    if(win==row*col-leishu)
    {
        printf("��ϲ�㣬���׳ɹ�\n");
        DisplayBoard(mine,row,col);
    }

}