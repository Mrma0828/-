#include <stdio.h>
#include <stdlib.h>
void menu()
{
    printf("******************\n");
    printf("*****ɨ��С��Ϸ***\n");
    printf("**1.��ʼ**0.�˳�**\n");
    printf("******************\n");


}
void test()
{
    int input = 0;
    do
    {
        menu();
        printf("��ѡ��\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                //game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("������ѡ��\n");
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
