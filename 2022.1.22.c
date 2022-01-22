#include <stdio.h>
#include <stdlib.h>
void menu()
{
    printf("******************\n");
    printf("*****扫雷小游戏***\n");
    printf("**1.开始**0.退出**\n");
    printf("******************\n");


}
void test()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                //game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("请重新选择\n");
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
